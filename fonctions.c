#include "main.h"
#include <unistd.h>

/**
 * print_char - Affiche un caractère
 * @list: Liste des arguments
 *
 * Return: Nombre de caractères imprimés (1)
 */

int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Affiche une chaîne de caractères
 * @list: Liste des arguments
 *
 * Return: Nombre de caractères imprimés
 */

int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}

/**
 * print_percent - Fonction pour imprimer le %.
 * @list: liste des arguments.
 * Return: Nombre de caractères imprimés
 */

int print_percent(va_list list)
{
	(void) list;
	_putchar('%');

	return (1);
}
