#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int main()
{
    char Fname[20];
    int fd = 0;
    char Data[] = "Marvellous";

    printf("Enter the file name that ypu want to open\n :");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open the file\n");
    }
    else
    {
        printf("File is sucessfully Open eith FD %d\n",fd);
        write(fd,Data,10);
    }

    return 0;
}