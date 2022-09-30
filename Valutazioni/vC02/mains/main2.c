#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int main()
{
	char num_str[] = "24jkb93284";
	char empty_str[] = "";
	char char_str[] = "hbhbbj";
	printf("\nESERCIZIO 2:\n");
	printf("dovrebbe essere 0: %d\n", ft_str_is_alpha(num_str));
	printf("dovrebbe essere 1: %d\n", ft_str_is_alpha(empty_str));
	printf("dovrebbe essere 1: %d\n", ft_str_is_alpha(char_str));
}
