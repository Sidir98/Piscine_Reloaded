#include <unistd.h>

int ft_count_if(char **tab, int(*f)(char*));

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int na;

	na = nb;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	if (na >= 10)
	{
		ft_putnbr(na / 10);
	}
	ft_putchar(na % 10 + 48);
}
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}	
	return (i);
}
int ft_strcmp(char *s1, char *s2)
{
	int i;
	int s;
	int st1;
	int st2;

	i = 0;
	s = 0;
	st1 = ft_strlen(s1);
	st2 = ft_strlen(s2);
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			s = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	if (s1[i] != '\0')
		return (s);
	else if (st1 > st2)
		return (s1[st2]);
	else if (st2 > st1)
		return (s2[st1] * -1);
	return (0);
}
int ft_bonjour(char *tab)
{
	return(ft_strcmp(tab,"Bonjour") == 0);
}

int main(int argc, char *argv[])
{
	ft_putnbr(ft_count_if(argv, &ft_bonjour));
	return 0;
}
