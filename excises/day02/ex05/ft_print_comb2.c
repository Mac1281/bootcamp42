#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int nb)
{
	int left;
	int right;

	if (nb > 9)
	{
		left = nb / 10;
		right = nb % 10;
		ft_putchar(left + 48);
		ft_putchar(right + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = -1;
	while (i++ <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_display(i);
			ft_putchar(' ');
			ft_display(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
	}
}