#include "ft_printf.h"
int main ()
{
	char *txt = "Hello World";
	ft_printf("%p\n", &txt);
	printf("%p\n", &txt);
}