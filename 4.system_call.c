#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void childTask()
{
    printf("Hello World\n");
}

void parentTask()
{
    printf("Main Task\n");
}

int main()
{
    pid_t pid = fork();
    if(pid == 0)
    {
        childTask();
        exit(EXIT_SUCCESS);
    }
    else if(pid>0)
    {
        wait(NULL);
        parentTask();
    }
    else
    {
        printf("Unable to create child");
    }
    return EXIT_SUCCESS;
}

//      To run use 
//          gcc filename
//          ./a.out