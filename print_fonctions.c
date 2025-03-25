#include "main.h"

/**
 * print_char - Fonction qui imprime un caractere
 * @args: Liste des arguments
 * Return: Nombre de caracteres imprimes (1)
 */

 int print_char(va_list args)
 {
	int i;

	i = va_arg(args, int);

	_putchar(i);

	return(1);
 }


 /**
  * print_string - Fonction qui imprime une chaine de caracteres
  * @args: Liste des arguments
  * Return: Nombre de caracteres imprimés
  */

  int print_str(va_list args)
  {
	  char *str = va_arg(args, char *);
	  int i = 0;
	  int count = 0;
  
	  if (str == NULL)
		  str = "(null)";
  
	  while (str[i])
	  {
		  _putchar(str[i]);
		  count++;
		  i++;
	  }
	  return (count);
  }  

  /**
   * print_pourcentage - Fonction qui imprime un %
   */

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

