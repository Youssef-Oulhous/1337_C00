int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
    
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
    		i++;
	}
    
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
