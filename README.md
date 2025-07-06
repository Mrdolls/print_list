#  `print_list`

Fonction utilitaire pour afficher le contenu d'une pile (représentée par un tableau d'entiers) dans le terminal.

## Prototype

```c
void print_list(char *message, int **list, int *size);
```
## Paramètres
| Paramètre | Type     | Description                                           |
| --------- | -------- | ----------------------------------------------------- |
| `message` | `char *` | Message affiché avant la pile.                        |
| `list`    | `int **` | Adresse du tableau contenant les éléments à afficher. |
| `size`    | `int *`  | Adresse de la taille actuelle du tableau.             |


##Comportement
Affiche le message suivi du contenu de la pile, séparé par |.

Si la pile est vide (*size == 0), affiche "La pile est vide." sur la sortie d'erreur.

## Exemple d'utilisation
```c
#include "push_swap.h"

int main(void)
{
    int stack_a[] = {5, 10, 15};
    int *list = stack_a;
    int size = 3;

    print_list("Pile A : ", &list, &size);
    return (0);
}
```
## Sortie
```
Pile A : 5 | 10 | 15 |
```

## Exemple avec une pile vide
```c
int *list = NULL;
int size = 0;
print_list("Pile vide : ", &list, &size);
```
## Sortie
```
La pile est vide.
```
## Notes
Utilise write() directement pour éviter les fonctions standard comme printf.
Gère dynamiquement la conversion des entiers avec malloc et free.
