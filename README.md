# holbertonschool-printf

## DESCRIPTION DU PROJET

Ce projet a pour objectif de réécrire, de manière simplifiée, la fonction printf en langage C.

Il s'agit du premier projet collaboratif réalisé en binôme, dans le cadre de l'apprentissage des fondamentaux du programme Holberton School.
En C, la fonction printf() permet d'afficher une sortie formatée sur la sortie standard stdout (généralement l'écran de la console). Elle fait partie de la bibliothèque standard <stdio.h> et offre une grande flexibilité pour le formatage des données à afficher.

Dans ce projet, nous avons implémenté notre propre version nommée _printf, capable de gérer les formats de base suivants :
- %c : afficher un **caractère**
- %s : afficher une **chaîne de caractères**
- %% : afficher le **symbole %**
- %d : afficher un **nombre décimal**
- %i : affiche un **entier**

## COMMANDE DE COMPILATION
Vous pouvez compiler le code de cette manière : 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## REQUIREMENTS

## EXEMPLES

## TESTING

## FLOWCHART 


## COLLABORATEURS & AUTEURS

[**Victoire Boutin**](https://github.com/Victoire07)
[LinkedIn - Victoire](https://www.linkedin.com/in/victoire-boutin-207814171/)

[**Angela Rhin**](https://github.com/Sweetyamnesia)
[LinkedIn - Angela](https://www.linkedin.com/in/angela-rhin/)


# holbertonschool-printf

## DESCRIPTION & OBJECTIF DU PROJET

Ce projet a pour objectif de réécrire, de manière simplifiée, la fonction printf en langage C.

Il s'agit du premier projet collaboratif réalisé en binôme, dans le cadre de l'apprentissage des fondamentaux du programme Holberton School.
En C, la fonction printf() permet d'afficher une sortie formatée sur la sortie standard stdout (généralement l'écran de la console). Elle fait partie de la bibliothèque standard <stdio.h> et offre une grande flexibilité pour le formatage des données à afficher.

Dans ce projet, nous avons implémenté notre propre version nommée _printf, capable de gérer les formats de base suivants :
- %c : afficher un **caractère**
- %s : afficher une **chaîne de caractères**
- %% : afficher le **symbole %**
- %d : afficher un **nombre décimal**
- %i : affiche un **entier**

## PROTOTYPE DE FONCTION

int _printf(const char *format, ...);

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
