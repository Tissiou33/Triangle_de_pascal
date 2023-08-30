/* ce programme affiche a l'utilisateur le triangle de pascal de la première ligne à la nième 
    qu'il souhaite . Notons que le programme n'est pas fonctionnel pour des nombres élevés .
    Pour le bon fonctionnement du programme l'utilisateur devra éviter d'entrer des saisis autre que des entier___.
*/
#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Entrez le nombre de lignes : ");
    scanf("%d", &n);

    int t[n][n]; // tableau pour stocker les valeurs du triangle
    for (i = 0; i < n; i++) // initialiser la première colonne à 1
    {
        t[i][0] = 1;
    }
    for (i = 0; i < n; i++) // initialiser la diagonale à 1
    {
        t[i][i] = 1;
    }
    for (i = 2; i < n; i++) // remplir le reste du tableau
    {
        for (j = 1; j < i; j++)
        {
            t[i][j] = t[i-1][j-1] + t[i-1][j]; // somme des deux nombres qui surmotent notre ligne et notre colonne du tableau
        }
    }
    for (i = 0; i < n; i++) // afficher le tableau
    {
        for (k = 0; k < n-i-1; k++) // espaces pour aligner les éléments au centre
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d ", t[i][j]); // éléments du triangle
        }
        printf("\n"); // saut de ligne
    }
    return 0;
}
