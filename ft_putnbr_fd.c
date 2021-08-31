#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	int				aux;
	unsigned int	n;

	if (nbr < 0)
	{
		n = (unsigned int) nbr * -1;
		write(fd, "-", 1);
	}
	else
	{
		n = (unsigned int) nbr;
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else
	{
		aux = n + '0';
		write(fd, &aux, 1);
	}
}
