char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	ft_strlowcase(str);
	capitalize_next = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && capitalize_next == 1)
		{
			str[i] = str[i] - 32;
			capitalize_next = 0;
		}
		else if (is_alphanumeric(str[i]) == 1)
		{
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 1;
		}
		i++;
	}
	return (str);
}
