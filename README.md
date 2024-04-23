<center>

# # $ shellatina - Simple Shell :custard: 
</center>

# What is shell? :shell:

 It is a command or command interpreter; a program that provides a user interface to access and interact with an operating system

<p align="center">
  <img src="https://weblinus.com/wp-content/uploads/2021/02/Shell1.jpeg" alt="printf">
</p>

## Compilation 
code will be compiled this way: 
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
## Project functions (for now) 

The functions used to copiled shell.c are all included in shell.h :

- int _fork();
- int _execve(const char *file, const char *argv, const char *envp);
- char *tokens_(char *s1, const char *delim);
- char *get_env(const char *name);

## Author :man_technologist:

*Hernán Alegresa*\
Holberton School, Cohort 23

*Nicolas Bonilla*\
Holberton School, Cohort 23

*Pablo Espìnola*\
Holberton School, Cohort 23
