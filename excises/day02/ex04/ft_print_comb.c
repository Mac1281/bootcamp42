#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int *range)
{
	int 	i;

	i = 0;
	while (range[i] != '\0')
		ft_putchar(range[i++]);
}

void	ft_display_char(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int		range[4];

	range[0] = 48;
	while (range[0] < 58)
	{
		range[1] = range[0] + 1;
		while (range[1] < 58)
		{
			range[2] = range[1] + 1;
			while (range[2] < 58)
			{
				ft_display(range);
				if (!(range[0] == 55 && range[1] == 56 && range[2] == 57))
					ft_display_char();
				range[2]++;
			}
			range[1]++;
		}
		range[0]++;
	}
	ft_putchar('\n');
}