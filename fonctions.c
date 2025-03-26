#include "main.h"
#include <unistd.h>

/**
 * print_char - Affiche un caractère
 * @list: Liste des arguments (va_list)
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
 * @list: Liste des arguments (va_list)
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
 * @list: liste des arguments (va_list) non utilisé ici
 * Return: Nombre de caractères imprimés
 */

int print_percent(va_list list)
{
	(void) list;
	_putchar('%');

	return (1);
}

/**
 * print_recursion - Fonction qui affiche recursivement un entier positif
 * @n: Entier à afficher (0 ou alrs positif)
 * Return: Nombre de caracteres imprimes
 */

int print_recursion(int n)
{
	if (n <= 9)
	{
		_putchar(n + '0');
		return (1);
	}
	else
	{
		int count = 0;
		count += print_recursion(n / 10);
		_putchar((n % 10) + '0');
		count++;
		return (count);
	}
}

/**
 * print_int - Fonction pour imprimer 1 entier signe dc %d ou %i
 * @list: liste des arguments (va_list)
 * Return: Nombre de caractères imprimés
 */

int print_int(va_list list)
 {
	int n = va_arg(list, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count ++;
		
	}
	count += print_recursion(n);
	return(count);

 }

