#include <stdio.h>
int	ft_printf(const char *str, ...);

int main()
{
	ft_printf("\n\n--- Hexa Test Lower---\n\n");
	printf("(%i)\n",printf("printf %%x (-234):     [%x]\n", -234));
	printf("(%i)\n",ft_printf("ft_printf %%x (-234):  [%x]\n", -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%x (234):     [%x]\n", 234));
	printf("(%i)\n",ft_printf("ft_printf %%x (234):  [%x]\n", 234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%x (0):     [%x]\n", 0));
	printf("(%i)\n",ft_printf("ft_printf %%x (0):  [%x]\n", 0));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (9, 9, -234):     [%*.*x]\n", 9, 9, -234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (9, 9, -234):  [%*.*x]\n", 9, 9, -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (8, 8, 234):     [%*.*x]\n", 8, 8, 234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (8, 8, 234):  [%*.*x]\n", 8, 8, 234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (8, 8, 0):     [%*.*x]\n", 8, 8, 0));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (8, 8, 0):  [%*.*x]\n", 8, 8, 0));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (8, 10, -234):     [%*.*x]\n", 9, 10, -234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (8, 10, -234):  [%*.*x]\n", 9, 10, -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (-10, 8, -234):    [%*.*x]\n", -10, 9, -234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (-10, 8, -234): [%*.*x]\n", -10, 9, -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (-10, 8, -234):    [%*.*x]\n", -10, 9, 234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (-10, 8, -234): [%*.*x]\n", -10, 9, 234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (8, -10, -234):    [%*.*x]\n", 9, -10, -234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (8, -10, -234): [%*.*x]\n", 9, -10, -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (8, 0, -234):      [%*.*x]\n", 9, 0, -234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (8, 0, -234):   [%*.*x]\n", 9, 0, -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.*x (8, 1, -234):      [%*.*x]\n", 9, 1, -234));
	printf("(%i)\n",ft_printf("ft_printf %%*.*x (8, 1, -234):   [%*.*x]\n", 9, 1, -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%*.10x (2, -234):        [%*.10x]\n", 2, -234));
	printf("(%i)\n",ft_printf("ft_printf %%*.10x (2, -234):     [%*.10x]\n", 2, -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%10.10x (-234):         [%10.10x]\n", -234));
	printf("(%i)\n",ft_printf("ft_printf %%10.10x (-234):      [%10.10x]\n", -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%10x (-234):         [%10x]\n", -234));
	printf("(%i)\n",ft_printf("ft_printf %%10x (-234):      [%10x]\n", -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%.10x (-234):         [%.10x]\n", -234));
	printf("(%i)\n",ft_printf("ft_printf %%.10x (-234):      [%.10x]\n", -234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%.10x (-34):         [%.10x]\n", 234));
	printf("(%i)\n",ft_printf("ft_printf %%.10x (234):      [%.10x]\n", 234));
	ft_printf("\n");
	printf("(%i)\n",printf("printf %%10.*x (7, -1526):    [%10.*x]\n", 7, -1526));
	printf("(%i)\n",ft_printf("ft_printf %%10.*x (7, -1526): [%10.*x]\n", 7, -1526));
	ft_printf("\n\n");
	return (0);
}
