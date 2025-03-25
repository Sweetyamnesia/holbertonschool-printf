#include "main.h"

/**
 * print_char - Affiche un caractere
 * @display: Liste des arguments
 *
 * Return: Nombre de caracteres imprimes (1)
 */

int print_char(va_list display)
{
	int i;

	i = va_arg(display, int);

	_putchar(i);

	return(1);
}

/**
 * print_string - Affiche une chaine de caracteres
 * @display: Liste des arguments
 *
 * Return: Nombre de caracteres imprimes
 */

int print_string(va_list display)
{
	char *string;
	int count;

	string = va_arg(display, char *);

	if (string == NULL)
	{
		string = "(null)";
	}

	for (count = 0; string[count] != '\0'; count++)
	{
		_putchar(string[count]);
	}
	return (count);
}

/**
 * print_percent - Afficher un pourcentage
 * @display: Liste des arguments
 */

 int print_percent(va_list display)
 {
	(void) display;
	_putchar('%');

	return (1);
 }
