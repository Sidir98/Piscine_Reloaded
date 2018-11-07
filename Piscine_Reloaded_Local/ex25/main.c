#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int));

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

int main (void){
	int tab[] = {156,246,895,124,236};
	ft_foreach(tab, 5, &ft_putnbr);
}
