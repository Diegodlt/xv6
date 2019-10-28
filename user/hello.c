#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    printf(1,"Hello World!\n");
    printf(1,"Initial ticket count");
    printf(1,"Ticket count: %d\n",getticketcount());

    printf(1,"Setting number of tickets to 10\n");
    settickets(10);
    printf(1,"Ticket count: %d\n",getticketcount());

    exit();
}