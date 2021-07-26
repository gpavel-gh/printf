#include <stdio.h>
int	ft_printf(const char *str, ...);

int main()
{
	printf("(%i)\n",printf("printf %%x (-234):     [%x]\n", -234));

	printf("(%i)\n",printf("printf %%x (234):     [%x]\n", 234));

	printf("(%i)\n",printf("printf %%x (0):     [%x]\n", 0));

	printf("(%i)\n",printf("printf %%*.*x (9, 9, -234):     [%*.*x]\n", 9, 9, -234));
	printf("(%i)\n",printf("printf %%*.*x (10, 9, -234):     [%*.*x]\n", 10, 9, -234));
	printf("(%i)\n",printf("printf %%*.*x (9, 10, -234):     [%*.*x]\n", 9, 10, -234));
	printf("(%i)\n",printf("printf %%*.*x (8, 8, -234):     [%*.*x]\n", 8, 8, -234));
	printf("(%i)\n",printf("printf %%*.*x (0, 9, -234):     [%*.*x]\n", 0, 9, -234));
	printf("(%i)\n",printf("printf %%*.*x (9, 0, -234):     [%*.*x]\n", 9, 0, -234));
	printf("(%i)\n",printf("printf %%*.*x (0, 0, -234):     [%*.*x]\n", 0, 0, -234));

	printf("(%i)\n",printf("printf %%*.*x (8, 8, 234):     [%*.*x]\n", 8, 8, 234));

	printf("(%i)\n",printf("printf %%*.*x (8, 8, 0):     [%*.*x]\n", 8, 8, 0));

	printf("(%i)\n",printf("printf %%*.*x (8, 10, -234):     [%*.*x]\n", 9, 10, -234));

	printf("(%i)\n",printf("printf %%*.*x (9, -10, -234):     [%*.*x]***\n", 9, -12, -234));

	printf("(%i)\n",printf("printf %%*.*x (-10, 9, -234):    [%*.*x]\n", -10, 9, -234));

	printf("(%i)\n",printf("printf %%*.*x (-10, 9, 234):    [%*.*x]\n", -10, 9, 234));

	printf("(%i)\n",printf("printf %%*.*x (9, -10, -234):    [%*.*x]\n", 9, -10, -234));

	printf("(%i)\n",printf("printf %%*.*x (9, 0, -234):      [%*.*x]\n", 9, 0, -234));

	printf("(%i)\n",printf("printf %%*.*x (9, 1, -234):      [%*.*x]\n", 9, 1, -234));

	printf("(%i)\n",printf("printf %%*.10x (2, -234):        [%*.10x]\n", 2, -234));

	printf("(%i)\n",printf("printf %%10.10x (-234):         [%10.10x]\n", -234));

	printf("(%i)\n",printf("printf %%10x (-234):         [%10x]\n", -234));

	printf("(%i)\n",printf("printf %%.10x (-234):         [%.10x]\n", -234));

	printf("(%i)\n",printf("printf %%.10x (34):         [%.10x]\n", 34));

	printf("(%i)\n",printf("printf %%10.*x (7, -1526):    [%10.*x]\n", 7, -1526));

	return (0);
}
