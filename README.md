# 📘 # holbertonschool-printf

Bienvenue dans le projet **_printf**, réalisé dans le cadre des fondamentaux Holberton School Bordeaux.

---

## 🧠 DESCRIPTION & OBJECTIF DU PROJET
Ce projet a pour objectif de réécrire, de manière simplifiée, la fonction printf en langage C.

Il s'agit du premier projet collaboratif réalisé en binôme, dans le cadre de l'apprentissage des fondamentaux du programme Holberton School.
En C, la fonction printf() permet d'afficher une sortie formatée sur la sortie standard stdout (généralement l'écran de la console). Elle fait partie de la bibliothèque standard <stdio.h> et offre une grande flexibilité pour le formatage des données à afficher.

Dans ce projet, nous avons implémenté notre propre version nommée _printf, capable de gérer les formats de base suivants :

| SPÉCIFICATEUR | DESCRIPTION                        |
|---------------|--------------------------------------|
| `%c`          | Affiche un caractère                 |
| `%s`          | Affiche une chaîne de caractères     |
| `%%`          | Affiche le caractère `%`             |
| `%d` / `%i`   | Affiche un entier décimal (base 10)  |

---

## 🛠️ PROTOTYPE

```c
int _printf(const char *format, ...);
```

---

## 💻 EXEMPLE D'UTILISATION

```c
#include "main.h"

int main(void)
{
    _printf("Holberton, %s!\n", "school!");
    _printf("Caractere: %c\n", 'A');
    _printf("Nombre: %d\n", 123);
    _printf("Signe pourcent: %%\n");
    return (0);
}
```

🖨️ **Sortie attendue :**

```
Holberton School!
Caractere: A
Nombre: 123
Signe pourcent: %
```

---

## ⚙️ COMPILATION

Pour compiler le programme :

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o _printf
```

---

## 🗂️ FICHIERS IMPORTANTS

- `main.h` : Fichier d’en-tête contenant les prototypes. C'est le point central du projet. Ce fichier permet de déclarer toutes les fonctions et structures dont on aura besoin dans les autres fichiers .c
- `_printf.c` : Fonction principale
- `fonctions.c` : Fichier contenant toutes les fonctions spécialisées qui sont responsables d'afficherun type d'argument particulier dans la fonction print.f

---

## 🧩 FLOWCHART

---

## 👥 COLLABORATEURS & AUTEURS

[**Victoire Boutin**](https://github.com/Victoire07)
[LinkedIn - Victoire](https://www.linkedin.com/in/victoire-boutin-207814171/)

[**Angela Rhin**](https://github.com/Sweetyamnesia)
[LinkedIn - Angela](https://www.linkedin.com/in/angela-rhin/)

