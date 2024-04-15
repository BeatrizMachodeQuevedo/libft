int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	number;
	int				signo;

	i = 0;
	signo = 1;
	number = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signo = -1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	number = signo * number;
	return (number);
}
