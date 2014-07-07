#include <stdio.h>

int	ft_interative_factorial(int nb);

int	main()
{
	int i;

	for(i = 0; i < 12;i++)printf("%d! = %d\n", i, ft_interative_factorial(i));
	return 0;
}
