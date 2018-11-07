#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main()
{
	int i;
	int *tab;

	tab = ft_range(15,100);
	i = 0;
	while (i <= 86)
	{
		printf("%d , ",tab[i]);
		i++;
	}
	return (0);
}
