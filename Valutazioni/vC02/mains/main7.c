#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main()
{
	char num_str[] = "test";
	printf("\nESERCIZIO 7:\n");
	printf("base: %s\n", num_str);
	ft_strupcase(num_str);
	printf("trasformato: %s\n", num_str);
	printf("vaolre di ritorno: %s\n", ft_strupcase(num_str));
}