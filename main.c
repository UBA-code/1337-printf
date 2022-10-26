#include "ft_printf.h"
#include "stdio.h"

int main ()
{
	int i = 123456789;
	ft_printf("%p\n", i);
	// printf("%p\n", i);
	return (0);
}