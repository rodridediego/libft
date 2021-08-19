#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	/*if((nmemb * size) == 0)
		return(NULL);*/
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
