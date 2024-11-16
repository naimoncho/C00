#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}
/*int   main ()
{
        ft_is_negtive(-5);
	ft_is_negtive(0);
	ft_is_negtive(9);
        return (0);
}*/
