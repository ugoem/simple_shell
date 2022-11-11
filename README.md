# Simple_shell
Programming simple shell project using C language

## Description
Here the task is to create a simple shell program or UNIX command interpreter.
The program must have the exact same output as sh (/bin/sh) as well as the
exact same error output. The only difference is when you print an error, the
name of the program must be equivalent to your argv[0].

---

## Instructions

* Compiling the program:
`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

* Interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

* Non-interactie mode:
```

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
---
