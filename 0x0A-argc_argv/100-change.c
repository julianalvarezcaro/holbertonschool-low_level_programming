#include "holberton.h"

/**
  * main - will tell you the minimun amount of coins needed to make change
  *
  * @argc: amount of args, always 2 or error
  * @argv: array of pointers to the args
  *
  * Return: 0 if succesful. 1 otherwise
  */
int main(int argc, char *argv[])
{
	int total;
	int progress;
	int coins;

	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	progress = 0;
	coins = 0;
	total = atoi(argv[1]);
	while (progress < total)
	{
		if(total - progress >= 25)
		{
			progress += 25;
			coins++;
		}
		else if(total - progress >= 10)
		{
			progress += 10;
			coins++;
		}
		else if(total - progress >= 5)
		{
			progress += 5;
			coins++;
		}
		else if(total - progress >= 2)
		{
			progress += 2;
			coins++;
		}
		else if(total - progress == 1)
		{
			progress += 1;
			coins++;
		}

	}
	printf("%d\n", coins);
	return (0);
}
