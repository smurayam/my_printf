#include <unistd.h>

int	ft_printf(char *s, char* str,int d, char* f, char c)
{
	int		i;
	char	c;

	i = 0;
	while (s[i] != 0)
	{
		c = s[i];
		write(1, &c, 1);
		i++;
	}
	return (i);
}

int	main(void)
{
	char *s;

	s = "aaa";
	ft_printf(s);

	return (0);
}