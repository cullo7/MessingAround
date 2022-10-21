Example 1.1: git add . vs. git add -u vs. git add -A (--all)
Note: 	git add -A = git add . && git add -u

Three files that i will push to the github repo, but adding, then changing staged files, "then adding" using all three commands on corresponding files.

file1.text -> git add .
file2.text -> git add -u
file3.text -> git add -A

Conclusion 1.1:   git add seemed to work as git add -u as well, perhaps they've been integrated at this point?

Example 1.2: redo Example 1.1

Conclusion 1.2

Example 1.3: testing git -u

Procedure:
1.	Create and stage a file
2.	Create another file
3.	Run `git add -u [file]`
4.	commit
5.	push

Conclusion 1.3

