#include "main.h"
/**
  *helperFunction - returns 0 or 1.
  *@num: number being checked.
  *@i: possible factor of the number. 
  *
  *Return: 0 if not prime, 1 if prime.
  */
int helperFunction(int num, int 1)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num , i + 1));
		}
	}
	else
	{
		return (i);
	}
}

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: number to find sqrt of.
  *
  *Return: squareroot of n.
  *-1 if n does not have a natural sqrt.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else 
		return (helperFunction(n, 0));
}

