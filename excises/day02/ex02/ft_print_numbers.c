#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		counter;

	counter = -1;
	while (counter++ < 9)
		ft_putchar(counter + 48);
}
