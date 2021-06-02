
#include <stdio.h>
int	ft_printf(const char *str, ...);

int main()
{
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

	return (0);
}
