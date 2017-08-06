#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void main()
{
    int fd;
    int fd1;
    char *buf = "987654321";  
    char buf1[10];

    fd = open("/home/test.c",O_RDWR|O_CREAT,0755);
 
    if(fd<0)
        printf("open file fail!\n");

    fd1 = dup(fd);

    write(fd, buf, 7);

    lseek(fd,0,SEEK_SET);

    read(fd, buf1, 5);
    buf1[5] = '\0';

    printf("buf1 is %s\n",buf1);

    close(fd);

}
