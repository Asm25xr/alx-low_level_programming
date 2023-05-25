#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else 
	{
		int start = 0, cnt = 0, end;
		while (cnt < n) 
		{
			end = cnt;
			while(start <= end) 
			{
				if(strat == end) 
				{
					_putchar('//')
					_putchar('\n')
				}
				else
					_putchar(' ')
				strart++;
			}
			strat = 0;
			cnt++;
		}
	}
 
}
