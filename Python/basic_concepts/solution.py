import numpy.minimum as minimum

class Solution:
    min = 0;
    def jump(self, nums: List[int]) -> int:
        if len(nums) == 0:
            return 0;
        mins=[]
        for x in range(nums[0]):
            if(x < len(nums)):
                mins.append(x+jump(nums[1:]))
        return minimum(mins)

#Tests

s = Solution()
print("input: [2,3,0,1,4]")
print("output: %d" % s.jump([2,3,0,1,4]))
