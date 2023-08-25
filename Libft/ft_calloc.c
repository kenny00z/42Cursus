#include "libft.h"

 void *ft_calloc(size_t nmemb, size_t size)
 {
	void *ptr;
	size_t mem;

	mem = nmemb * size;
	ptr = malloc(mem);
	if (ptr == NULL)
		return (0);
	//ft_memset(ptr, 0 , mem);
	// queda mas fino con la bzero que se dedica a rellenar de 0s
	ft_bzero(ptr, mem);
	return (ptr);
 }