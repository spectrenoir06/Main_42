#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main()
{
	int i;

	for(i = -1; i < 14;i++)
		printf("%d! = %d\n", i, ft_iterative_factorial(i));
	return 0;
}
