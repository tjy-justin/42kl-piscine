https://www.youtube.com/playlist?list=PLxeKVrYoZO6B64HVamfG1d8Jb2XIrNuRO

# How to Use Vim
:x Saves and quits
:q! Quits and discards

# ex00
https://www.garron.me/en/go2linux/ls-file-permissions.html

# ex01
https://linux.die.net/man/1/chmod
https://linux.die.net/man/1/touch
https://askubuntu.com/questions/62492/how-can-i-change-the-date-modified-created-of-a-file

```
-a = accessed
-m = modified
-t = timestamp - use [[CC]YY]MMDDhhmm[.ss] time format
```

```
$ chmod 777 test1
$ chmod u+rwx,g+rwx,o-rwx
```

| # | Permission              | bin | rwx  |
| - | ----------------------- | --- | ---- |
| 7 | read, write and execute | 111 | rwx  |
| 6 | read and write          | 110 | rw-  |
| 5 | read and execute        | 101 | r-x  |
| 4 | read only               | 100 | r--  |
| 3 | write and execute       | 011 | \-wx |
| 2 | write only              | 010 | \-w- |
| 1 | execute only            | 001 | \--x |
| 0 | none                    | 000 | \--- |

# ex02
https://linux.die.net/man/1/ln
https://www.geeksforgeeks.org/difference-between-hard-link-and-soft-link/

# ex03
https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent
https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account

# ex04
https://linux.die.net/man/1/ls

# ex05
https://git-scm.com/docs/git-log
https://www.atlassian.com/git/tutorials/git-log