#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 1)
	{
		while (argv[0][i])
		{
			ft_char(argv[0][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
