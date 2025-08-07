#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	recursive_putnbr(long nbr, char *base, int base_len)
{
	char	digit_to_print;

	if (nbr >= base_len)
	{
		recursive_putnbr(nbr / base_len, base, base_len);
	}
	digit_to_print = base[nbr % base_len];
	write(1, &digit_to_print, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	long_nbr;

	if (!is_base_valid(base))
		return ;
	base_len = ft_strlen(base);
	long_nbr = nbr;
	if (long_nbr < 0)
	{
		write(1, "-", 1);
		long_nbr = -long_nbr;
	}
	recursive_putnbr(long_nbr, base, base_len);
}
