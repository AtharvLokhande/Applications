#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CreatFile(char Name[])
{
    int fd = 0;
    fd = creat(Name, 0777);
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that ypu want to create :");
    scanf("%s",Fname);

    fd = CreatFile(Fname);

    if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File is sucessfully created eith FD %d\n",fd);
    }

    return 0;
}