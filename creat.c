#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main()
{
    int fd;  

    fd = creat("/home/back1.txt",0621);
 
    if(fd<0)
        printf("open file fail!\n");

}
