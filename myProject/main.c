#include <stdio.h>
#include <stdlib.h>

int main()
{




    //challenge 11
    /*float  longueur , largeur,surface;
    printf("entrer la longueur : ");
    scanf("%f",&longueur);

    printf("entrer la largeur : ");
    scanf("%f",&largeur);

    surface=longueur*largeur;
    printf("la surface est : %.2f\n",surface);
    */
    //challenge 12

    /*int a,inverse;
    printf("entrer un nombre : ");
    scanf("%d",&a);

    inverse=(a%10)+(inverse*10);
    a=a/10;//sup nbr lakher
    inverse=(a%10)+(inverse*10);
    a=a/10;
    inverse=(a%10)+(inverse*10);
    a=a/10;
    inverse=(a%10)+(inverse*10);
    a=a/10;

    printf("inverse = %d \n",inverse);
    */
    //challenge 13

    int nbr,a,b,reste;
    printf("entrer un entier : ");
    scanf("%d",&nbr);
    do{
        a=nbr/2;
        reste=(nbr%2)+(reste*10);
        b=a/2;
        printf("%d\n",a);
        reste=(nbr%2)+(reste*10);
        printf("%d",reste);


    }while(b!=0);





    return 0;
}
