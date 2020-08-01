#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void putfirst(int q)
{
    int scounter;
    int i;

    scounter = 0;
    i = q - 1;
    while (scounter <= i)
    {
        if (scounter == 0)
        {
            ft_putchar('A');
        }
        else if (scounter == i)
        {
            ft_putchar('C');
        }
        else
        {
            ft_putchar('B');
        }
        scounter++;
    }
    ft_putchar('\n');
}

void putsecond(int w)
{
    int scounter;
    int j;

    scounter = 0;
    j = w - 1;
    while (scounter <= j)
    {
        if (scounter == 0 || scounter == j)
        {
            ft_putchar('B');
        }
        else
        {
            ft_putchar(' ');
        }
        scounter++;
    }
    ft_putchar('\n');
}

void	rush(int x, int y)
{
	int lcount;
	int scount;
    int a;

	a = y - 1;

	lcount = 0;
	while (lcount <= a)
	{
		scount = 0;
		if (lcount == 0 || lcount == a)
		{
			putfirst(x);
		}
		else
		{
			putsecond(x);
		}
		lcount++;
	}
}

int main()
{
	rush(4, 4);
	return 0;
}


