#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned  int n);

int main()
{
	char src[] = "sole", dest[] = "computer";
	printf("\nESERCIZIO 1:\n");
	printf("source: %s ---- destination: %s\n", src, dest);
	ft_strncpy(dest, src, 3);
	printf("source: %s ---- destination(3): %s\n", src, dest);
	ft_strncpy(dest, src, 5);
	printf("source: %s ---- destination: %s\n", src, dest);
}
