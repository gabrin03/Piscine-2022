#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main()
{
	char num_str[] = "TEST";
	printf("\nESERCIZIO 8:\n");
	printf("base: %s\n", num_str);
	ft_strlowcase(num_str);
	printf("trasformato: %s\n", num_str);
	printf("vaolre di ritorno: %s\n", ft_strlowcase(num_str));
}