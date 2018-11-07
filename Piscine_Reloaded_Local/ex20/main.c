#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src);
int     ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	c;
	int		i;

	i = 0;
	c = *str;
	while (c != '\0')
	{
		ft_putchar(c);
		c = str[++i];
	}
}

int     main(int argc, char *argv[])
{
	int k;

	k = argc;
	if (argc == k)
		argc = k;
    ft_putstr(ft_strdup(argv[1]));
}
