#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str);

int main()
{
	char num_str[] = "test";
	char empty_str[] = "";
	char char_str[] = "\x01\x05\x0a\x15";
	printf("\nESERCIZIO 6:\n");
	printf("dovrebbe essere 1: %d\n", ft_str_is_printable(num_str));
	printf("dovrebbe essere 1: %d\n", ft_str_is_printable(empty_str));
	printf("dovrebbe essere 0: %d\n", ft_str_is_printable(char_str));
}