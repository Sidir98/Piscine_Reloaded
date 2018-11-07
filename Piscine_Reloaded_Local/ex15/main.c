#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

int main()
{
	char *str;

	str = "Hallo, ca va ou quoi ?";
	ft_putstr(str);
}
