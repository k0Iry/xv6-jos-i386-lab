#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

void feed(int fd, int prime)
{
    int p[2];
    pipe(p);
    if (fork() == 0)
    {
        close(p[1]);
        int number = 0;
        read(p[0], &number, sizeof(int));
        if (number)
            feed(p[0], number);
        close(p[0]);
    }
    else
    {
        printf("number: %d\n", prime);
        close(p[0]);
        int number = 0;
        while (read(fd, &number, sizeof(int)))
        {
            if (number % prime)
            {
                write(p[1], &number, sizeof(int));
            }
        }
        close(p[1]);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("usage: ./primes limit\n");
        exit(EXIT_FAILURE);
    }
    
    int p[2];
    pipe(p);
    pid_t pid = fork();
    if (pid == 0)
    {
        close(p[1]);
        feed(p[0], 2);
        close(p[0]);
    }
    else
    {
        close(p[0]);
        for (int i = 2; i <= atoi(argv[1]); i++)
        {
            write(p[1], &i, sizeof(int));
        }
        close(p[1]);
    }

    exit(EXIT_SUCCESS);
}