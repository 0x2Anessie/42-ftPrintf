#include "ft_printf.h"

int	print_single_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_multiple_chars(char *str)
{
	int	printables;

	if (str == NULL)
		return (write(1, "(null)", 6));
	printables = 0;
	while (*str)
	{
		write(1, str, 1);
		printables++;
		str++;
	}
	return (printables);
}

int	print_pointer(unsigned long long pointer)
{
	int	printables;

	printables = 0;
	if (!pointer)
		return (write(1, "(nil)", 5));
	printables += write(1, "0x", 2);
	printables += print_hexa_min(pointer);
	return (printables);
}

int	print_numbers(int nb)
{
	int	printables;

	printables = 0;
	if (nb == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (nb < 0)
	{
		nb = -nb;
		printables += write(1, "-", 1);
	}
	if (nb > 9)
	{
		printables += print_numbers(nb / 10);
		printables += print_numbers(nb % 10);
	}
	else
		printables += print_single_char(nb + '0');
	return (printables);
}
