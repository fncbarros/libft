
static int ft_len(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int i;
	int len;
	int j;
	
	j = 0;
	i = 0;
	len = ft_len(nptr);
	if (nptr[0] == '-' || nptr [0] == '+')
		j++;
	while (j < len)
	{
		if (nptr[j] < '0' || nptr[j] > '9')
		{
			break;
		}
		else
		{
			i *= 10;
			i += nptr[j] - '0';
			j++;
		}
	}
	if (nptr[0] == '-')
		i *= -1;
	return (i);
}
