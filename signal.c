#include "timer.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Alonte Cuffee

int t = 0;


void handler(int signum)
{ //signal handler
    printf("Hello World!\n");
    t = 1;
    alarm(1);
}


int main(int argc, char *argv[])
{
    signal(SIGALRM, handler);
    alarm(1);

    while (1)
    {
        while (t == 0);
        printf("Turing was right!\n");
        t = 0;
        counter();
        signal(SIGINT, sigint_handler);
    };

    return 0;
}