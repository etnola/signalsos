#include "timer.h"
#include <stdio.h>
#include <stdlib.h>

// Alonte Cuffee

int seconds = 0;


void increase(){
    seconds ++;
}

void sigint_handler(int signum){ 
    printf("Number of seconds ran: %d\n", seconds);
    exit(0);
}