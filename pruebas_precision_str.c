#include <stdio.h>
int	ft_printf(const char *str, ...);

int main()
{
	printf("(%i)\n",printf("[  printf ] %%\n"));

	printf("(%i)\n",printf("[  printf ] %%s (\"hola\"):  [%s]\n", "hola"));

	printf("(%i)\n",printf("[  printf ] %%c (\'c\'):  [%c](?)\n",'c'));

	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 8, \"hola\"):  [%*.*s]\n", 8, 8, "hola"));

//	printf("(%i)\n",printf("[  printf ] %%*.*c (8, 8, \'c\'):  [%*.*c](?)\n", 8, 8, 'c'));//CASO EXTRAÑO

	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 10, \"hola\"):  [%*.*s]\n", 8, 10, "hola"));

	printf("(%i)\n",printf("[  printf ] %%*.*s (-10, 8, \"hola\"): [%*.*s]\n", -10, 8, "hola"));

//	printf("(%i)\n",printf("[  printf ] %%*.*c (-10, 8, \'c\'): [%*.*c](?)\n", -10, 8, 'c'));//CASO EXTRAÑO

	printf("(%i)\n",printf("[  printf ] %%*.*s (8, -10, \"hola\"): [%*.*s]\n", 8, -10, "hola"));

	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 0, \"hola\"):   [%*.*s]\n", 8, 0, "hola"));

	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 1, \"hola\"):   [%*.*s]\n", 8, 1, "hola"));

	printf("(%i)\n",printf("[  printf ] %%*.10s (2, \"hola\"):     [%*.10s]\n", 2, "hola"));

	printf("(%i)\n",printf("[  printf ] %%10.10s (\"hola\"):      [%10.10s]\n", "hola"));

	printf("(%i)\n",printf("[  printf ] %%10s (\"hola\"):      [%10s]\n", "hola"));

	printf("(%i)\n",printf("[  printf ] %%.10s (\"hola\"):      [%.10s]\n", "hola"));

	printf("(%i)\n",printf("[  printf ] %%.2s (\"hola\"):      [%.2s]\n", "hola"));

	printf("(%i)\n",printf("[  printf ] %%.s (\"hola\"):      [%.s]\n", "hola"));

	printf("(%i)\n",printf("[  printf ] %%.0s (\"hola\"):      [%.0s]\n", "hola"));

	printf("(%i)\n",printf("[  printf ] %%.s (\"hola\"):     [ %%0.s]\n"));

//	printf("(%i)\n",printf("[  printf ] %%.10c (\'c\'):      [%.10c](?)\n", 'c'));//CASO EXTRAÑO

	printf("(%i)\n",printf("[  printf ] %%10.*s (7, \"hola que tal\"):    [%10.*s]\n", 7, "hola que tal"));

	printf("(%i)\n",printf("[  printf ] %%-10.*s (7, \"hola que tal\"):    [%-10.*s]\n", 7, "hola que tal"));

	return (0);
}