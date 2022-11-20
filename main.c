#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main ()
{

    
   pid_t pid = fork();
    if (pid == -1)
        return 1;
    if (pid == 0)
    {
        ssize_t n = 30;
     char *buf =malloc(sizeof(char)*n);
     for (int i = 0; i <= n ; i++){
     printf("$");
      getline(&buf , &n ,stdin);
      char *argv[] = {"/bin/ls" , "-l" , NULL };
      int val = execve(argv[0] , argv , NULL);
		      
       printf("%s \n" ,buf);
       } 
    }
    else {
        wait(NULL);
    printf("parent process is done\n");
    
   }
    
    return 0;
}
