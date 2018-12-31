#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_specialChar(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print(int *range, int nbr)
{
	int display;
	int i;

	display = 1;
	i = 0;
	while ((i = i + 1) < nbr)
		if (range[i - 1] >= range[i])
			display = 0;
	if (!display)
		return ;
	i = -1;
	while ((i = i + 1)  < nbr)
		ft_putchar(range[i] + 48);
	if (range[0] < (10 - nbr))
		ft_specialChar();
}

void	ft_print_combn(int n)
{
	int i;
	int range[3];

	if ((n > 10) || (n < 0))
		return ;
	i = -1;
	while ((i++) < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		ft_print(range, n);
		if (n == 10)
			break;
		range[n - 1]++;
		i = n;
		while (i && n  > 1)
		{
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
			i--;
		}
	}
}

int     main(void)
{
    ft_print_combn(2);
    return 0;
}
