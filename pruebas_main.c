#include <stdio.h>

int	main()
{
	char	*c = "Hello world";
	char	*str = "hello there im using ehatsapp";

	printf("[%i]", printf("%p\n", &c));

	printf("[%i]", printf("%*.*d\n", 10, 10, -16));

	printf("(%i)\n",printf("[  printf ] %%10i (-234):      [%8.*i]\n", 6, -234));

	printf("(%i)\n",printf("[  printf ] %%i (234):  [%i]\n", 234));

	printf("(%i)\n",printf("[  printf ] %%i (-234):  [%i]\n", -234));

	printf("(%i)\n",printf("[  printf ] %%i (0):  [%i]\n", 0));

	printf("(%i)\n",printf("[  printf ] %%*.*i (8, 8, -234):  [%*.*i]\n", 8, 8, -234));

	printf("(%i)\n",printf("[  printf ] %%*.*i (8, 8, 234):  [%*.*i]\n", 8, 8, 234));

	printf("(%i)\n",printf("[  printf ] %%*.*i (8, 10, -234):  [%*.*i]\n", 8, 10, -234));

	printf("(%i)\n",printf("[  printf ] %%*.*i (-10, 8, -234): [%*.*i]\n", -10, 8, -234));

	printf("(%i)\n",printf("[  printf ] %%*.*i (-10, 8, 234): [%*.*i]\n", -10, 8, 234));

	printf("(%i)\n",printf("[  printf ] %%*.*i (8, -10, -234): [%*.*i]\n", 8, -10, -234));

	printf("(%i)\n",printf("[  printf ] %%*.*i (8, 0, -234):   [%*.*i]\n", 8, 0, -234));

	printf("(%i)\n",printf("[  printf ] %%*.*i (8, 1, -234):   [%*.*i]\n", 8, 1, -234));

	printf("(%i)\n",printf("[  printf ] %%*.10i (2, -234):     [%*.10i]\n", 2, -234));

	printf("(%i)\n",printf("[  printf ] %%10.10i (-234):      [%10.10i]\n", -234));

	printf("(%i)\n",printf("[  printf ] %%10i (-234):      [%10i]\n", -234));

	printf("(%i)\n",printf("[  printf ] %%.10i (-234):      [%.10i]\n", -234));

	printf("(%i)\n",printf("[  printf ] %%.10i (-34):       [%.10i]\n", 234));

	printf("(%i)\n",printf("[  printf ] %%10.*i (7, -1526): [%10.*i]\n", 7, -1526));

	printf("(%i)\n",printf("[  printf ] %%-10.*i (7, -1526): [%-10.*i]\n", 7, -1526));

	printf("(%i)\n",printf("[  printf ] %%-*.*i (10, 7, -1526): [%-*.*i]\n", 10, 7, -1526));

	printf("(%i)\n",printf("[  printf ] Puntero %%*p (15, str): [%*p]\n",15, str));


	return (0);
}

