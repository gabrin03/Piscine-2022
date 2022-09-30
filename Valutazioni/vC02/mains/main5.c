#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int main()
{
	char num_str[] = "CIAO";
	char empty_str[] = "";
	char char_str[] = "Skfkd";
	printf("\nESERCIZIO 5:\n");
	printf("dovrebbe essere 1: %d\n", ft_str_is_uppercase(num_str));
	printf("dovrebbe essere 1: %d\n", ft_str_is_uppercase(empty_str));
	printf("dovrebbe essere 0: %d\n", ft_str_is_uppercase(char_str));
}