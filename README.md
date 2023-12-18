<div align="center">
    <h1>Simple Shell Project</h1>
</div>

A simple UNIX command interpreter.

## Description:

is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.

## Install shell:

```
git clone https://github.com/NicoBoni55/holbertonschool-simple_shell.git
```

### Compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
./hsh
```
Non-interactively mode is a standard input not connected to a terminal, it reads and executes received commands in order.

## Testing
in interactive mode:
```
$ ./hsh
(#cisfun$ ) /bin/ls
AUTHORS  Pre_shell  README.md  environ.c  exec.c  hsh  int_command.c  shell.c  shell.h
(#cisfun$)
(#cisfun$) exit
$
```
in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
AUTHORS  Pre_shell  README.md  environ.c  exec.c  hsh  int_command.c  shell.c  shell.h
$
```

##General

* Who designed and implemented the original Unix operating system
* Who wrote the first version of the UNIX shell
* Who invented the B programming language (the direct predecessor to the C programming language)
* Who is Ken Thompson
* How does a shell work
* What is a pid and a ppid
* How to manipulate the environment of the current process
* What is the difference between a function and a system call
* How to create processes
* What are the three prototypes of main
* How does the shell use the PATH to find the programs
* How to execute another program with the execve system call
* How to suspend the execution of a process until one of its children terminates
* What is EOF / “end-of-file”?


## List of allowed functions and system calls+:

all functions from string.h
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* printf (man 3 printf)
* fprintf (man 3 fprintf)
* vfprintf (man 3 vfprintf)
* sprintf (man 3 sprintf)
* putchar (man 3 putchar)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## Authors :black_nib:

* Nicolas Bonilla <[NicoBoni55](https://github.com/NicoBoni55)>
