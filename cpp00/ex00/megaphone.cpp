#include <cctype>
#include <iostream>
#include <string>
int	main (int ac, char** av)
{
	std::string str;
	int	i;
	int	j;

	i = 1;
	if (av[1] == NULL)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				str += std::toupper(av[i][j]);
				j++;
			}
		i++;
		}
	}
	std::cout << str << std::endl;
	return (0);
}
