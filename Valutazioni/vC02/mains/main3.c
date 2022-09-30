#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int main()
{
	char num_str[] = "32424325";
	char empty_str[] = "";
	char char_str[] = "hbh23bbj";
	printf("\nESERCIZIO 3:\n");
	printf("dovrebbe essere 1: %d\n", ft_str_is_numeric(num_str));
	printf("dovrebbe essere 1: %d\n", ft_str_is_numeric(empty_str));
	printf("dovrebbe essere 0: %d\n", ft_str_is_numeric(char_str));
}