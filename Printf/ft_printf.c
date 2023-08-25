#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_check(char x, va_list args, int *counter)
{
	if (x == 'c')
		ft_putchar(va_arg(args, int), counter);	
	if (x == 's')
		ft_putstr(va_arg(args, char*), counter);
	if (x == 'i')
		ft_putnbr(va_arg(args, int), counter);

		// seguir con los putnbr, valorar extraer del putnbrbase lo necesario y partirlo para facilitarse la vida
		//decimal
		//hexa
		//unsigned
		//pointer --> imprime 0x y concatenado con la direccion de memoria (llamar hexa impriminedo la direccion del *)
		//pasar paquito y llorar y pacoS para llorar más :3
		
	return (0);
}


int ft_printf(char const *str, ...)
{
	int i;
	int counter;
	va_list	args;

	i = 0;
	counter = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ft_check(str[i + 1], args, &counter);
			i += 1;
		}
		else 
			ft_putchar(str[i] , &counter);
		if (counter == -1)
			return (-1); // counter vale -1 
		i++;	
	}
	//va_arg (args, int);
	va_end (args);
	return (counter);
}



int main ()
{

//  PUTCHAR
//	ft_printf("%c %c\n", 'p' , 'x');
//	printf("%d\n" , ft_printf("%c %c\n", 'p' , 'x'));

//	PUTSTR
//	ft_printf("%s\n", "hola que hase buenos dias");
//	printf("%d\n" , ft_printf("%s\n", "hola que hase buenos dias"));

//	PUTNBR
//	ft_printf("%i\n", -2147483648);
//	printf("%li\n", -2147483648);
//	printf("%i\n" , ft_printf("%i\n", 2147483648));



	return (0);
}
/*

• %c Imprime un solo carácter.
• %s Imprime una string (como se define por defecto en C).
• %p El puntero void * dado como argumento se imprime en formato hexadecimal.
• %d Imprime un número decimal (base 10).
• %i Imprime un entero en base 10.
• %u Imprime un número decimal (base 10) sin signo.
• %x Imprime un número hexadecimal (base 16) en minúsculas.
• %X Imprime un número hexadecimal (base 16) en mayúsculas.
• %% para imprimir el símbolo del porcentaje.

*/