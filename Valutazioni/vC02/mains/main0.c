#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char src[] = "sole", dest[] = "computer";
	printf("\nESERCIZIO 0:\n");
	printf("source: %s ---- destination: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("source: %s ---- destination: %s\n", src, dest);
	printf("");
}
