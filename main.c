#include "ft_printf.h"
#include "limits.h"
int main ()
{
	char *txt = "Hello World";
	ft_printf(" %x ", LONG_MAX);
	printf(" %x ", LONG_MAX);
}