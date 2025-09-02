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
//loops

    //challenge 1 Table de multiplication
    /*int N,i;
    printf("entrer un nombre : ");
    scanf("%d",&N);
    for(i=0;i<=10;i++){
        printf("%d * %d = %d \n",N,i,N*i);
    }
    */
    //challenge 2 Favtorielle
    /*int N,i,F;
    F=1;
    printf("entrer un nombre : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
            F=F*i;
    }
    printf("le factoriele de %d est %d \n",N,F);
*/
    //challenge 3
    /*int N,i,S;
    printf("entrer un nombre :");
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        S+=i;
    }
    printf("la somme est des %d nombre est  : %d ",N,S);

    */

    //challenge 7
    /*int inverse,N;
    printf("entrer un nombre :");
    scanf("%d",&N);
    do{
        inverse=(N%10)+(inverse*10);
        N=N/10;

    }while(N!=0);
    printf("%d",inverse);
    */


    //compteur
    /*int N,i,mode,count;
    printf("entrer un nombre :");
    scanf("%d",&N);

    while(N!=0){
        mode=N%10;
        N=N/10;
        count++;
    }
    printf("le nombre qui compose se nombre est : %d",count);

    */

    //challenge la somme des N entier
    int N,i,S=0;
    printf("enter un nombre :");
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        S+=i;
    }
    printf("la somme est : %d",S);









    return 0;
}
