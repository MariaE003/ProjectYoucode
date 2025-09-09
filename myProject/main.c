#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_BOOKS 100
#include <stdbool.h>


//chalenges des fonction
int Fibonacci(int N){
    int U0,U1,U;
    U0=0;
    U1=1;
    if (N == 0) return U0;
    if (N == 1) return U1;
    for(int i=2;i<=N;i++){
        U=U0+U1;
        U0=U1;
        U1=U;
    }
    return U1;

}
int PaireImpaire(int N){
    if(N%2==0){
        return 1;
    }else{
        return 0;
    }
}


void calculeAir(float lar,float longe){
    printf("laire de cette rectangle est : %.2f ",lar*longe);
}


//mini-p 2
typedef struct Contact{
            char nom[100];
            char numero_de_telephone[100];
            char adresse_e_mail[100];
        }contact;


int Search(contact contacts[],int taille,char contact1[100]){
    for(int i=0;i<taille;i++){
        if(strcasecmp(contacts[i].nom,contact1)==0){
                return i;
            //printf("nom : %s - numero_de_telephone : %s - adresse_e_mail : %s\n",contacts[i].nom,contacts[i].numero_de_telephone,contacts[i].adresse_e_mail);
        }
    }
    return -1;
}

//
void triSelection(int T[],int taille){
    int index_i=0;
    int temp=0;
    for(int i=0;i<taille-1;i++){
        index_i=i;//stocker lindece du 1ere element du tab
        for(int j=i+1;j<taille;j++){
            if(T[j]<T[index_i]){
                index_i=j;
            }
        }
        if(index_i !=i){
        temp=T[i];
        T[i]=T[index_i];
        T[index_i]=temp;
        }
    }
    /*for(int i=0;i<taille;i++){
        printf(" / %d /",T[i]);
    }*/
}
int partition(int T[],int bas, int haut){
    int pivot=T[haut];
    int i=(bas-1);
    int temp;
    for(int j=bas;j<haut;j++){
        if(T[j]<=pivot){
            i++;
            temp=T[i];
            T[i]=T[j];
            T[j]=temp;

        }
    }
    temp=T[i+1];
    T[i+1]=T[haut];
    T[haut]=temp;
    return(i+1);
}
void triRapide(int T[],int bas,int haut){
    if(bas<haut){
        int pi=partition(T,bas,haut);
        triRapide(T,bas,pi-1);
        triRapide(T,pi+1,haut);
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





    //le mini-projet
    /*
<<<<<<< HEAD
    int quantite[100],combien=0,i=0;
    float prix[100];
    char titre[10][100],auteur[10][100];
    */


    //le mini-projet
    /*
    int quantite[MAX_BOOKS];
    float prix[MAX_BOOKS];
    char titre[MAX_BOOKS][MAX_BOOKS],auteur[MAX_BOOKS][MAX_BOOKS];
    int nbr_livre=0;
    char reponse_y_n;
    int choix_menu,count_total_livre=0;
    do{
        printf("___________menu___________\n");
        printf("== entrer un choix valide entre 1 et 6 == \n");
        printf("1 - ajouter un livre :\n");
        printf("2 - modifier un livre :\n");
        printf("3 - supprimer un livre :\n");
        printf("4 - voir tous les livre :\n");
        printf("5 - le nombre totale des livre :\n");
        printf("6 - chercher sur un livre :\n");
        scanf("%d",&choix_menu);
        switch(choix_menu){
            case 1:
                int i;
                printf("combien des livre vous pouvez ajouter : ");
                scanf("%d",&nbr_livre);
                for(i=0;i<nbr_livre;i++){
                    printf("entrer le livre N * %d livre\n",i+1);

                    printf("entrer le titre du livre :");
                    getchar();
                    fgets(titre[i],sizeof(titre),stdin);

                    printf("entrer l'auteur du livre :");
                    getchar();
                    fgets(auteur[i],sizeof(auteur),stdin);

                    printf("entrer le prix du livre :");
                    scanf("%f",&prix[i]);
                    getchar();
                    printf("entrer la quantite du livre :");
                    scanf("%d",&quantite[i]);
                    getchar();


                }
                break;

            case 2:
                char livre_a_modifier[MAX_BOOKS];

                printf("entre le livre a modifier : ");
                getchar();
                fgets(livre_a_modifier,sizeof(livre_a_modifier),stdin);

                for(int i=0;i<nbr_livre;i++){
                    if(strcasecmp(livre_a_modifier,titre[i])==0){
                    printf("entrer la nouvelle quantite :");
                    scanf("%d",&quantite[i]);
                    }
                }

                break;
            case 3:
                char livre_a_supprimer[MAX_BOOKS];
                printf("entre le livre a supprimer : ");
                getchar();
                fgets(livre_a_supprimer,sizeof(livre_a_supprimer),stdin);

                for(int i=0;i<nbr_livre;i++){
                    if(strcasecmp(livre_a_supprimer,titre[i])==0){
                    for(int j=i;j<nbr_livre;j++){
                        strcpy(titre[j],titre[j+1]);
                        strcpy(auteur[j],auteur[j+1]);
                        prix[j]=prix[j+1];
                        quantite[j]=quantite[j+1];

                    }
                    nbr_livre --;
                    printf("le Livre est supprime .\n");
                    break;
                }
                }
                break;
            case 4:
                for(i=0;i<nbr_livre;i++){
                    printf("%s -- %s -- %.2f -- %d \n",titre[i],auteur[i],prix[i],quantite[i]);
                }
                break;
            case 5:
                for(int i=0;i<nbr_livre;i++){
                    count_total_livre+=quantite[i];
                }
                printf("voici le nombre totale des livre: %d\n",count_total_livre);
                break;
            case 6:
                char livre_a_chercher[MAX_BOOKS];
                printf("entrer le livre a chercher :");
                getchar();
                fgets(livre_a_chercher,sizeof(livre_a_chercher),stdin);
                for(int i=0;i<nbr_livre;i++){
                    if(strcasecmp(livre_a_chercher,titre[i])==0){

                        printf("%s -- %s -- %.2f -- %d \n",titre[i],auteur[i],prix[i],quantite[i]);

                    }
                }
                break;
            default :
                printf("entrer un choix valide .\n");
                break;

        }
        printf("vous voulez continuer ? y/n");
        scanf(" %c", &reponse_y_n);

    }while(reponse_y_n != 0);

    */



    //les challenges du functions
    //chalenge 6 fonction du fibonacci
    /*int N;
    printf("entrer un entier :");
    scanf("%d",&N);
    printf("fiboncci de  %d est : %d ",N,Fibonacci(N));
    */
    //Challenge 8 : Fonction de Vérification de Parité
    /*
    int N;
    printf("entrer un entier :");
    scanf("%d",&N);
    if(PaireImpaire(N)==1){
      printf("lentier  %d est paire",N);
    }else{
        printf("lentier  %d est impaire",N);
    }
    */


    //les chalenge de string
    //challenge 1
    /*
    char chaine1[100];
    printf("entrer une chaine :");
    gets(chaine1);
    printf("voici la chaine");
    puts(chaine1);
    */

    //challenge2

    /*
    char chaine[100];
    int count=0;
    printf("entrer une chaine de caracter :");
    gets(chaine);
    for(int i=0;chaine[i]!='\0';i++){
        count++;
    }
    printf("le size du chaine est : %d",count);

    */

    //challenge 3
    /*char chaine1[100],chaine2[100];
    printf("entrer le premier chaine :");
    gets(chaine1);
    printf("entrer le deuxieme chaine :");
    gets(chaine2);

    printf("%s ",strcat(chaine1,chaine2));
*/

    //Challenge 4 : Comparaison de Chaînes
    /*
    char chaine1[100],chaine2[100];
    printf("entrer le premier chaine :");
    gets(chaine1);
    printf("entrer le deuxieme chaine :");
    gets(chaine2);
    if(strcmp(chaine1,chaine2)==0){
        printf("les chaine1 %s, et chaine2 %s sont egaux",chaine1,chaine2);
    }else{
        printf("les chaines ne sont pas egales.");
    }
    */


    /*//Challenge 5 : Inversion de Chaîne

    char chaine[100];
    printf("entre une chaine : ");
    gets(chaine);
    for(int i=strlen(chaine)-1 ; i>=0 ; i--){
        printf("%c",chaine[i]);
    }

    */
    //Challenge 6 : Compte des Occurrences d'un Caractère
    /*
    char chaine[100],C,count=0;
    printf("entre une chaine : ");
    gets(chaine);
    printf("entre un caractere : ");
    scanf("%c",&C);
    for(int i=0;i<strlen(chaine);i++){
        if(chaine[i]==C){
            count++;
        }
    }
    printf("le nombre de occurance du caractere %c dans la chaine %s est : %d",C,chaine,count);

    */

    //Challenge 9 : Suppression des Espaces


    // Challenge 10 : Trouver un Sous-String




    //les chalenge de string
    //challenge 1
    /*
    char chaine1[100];
    printf("entrer une chaine :");
    gets(chaine1);
    printf("voici la chaine");
    puts(chaine1);
    */

    //challenge2

    /*
    char chaine[100];
    int count=0;
    printf("entrer une chaine de caracter :");
    gets(chaine);
    for(int i=0;chaine[i]!='\0';i++){
        count++;
    }
    printf("le size du chaine est : %d",count);

    */

    //challenge 3
    /*char chaine1[100],chaine2[100];
    printf("entrer le premier chaine :");
    gets(chaine1);
    printf("entrer le deuxieme chaine :");
    gets(chaine2);

    printf("%s ",strcat(chaine1,chaine2));
*/

    //Challenge 4 : Comparaison de Chaînes
    /*
    char chaine1[100],chaine2[100];
    printf("entrer le premier chaine :");
    gets(chaine1);
    printf("entrer le deuxieme chaine :");
    gets(chaine2);
    if(strcmp(chaine1,chaine2)==0){
        printf("les chaine1 %s, et chaine2 %s sont egaux",chaine1,chaine2);
    }else{
        printf("les chaines ne sont pas egales.");
    }
    */


    /*//Challenge 5 : Inversion de Chaîne

    char chaine[100];
    printf("entre une chaine : ");
    gets(chaine);
    for(int i=strlen(chaine)-1 ; i>=0 ; i--){
        printf("%c",chaine[i]);
    }

    */
    //Challenge 6 : Compte des Occurrences d'un Caractère
    /*
    char chaine[100],C,count=0;
    printf("entre une chaine : ");
    gets(chaine);
    printf("entre un caractere : ");
    scanf("%c",&C);
    for(int i=0;i<strlen(chaine);i++){
        if(chaine[i]==C){
            count++;
        }
    }
    printf("le nombre de occurance du caractere %c dans la chaine %s est : %d",C,chaine,count);

    */

    //Challenge 9 : Suppression des Espaces


    // Challenge 10 : Trouver un Sous-String





    //Challenges du struct
        //Challenge 1 : Définition et Utilisation de Structure

        /*
        typedef struct Personne{
            char nom[100];
            char prenom[100];
            int age;
        }pers;
        struct Personne P1={"elg","maria",22};
        pers P2={"elgotby","fati",19};

        printf("nom - %s / prenom - %s / age - %d",P1.nom,P1.prenom,P1.age);
        printf("\nnom - %s / prenom - %s / age - %d",P2.nom,P2.prenom,P2.age);
        */
        //Challenge 2 : Structure avec Tableau

        /*
        typedef struct Etudiant{
        char nom[100];
        char prenom[100];
        int notes[100];
        }etud;
        etud E1={"elgotby","maria",{1,2,3,4}};
        printf("nom - %s / prenom - %s ",E1.nom,E1.prenom);
        for(int i=0;i<4;i++)
        {
            printf(" notes[%d] - %d ",i,E1.notes[i]);
        }
        */
        //Challenge 3 : Passage de Structure en Argument
        /*
        typedef struct rectangle{
            float largeur;
            float longueur;
        }rec;
        rec rectangle1={12.3,2.5};
        calculeAir(rectangle1.largeur,rectangle1.longueur);
        */






        //mini-projet 2

        /*
        typedef struct Contact{
            char nom[100];
            int numero_de_telephone;
            char adresse_e_mail[100];
        }contact;
*/
/*
        char reponse;
        int choix;
        int cmp=0;
        contact contacts[10];
        int index=0;

        do{
            printf("\n -------menu--------- \n");
            printf("1 - Ajouter un Contact.\n");
            printf("2 - Modifier un Contact.\n");
            printf("3 - Supprimer un Contact.\n");
            printf("4 - Afficher Tous les Contacts.\n");
            printf("5 - Rechercher un Contact\n");


            scanf("%d",&choix);
            getchar();

            switch(choix){
                case 1:

                    // question combien ...
                    printf("entrer le Nom : \n");
                    fgets(contacts[cmp].nom, 100, stdin);
                    //contact]s.nom[strlen(contacts.nom)-1]='\0';

                    contacts[cmp].nom[strcspn(contacts[cmp].nom, "\n")] = '\0';
                    //getchar();


                    printf("entrer le numero_de_telephone : \n");

                    fgets(contacts[cmp].numero_de_telephone, 100, stdin);
                   contacts[cmp].numero_de_telephone[strcspn(contacts[cmp].numero_de_telephone, "\n")] = '\0';
                    //getchar();

                    printf("entrer l'adresse_e_mail : \n");

                    fgets(contacts[cmp].adresse_e_mail,100,stdin);
                    contacts[cmp].adresse_e_mail[strcspn(contacts[cmp].adresse_e_mail,"\n")]='\0';
                    //getchar();

                    cmp++;
                    break;
                case 2:
                    char contact_a_modifier[100];


                    printf("entrer le nom du contact que vous voulew modifier : ");
                    //getchar();
                    fgets(contact_a_modifier,sizeof(contact_a_modifier),stdin);
                    //contact_a_modifier[strcspn(contact_a_modifier, "\n")] = '\0';

                    index=Search(contacts,cmp,contact_a_modifier);

                    if(index!=-1){
                        printf("entrer la nouvelle valeur pour numero_de_telephone :");
                        scanf("%s",&contacts[index].numero_de_telephone);


                        printf("entrer la nouvelle valeur pour adresse_e_mail :");
                        scanf("%s",&contacts[index].adresse_e_mail);

                        printf("le contact est modifier avce succes.\n");

                    }

                    break;
                case 3: //la supprision
                    char contact_a_supprimer[100];
                    printf("entrer le contact que vous voulez supprimer :");
                    //getchar();
                    fgets(contact_a_supprimer,sizeof(contact_a_supprimer),stdin);

                    index=Search(contacts,cmp,contact_a_supprimer);
                    printf("%d",index);
                    if(index != -1){
                        for(int i=index;i<cmp;i++){
                                contacts[i]=contacts[i+1];
                        }
                        cmp--;
                        printf("la supprission fait avec succes.\n");
                    }

                    break;
                case 4:
                    printf("voici tous les contacts :\n");
                    for(int i=0;i<cmp;i++){
                        printf("nom : %s - numero_de_telephone : %s - adresse_e_mail : %s \n",contacts[i].nom,contacts[i].numero_de_telephone,contacts[i].adresse_e_mail);
                    }
                    break;
                case 5:
                    char search[100];

                    printf("entrer le nom du contact :");
                    fgets(search,sizeof(search),stdin);
                    //search[strcspn(search, "\n")] = '\0';

                    index=Search(contacts,cmp,search);
                    if(index==-1){
                        printf("votre contact est introvable.\n");
                    }else{
                        printf("nom : %s - numero_de_telephone : %s - adresse_e_mail : %s\n",contacts[index].nom,contacts[index].numero_de_telephone,contacts[index].adresse_e_mail);
                    }
                    break;
                default:
                    printf("entrer un choix valide.\n");
                    break;

            }


            printf("vous voulez continuer ? y/n :\n");
            getchar();
            scanf("%c",&reponse);
        }while(reponse != 'n');


    */



        //Challenge 3 : Tri par Sélection

        /*
        int T[8]={1,6,-2,44,12,2,7,-22};
        int taille=sizeof(T)/sizeof(T[0]);

        for(int i=0;i<taille;i++){
            printf("* %d *",T[i]);
        }
        printf(" **** \n");
        triSelection(T,taille);
        for(int i=0;i<taille;i++){
            printf(" / %d /",T[i]);
        }


        bool isMerror;
        int T[]={1,2,3,4};

        int taille=sizeof(T)/sizeof();
        */

        int T[8]={1,6,-2,44,12,2,7,-22};
        int taille=sizeof(T)/sizeof(T[0]);

        for(int i=0;i<taille;i++){
            printf("* %d *",T[i]);
        }

        printf(" **** \n");
        triRapide(T,0,taille-1);
        for(int i=0;i<taille;i++){
            printf(" / %d /",T[i]);
        }

    return 0;

}







