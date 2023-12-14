#include <stdio.h>
#include <unistd.h>
/*
* ppid - PPID
*
* return : always 0
*/
int main(void)
{
    pid_t my_ppid;

    my_ppid = getppid();
    printf("%d\n", my_ppid);
	return 0;
}
