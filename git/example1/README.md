Example 1.1: git add . vs. git add -u vs. git add -A (--all)
Note: 	git add -A = git add . && git add -u

Three files that i will push to the github repo, but adding, then changing staged files, "then adding" using all three commands on corresponding files.

file1.text -> git add .
file2.text -> git add -u
file3.text -> git add -A

Conclusion 1.1:   git add seemed to work as git add -u as well, perhaps they've been integrated at this point?

Example 1.2: redo Example 1.1

Conclusion 1.2: Turns out i misunderstood [1] and git add . does as modifications, which is what I found in example1.1/2 

Example 1.3: testing git -u

Procedure:
1.	Create and stage a file
2.	Create another file
3.	Run `git add -u [file]`
4.	commit
5.	push

Conclusion 1.3: git add -u worked as expected, it stage the newly made file

Example1.4: git add . doesn't stage removed files [TRUE/FALSE]

Conclusion1.4: FALSE, it does

Example1.5: git add -a doesn't add changes from higher directories (but git add -A does)

Procedure:
1.	Create higher_dir directory
2.	Create higher_dir/lower_dir directory
3.	Create higher_dir/lower_dir/file
4.	Create higher_dir/file
5.	run `git add .` in higher_dir/lower_dir/
6.	run `git add -A` in higher_dir/lower_dir/

Conclusion1.5: Hypothesis is correct, git add . Doesn't add changes in higher directories

Sources:

1.	https://stackoverflow.com/questions/572549/difference-between-git-add-a-and-git-add
