# Limit Memory

Try to limit memory consumption of a program...

```
$ ulimit -a
$ gcc mem-alloc.c
# allocate 4 MB, but limit all virtual memory to 3000 KB
$ ( ulimit -v 4000 ; ./a.out 4 ; echo $? ) # run in sub-shell
```
