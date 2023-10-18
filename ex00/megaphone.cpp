#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	j = 0;
	while (argv[++j] && argc)
	{
		i = -1;
		while (argv[j][++i])
		{
			if (islower(argv[j][i]))
    			std::cout << (char)toupper(argv[j][i]);
			else
				std::cout << argv[j][i];
		}
		std::cout << std::endl;
	}
    return (0);
}