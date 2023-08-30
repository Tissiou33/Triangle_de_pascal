
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
            t[i][j] = t[i-1][j-1] + t[i-1][j]; // somme des deux nombres qui surmontent
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
