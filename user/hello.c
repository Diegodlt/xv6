#include "types.h"
#include "user.h"
#include "pstat.h"

int
main(int argc, char *argv[])
{
    int i;
	int parent;
	for (i = 1; i < 6; i++)
	{
		parent = fork();
		if(parent == 0)
		{
			settickets(i * 10);
			printf(1, "create child %d\n", i);

            for(;;)
			{

			}

		}
	}

    exit();
}