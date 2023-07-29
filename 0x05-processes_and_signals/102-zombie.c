#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * infinite_while - used when done creating the parent process and the,
 * zombies.
 *
 * Return: always 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Entry point of the program
 * Description -Creates five zombie processes
 *
 * Return: always 0
 */
int main(void)
{
	int i, child_pid;

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();

		if (child_pid == 0)
		{
			printf("Zombie process created, child_pid: %d\n", getchild_pid());
			return (0);
		}
	}
	infinite_while();
	return (0);
}
