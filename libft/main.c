#include "libft.h"

int	main(int ac, char **av)
{
	char	**test;
	int 	i;
	
	i = 0;
	test = NULL;
	if (ac == 3)
	{
		ft_putendl("Test 01");
		test = ft_strsplit(av[1], av[2][0]);
		while (test[i])
			printf("%s\n", test[i++]);
	}
	ft_putchar(10);
	return (0);
}
