#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>

int stat_()
{
        struct stat statbuf;

        if (stat("/etc/passwd", &statbuf) == -1)
        {
                perror("stat");
                return(1);
        }
        printf("%ld\n", statbuf.st_size);

        printf("%o\n", statbuf.st_mode);

        printf("%d\n",statbuf.st_uid);

        return(0);
}
