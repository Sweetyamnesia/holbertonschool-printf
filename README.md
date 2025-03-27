# 📘 _printf - Projet Holberton

Bienvenue dans le projet **_printf**, une réimplémentation simplifiée de la fonction `printf` standard du langage C.  
Ce projet a été réalisé dans le cadre du programme de l'école **Holberton School** (ou ALX).

---

## 🧠 Objectif

L'objectif de ce projet est de comprendre le fonctionnement de la fonction `printf`, en mettant en œuvre une version personnalisée en C.  
Nous utilisons les fonctions variadiques et traitons manuellement les chaînes de format.

---

## 🛠️ Prototype

```c
int _printf(const char *format, ...);
```

---

## ✅ Fonctionnalités prises en charge

Notre fonction `_printf` est capable de gérer les **spécificateurs de conversion** suivants :

| Spécificateur | Description                          |
|---------------|--------------------------------------|
| `%c`          | Affiche un caractère                 |
| `%s`          | Affiche une chaîne de caractères     |
| `%%`          | Affiche le caractère `%`             |
| `%d` / `%i`   | Affiche un entier décimal (base 10)  |

---

## ❌ Fonctionnalités non prises en charge

Les éléments suivants ne sont **pas pris en charge** dans cette version :

- Flags (ex : `+`, `-`, `0`, `#`, etc.)
- Largeur des champs (`%5d`, `%10s`, etc.)
- Précision (`%.2f`, etc.)
- Modificateurs de longueur (`%ld`, `%hh`, etc.)
- Autres spécificateurs (`%u`, `%x`, `%o`, etc.)

---

## 💻 Exemple d'utilisation

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    _printf("Character: %c\n", 'A');
    _printf("Number: %d\n", 123);
    _printf("Percent sign: %%\n");
    return (0);
}
```

🖨️ **Sortie attendue :**

```
Hello, world!
Character: A
Number: 123
Percent sign: %
```

---

## ⚙️ Compilation

Pour compiler le programme :

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o _printf
```

---

## 🗂️ Fichiers importants

- `main.h` : Fichier d’en-tête contenant les prototypes
- `_printf.c` : Fonction principale qui gère le parsing
- `print_char.c` : Gestion du `%c`
- `print_string.c` : Gestion du `%s`
- `print_integer.c` : Gestion des `%d` / `%i`
- `utils.c` : Fonctions utilitaires (ex: conversion en string, compte de caractères)

---

## 👥 Auteurs

Projet réalisé par :

- [Ton Nom ici ou ton pseudo GitHub](https://github.com/ton-profil)
- (Ajoute les autres membres de ton équipe ici)

---

## 🧪 Ressources utiles

- [`man 3 printf`](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Documentation `stdarg.h`](https://en.cppreference.com/w/c/variadic)

---

## 📝 Licence

Projet à but **éducatif** uniquement — Holberton School.
