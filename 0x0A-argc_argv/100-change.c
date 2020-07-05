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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	return (coins_aux(total, 0, 0));

}

/**
  * coins_aux - is in charge of counting the amount of coins needed
  *
  * @total: total amout to be reached on coins
  * @progress: counter of money in coins
  * @coins: number of coins so far
  *
  * Return: 0 always
  */
int coins_aux(int total, int progress, int coins)
{
	while (progress < total)
	{
		if (total - progress >= 25)
		{
			progress += 25;
			coins++;
		}
		else if (total - progress >= 10)
		{
			progress += 10;
			coins++;
		}
		else if (total - progress >= 5)
		{
			progress += 5;
			coins++;
		}
		else if (total - progress >= 2)
		{
			progress += 2;
			coins++;
		}
		else if (total - progress == 1)
		{
			progress += 1;
			coins++;
		}

	}
	printf("%d\n", coins);
	return (0);
}
