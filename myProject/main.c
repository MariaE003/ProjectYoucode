#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int combien,i;
int quantite[100],combien=0,i=0;
    float prix[100];
    char titre[10][100],auteur[10][100];
void AjouterLivre(){
    printf("combien de livre vous pouvez ajouter : ");
                scanf("%d",&combien);
                while(i<combien){
                    printf("entrer le livre N * %d livre\n",i+1);
                    printf("entrer le titre du livre :");
                    scanf("%[&^\n]",titre[i]);
                    getchar();
                    printf("entrer le auteur du livre :");
                    scanf("%[&^\n]",auteur[i]);

                    printf("entrer le prix du livre :");
                    scanf("%[&^\n]",&prix[i]);

                    printf("entrer la quantite du livre :");
                    scanf("%[&^\n]",&quantite[i]);
                    i++;
                }

}
void AfficherLivre(){
    printf("voici tous les livres :\n");
    for(i=0;i<combien;i++){
        printf("%s -- %s -- %.2f -- %d \n",titre[i],auteur[i],prix[i],quantite[i]);
    }
}
void ModifierLivre(){
char livreAmodifier[10];
                printf("quelle livre  tu veux modifier entrer le nom du livre : ");
                scanf("%s",livreAmodifier);
                for(i=0;i<strlen(livreAmodifier);i++){
                    if(isupper(livreAmodifier[i])){
                    livreAmodifier[i]=tolower(livreAmodifier[i]);
                    //printf("%s",livreAmodifier[i]);
                }
                }


                for(i=0;i<combien;i++){
                    //strcmp return 0 si les deux valeur sont egale sinon ...
                    if(strcmp(livreAmodifier, titre[i]) == 0){

                        printf("entrer la nouvelle quantite: ");
                        scanf("%d",&quantite[i]);
                        break;

                    }
                }
}
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
    /*int N,i,S=0;
    printf("enter un nombre :");
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        S+=i;
    }
    printf("la somme est : %d",S);
    */


    //dicimal en binaire
   /* int N,i,dev,reste;
    printf("enter un nombre :");
    scanf("%d",&N);

    do{
        reste=N%2;
        N=N/2;
        printf("%d",reste);

    }while(N!=0);
    */
    //je dois fqire linverse

    //les tableau
    //challenge 1
    /*int T[]={1, 2, 3, 4, 5},i;
    for(i=0;i<5;i++){
        printf("T[%d] = %d\n",i,T[i]);
    }
    */
    //challenge 2
    /*
    int T[100],i,taille;
    printf("entrer le nombre des element du tableau : \n");
    scanf("%d",&taille);
    printf("entrer les element du tableau : \n");
    for(i=0;i<taille;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("voici laffichage des element du tableau :\n");
    for(i=0;i<taille;i++){
        printf("T[%d] = %d\n",i+1,T[i]);
    }
    */
    //Challenge 4 : Trouver le Maximum

    /*
    int T[100],i,taille,max;
    printf("entrer le nombre des element du tableau : \n");
    scanf("%d",&taille);
    printf("entrer les element du tableau : \n");
    for(i=0;i<taille;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    max=T[0];
    for(i=0;i<taille;i++){
        if(T[i]>max){
            max=T[i];
        }
    }
    printf("le maximum est : %d",max);
*/

    //chalenge
/*
    int T[100],i,taille,temp,j;
    printf("entrer le nombre des element du tableau : \n");
    scanf("%d",&taille);
    printf("entrer les element du tableau : \n");
    for(i=0;i<taille;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }

    for(i=0;i<taille;i++){
            for(j=i+1;j<taille;j++){
                if(T[i]>T[j]){
                    temp=T[i];
                    T[i]=T[j];
                    T[j]=temp;
                }
            }

    }
    printf("voici les element en ordre croissant : ");
    for(i=0;i<taille;i++){
        printf("T[%d] = %d\n",i+1,T[i]);
    }
    */

    //copie d'un tableau
    /*
    int T[100],C[100],i,taille;

    printf("entrer le nombre des element du tableau : \n");
    scanf("%d",&taille);

    printf("entrer les element du tableau : \n");
    for(i=0;i<taille;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<taille;i++){
       C[i]=T[i];
    }
    //le tableau origin
    printf("le tableau origin \n");
    for(i=0;i<taille;i++){
        printf("T[%d] = %d \n",i+1,T[i]);
    }
    //la tableau copie
    printf("la tableau copie \n");
    for(i=0;i<taille;i++){
        printf("C[%d] = %d",i+1,C[i]);
    }
*/

    //exercice
