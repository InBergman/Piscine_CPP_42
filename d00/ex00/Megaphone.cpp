#include <iostream>

extern int main(int argc, char const *argv[])
{
	int j;
	int i = 0;
	if (argc > 1 && !argv[1][0]) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return 1;
	}
	if (argc > 1) {
		while (argv[++i]) {
			j = -1;
			while (argv[i][++j])
				putchar(toupper(argv[i][j]));
			if (argv[i + 1])
				putchar(' ');
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
	return 0;
}
