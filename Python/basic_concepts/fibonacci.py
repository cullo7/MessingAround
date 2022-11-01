simport time

array=[0]*100

def fib(n):
    f1=0
    f2=0
    if n < 2:
        return 1
    if array[n-1]>0:
        f1= array[n-1]
    else:
        f1 = fib(n-1)
        array[n-1]=f1

    if array[n-2]>0:
        f2= array[n-2]
    else:
        f2 = fib(n-2)
        array[n-2]=f2
        
    return f1 + f2

for x in range(100):
    start = time.time()
    f = fib(x)
    end = time.time()
    print("fib(%d): %d time: %5.10f" % (x,fib(x),end-start))