/*
    float P=125,NT=0,i,x1;
    int NombreP;
    printf("entrer les nombre de produiut : ");
    scanf("%d",&NombreP);
    int j=0;
    for(i=0;i<NombreP;i++){
            NT=NT+P-(P*j/100);
            j+=2;

    }
    printf("le prix totale est : %f",NT);
*/

    //Challenge 9 : Inversion d'un Tableau

    /*
    int T[]={1,2,3,4,5},i,j,In[100];
    int length = sizeof(T) / sizeof(T[0]);
    printf("taille du t est : %d\n",length);

    for(i=0;i<length;i++){
            In[i]=T[length-i-1];
    }

    for(i=0;i<5;i++){
        printf("%d ",In[i]);
    }
    */

    //Challenge 10 : Rechercher un Élément
    /*
    int T[100],C[100],i,taille,elementR,setrouve=0;

    printf("entrer le nombre des element du tableau : \n");
    scanf("%d",&taille);

    printf("entrer les element du tableau : \n");
    for(i=0;i<taille;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("entrer un nombre a chercher .");
    scanf("%d",&elementR);
    for(i=0;i<taille;i++){
        if(elementR==T[i]){
                setrouve=1;
        }
    }
    if(setrouve){
        printf("lelement est dans le tableau .");
    }else{
            printf("lelement n'est pas dans le tableau .");
    }
    */


    /*
    int quantite[100],combien=0,i=0;
    float prix[100];
    char titre[10][100],auteur[10][100];
    */


    int leChoix;
    char laReponse;
    do{
        printf("== entrer un choix valide entre 1 et 6 == \n");
        printf("1 - ajouter un livre :\n");
        printf("2 - modifier un livre :\n");
        printf("3 - supprimer un livre :\n");
        printf("4 - voir tous les livre :\n");
        printf("5 - le nombre totale des livre :\n");
        printf("6 - chercher sur un livre :\n");
        scanf("%d",&leChoix);
        switch(leChoix){
            case 1:
                AjouterLivre();
                break;
            case 2:
                ModifierLivre();
                /*char livreAmodifier[10];
                printf("quelle livre  tu veux modifier entrer le nom du livre : ");
                scanf("%s",livreAmodifier);
                for(i=0;i<strlen(livreAmodifier);i++){
                    if(isupper(livreAmodifier[i])){
                    livreAmodifier[i]=tolower(livreAmodifier[i]);
                    //printf("%s",livreAmodifier[i]);
                }
                }


                for(i=0;i<combien;i++){
                    //strcmp return 0 si les deux valeur sont egale sinon ...
                    if(strcmp(livreAmodifier, titre[i]) == 0){

                        printf("entrer la nouvelle quantite: ");
                        scanf("%d",&quantite[i]);
                        break;

                    }
                }*/

                break;
            case 3:
                //supp
                /*char livreAsupprimer[100];
                char P;
                printf("quelle livre tu veux supprimer mentrer le nom du livre ? :");
                scanf("%s",&livreAsupprimer);
                if(strcmp(livreAmodifier,titre[i])==0){
                    P=titre[livreAmodifier];
                    printf("%d",P);
                    /*for(i=;i<combien;i++){
                        titre[li]
                    }
                }*/
                break;
            case 4:
                AfficherLivre();
                break;
            case 5:
                int count;
                for(i=0;i<combien;i++){
                    count+=quantite[i];
                }
                printf("le nombre total de livres en stock est : %d",count);

                break;
            case 6:
                //chercher sur un livre
                break;
            default:
                printf("entrer un choix valide !!");
                break;

        }


        printf("vous voulez continuer ? y/n");
        scanf(" %c",&laReponse);

    }while(leChoix<1 || leChoix>5 || laReponse != 'n');







    return 0;
}
