#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int infinite_while(void);

int main ()
{
	fork() && fork() || fork();
	if (fork() == 0)
		printf("Zombie process created, PID: %d\n", getpid());
	infinite_while();
}
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
