#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	num;
	int	i;

	num = argc;
	i = 0;
	while (num > 1)
	{
		while (argv[num - 1][i])
		{
			ft_print(argv[num - 1][i]);
			i++;
		}
		ft_print('\n');
		i = 0;
		num--;
	}
	return (0);
}
