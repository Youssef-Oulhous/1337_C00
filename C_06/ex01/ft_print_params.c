#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	next;
	int	i;

	next = 1;
	while (next < argc)
	{
		i = 0;
		while (argv[next][i])
		{
			ft_putchar(argv[next][i]);
			i++;
		}
		write(1, "\n", 1);
		next++;
	}
	return (0);
}
