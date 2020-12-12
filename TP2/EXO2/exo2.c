#include <stdio.h>
#include <stdlib.h>

int maxi(float x, float y, float z)           // on cherche le maximum des 3 variables entrées
{

    if (x <= y) {
        if (y <= z) {
            return(z);
        }

        else {
            return(y);
        }
    }


    if (x >= y) {
        if (x >= z) {
            return(x);
        }
        else {
            return(z);
        }


    }

}

void permute(float* x, float* y) {      //fonction de permutation de deux variables
    float tmp = *x;
    *x = *y;
    *y = tmp;

}





int main() {

    float x = 1;
    float y = 1;
    float z = 1;
    int i = 1;

    while (i == 1) {

        printf("\n entrer la premiere mesure : ");
        scanf_s("%f", &x);

        while (x > 150) {											// on refait la séquence tant que la mesure est trop grande
            printf("entrez une autre mesure plus petite: ");
            scanf_s("%f", &x);
        }
        printf("\n entrer la deuxieme mesure : ");
        scanf_s("%f", &y);

        while (y > 150) {											// on refait la séquence tant que la mesure est trop grande
            printf("entrez une autre mesure plus petite: ");
            scanf_s("%f", &y);
        }

        printf("\n entrer la troisieme mesure : ");
        scanf_s("%f", &z);

        while (z > 150) {											// on refait la séquence tant que la mesure est trop grande
            printf("entrez une autre mesure plus petite: ");
            scanf_s("%f", &z);

        }


        if (maxi(x, y, z) == z) {                           // On ordonne les 3 valeurs dans l'ordre croissant
            permute(&x, &z);
            if (z >= y) {
                permute(&z, &y);
            }

        }

        if (maxi(x, y, z) == y) {
            permute(&y, &x);
            if (z >= y) {
                permute(&z, &y);
            }
        }

        if (maxi(x, y, z) == x) {
            if (z >= y) {
                permute(&z, &y);
            }
        }

        if (x <= 55 && y <= 35 && z <= 25) {
            printf("VALIDE");
        }
        else {
            printf("NON VALIDE");
        }


        printf("\n Voulez-vous traiter un autre colis? Entrez 1 si oui, 0 sinon ");
        scanf_s("%d", &i);

    }
}