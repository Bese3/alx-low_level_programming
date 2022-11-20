#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
//#include<sys/wait.h>

int main ()
{

    pid_t = pid;
    pid = fork();
    if (pid == -1)
        return 1;
    if (pid == 0)
    {
        ssize_t n = 30;
     char *buf =malloc(sizeof(char)*n);
     printf("enter ur name\n");
      getline(&buf , &n ,stdin);
    }
    else {
        wait(pid);
    printf("parent process is done");
    }
    return 0;
}
