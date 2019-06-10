#include "libft.h"

int	main(int ac, char **av)
{
	int test;

	test = 5;
	if (ac == 2)
	{
		test = ft_atoi(av[1]);
		printf("%s\n", ft_itoa(test));
		return (1);
	}
	printf("%s\n", ft_itoa(test));
	return(0);
}
