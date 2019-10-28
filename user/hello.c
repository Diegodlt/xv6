#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int process;

    printf(1,"Hello World!\n");
    printf(1,"Initial ticket count for PID %d\n", getpid());
    printf(1,"Ticket count: %d\n",getticketcount());

    printf(1,"Setting number of tickets to 10\n");
    settickets(10);
    printf(1,"Ticket count for PID %d: %d\n",getpid(), getticketcount());

    printf(1,"Create child\n");
    process = fork();
    if(process == 0){
        printf(1,"Ticket count for PID %d: %d\n",getpid(), getticketcount());
        exit();
    }
    wait();

    exit();
}