#include <stdio.h>
#include "ft_printf.h"

int	main()
{
	char	*c = "Hello world";

	printf("%p\n", &c);

	printf("%%%%X, -%x- %x, %X, %x, %X\n", -16, -3, -4, -5, -6, -7);

	return (0);
}

