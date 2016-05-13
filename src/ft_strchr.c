char	*ft_strchr(char *str, int c)
{
	int i = -1;

	while(*(str + (++i)) && *(str + i) != c){}
	return (str + i);
}