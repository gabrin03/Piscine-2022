#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main()
{
	printf("\nESERCIZIO 9:\n");
	char frase[] = " ciao come; va,  la vita";
	printf("base: %s\n", frase);
	printf("trasformata: %s", ft_strcapitalize(frase));

}