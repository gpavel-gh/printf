
#include <stdio.h>

int main()
{
	char *str;
	int *null;

	str = "hey muy buenas";
	null = NULL;


	printf("(%i)\n",printf("[  printf ] Puntero %%p (str): [%p]\n", str));

	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%p (&str): [%p]\n", &str));

	printf("(%i)\n",printf("[  printf ] Puntero nulo %%p (null): [%p]\n", null));

	printf("(%i)\n",printf("[  printf ] Puntero %%*p (15, str): [%*p]\n",15, str));

	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%*p (15, &str): [%*p]\n",15, &str));

	printf("(%i)\n",printf("[  printf ] Puntero nulo %%*p (15, null): [%*p]\n", 15, null));

	printf("(%i)\n",printf("[  printf ] Puntero %%*p (4, str): [%*p]\n",4, str));

	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%*p (4, &str): [%*p]\n",4, &str));

	printf("(%i)\n",printf("[  printf ] Puntero nulo %%*p (2, null): [%*p]\n", 2, null));

	printf("(%i)\n",printf("[  printf ] Puntero %%*p (-15, str): [%*p]\n",-15, str));

	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%*p (-15, &str): [%*p]\n",-15, &str));

	printf("(%i)\n",printf("[  printf ] Puntero nulo %%*p (-15, null): [%*p]\n", -15, null));

//	printf("(%i)\n",printf("[  printf ] Puntero %%.*p (15, str): [%.*p](?)\n",15, str));

//	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%.*p (15, &str): [%.*p](?)\n",15, &str));

//	printf("(%i)\n",printf("[  printf ] Puntero nulo %%.*p (15, null): [%.*p](?)\n", 15, null));

//	printf("(%i)\n",printf("[  printf ] Puntero %%.*p (-15, str): [%.*p](?)\n",-15, str));

//	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%.*p (-15, &str): [%.*p](?)\n",-15, &str));

//	printf("(%i)\n",printf("[  printf ] Puntero nulo %%.*p (-15, null): [%.*p](?)\n", -15, null));

	return (0);
}
