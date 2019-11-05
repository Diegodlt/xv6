#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

int main(int argc, char *argv[])
{
	int i;
	struct pstat info;
	getpinfo(&info);

	for(i = 0; i < NPROC; i++)
	{
        if(info.inuse[i]){
            printf(1, "inuse: %d  |  tickets: %d  |  pid: %d  |  ticks: %d\n", 
            info.inuse[i],
            info.tickets[i],
            info.pid[i],
            info.ticks[i]);  
        }
		 
	}
	exit();
}
