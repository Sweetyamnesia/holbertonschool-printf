#include "main.h"
#include <unistd.h>

static format_spec_t formats[] = {
	{'c', print_char},
	{'s', print_string},
	{'d', print_int},
	{'i', print_int},
	{'\0', NULL}
};


/**
 * get_formats - pointeur de la fonction.
 * Return: le tableau format.
 */

format_spec_t *get_formats(void)
{
	return (formats);
}

/**
 * print_char - Affiche un caractère
 * @args: Liste des arguments
 *
 * Return: Nombre de caractères imprimés (1)
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_string - Affiche une chaîne de caractères
 * @args: Liste des arguments
 *
 * Return: Nombre de caractères imprimés
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	return (write(1, str, len));
}

/**
 * print_int - Affiche un entier
 * @args: Liste des arguments
 *
 * Return: Nombre de caractères imprimés
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);

	return (print_number(n));
}

/**
 * print_number - Fonction auxiliaire pour imprimer un entier
 * @n: L'entier à imprimer
 *
 * Return: Nombre de caractères imprimés
 */

int print_number(int n)
{
	int count = 0;
	char digit;

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n / 10)
		count += print_number(n / 10);

	digit = (n % 10) + '0';
	count += write(1, &digit, 1);

	return (count);
}
