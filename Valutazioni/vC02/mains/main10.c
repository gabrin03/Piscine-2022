#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int dstsize);

int main()
{
	char test1[] = "ciao", test2[] = "testing";

	printf("\n\nESERCIZIO 10:\n");
	printf("source: %s ---- destination: %s\n", test1, test2);
	strlcpy(test1, test2, 2 );
	printf("source: %s ---- destination: %s\n", test1, test2);
	printf("output: %lu", strlcpy(test1, test2, 2 ));
}
