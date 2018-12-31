#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = -1;
	while (alphabet++ < 25)
		ft_putchar(alphabet + 65);
	ft_putchar('\n');
}
