#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    printf(1,"Hello World!\n");
    printf(1,"pid count: %d\n",getpidcount());
    printf(1,"Starting pid count test:\n");
    for(int i = 0; i < 10; i++){
        printf(1,"pid: %d\n",getpid());
        printf(1,"pid count: %d\n",getpidcount());
    }
    exit();
}