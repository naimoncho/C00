#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reletter;

	reletter = 'z';
	while (reletter >= 'a')
	{
		write (1, &reletter, 1);
		reletter --;
	}
}
/*int   main ()
{
        ft_print_reverse_alphabet();
        return (0);
}*/
