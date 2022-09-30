#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int main()
{
	char num_str[] = "ciao";
	char empty_str[] = "";
	char char_str[] = "Skfkd";
	printf("\nESERCIZIO 4:\n");
	printf("dovrebbe essere 1: %d\n", ft_str_is_lowercase(num_str));
	printf("dovrebbe essere 1: %d\n", ft_str_is_lowercase(empty_str));
	printf("dovrebbe essere 0: %d\n", ft_str_is_lowercase(char_str));
}