#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int counter;

	counter = 122;
	while (counter >= 97)
		ft_putchar(counter--);

}