#include <iostream>
#include <cctype>

int	main(int ac, char **av) {
	if (ac == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<  std::endl;
		return (EXIT_SUCCESS);
	}
	for (int i = 1; av[i]; i++) {
		for (int j = 0; av[i][j]; j++)
			std::cout << (char) std::toupper(av[i][j]);
		std::cout << " " ;
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
