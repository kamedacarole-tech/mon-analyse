#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void hexa(int r){
	char hex[]="0123456789ABCDEF";
	printf("%c",hex[r]);
}
int main(int argc, char *argv[]) {
	int  taille,c, i=0, j=0, r=0, a;
	char choix[10]="oui";
	
    unsigned int decimal;

    int t[32]; 
	printf("hello world");
	printf("voici votre menu choisissez l'option qui vous convient par les numeros 1,2,3,4,5,6\n");
	printf("1-convertir un nombre de binaire en decimal");
	printf("...................................\n");
	printf("2-convertir un nombre de decimal en binaire");
	printf("...................................\n");
	printf("3-convertir un nombre de decimal en hexadecimal");
	printf("...............................\n");
	printf("4-convertir un nombre de decimal en octal");
	printf(".....................................\n");
	printf("5-convertir un nombre d\'octal en decimal");
	printf(".....................................\n");
	printf("6-convertir un nombre de hexadecimal en decimal");
	printf("...............................\n");
  while (scanf("%d", &c) != 1 || c < 1 || c>6 ) {
        while (getchar() != '\n'); // vider le buffer
        printf("option invalide ,choisissez entre l\'option 1,l\'option 2,l\'option 3,l\'option 4,l\'option 5, par respectivement 1,2,3,4,5,6\n ");
    }
  switch (c){
	
	case 1:
		

    while(strcmp(choix,"non")!=0){
        // Menu
        printf("\n===============================================================================\n");
        printf("======= BIENVENUE SUR LE CONVERTISSEUR DE BASE binaire A decimal=======");
        printf("\n===============================================================================\n");

        printf("Quelle est la longueur de votre nombre ?? :  \n");
        scanf("%d",&taille);
        

        do{
        	do{
        	 printf("\n Entrez le %dieme chiffre de votre nombre(0 ou 1) : ",i+1);
        printf("_________________________________________________________________\n");
             while (scanf("%d", &t[i]) != 1 ) {
                while (getchar() != '\n'); // vider buffer
                printf("Entrée invalide ! Entrez 0 ou 1 : ");
            }

            if (t[i] != 0 && t[i] != 1) {
                printf("Erreur : un nombre binaire contient seulement 0 ou 1 !\n");
            }

        } while (t[i] != 0 && t[i] != 1);
            i++;
        } while(i<taille);

        while(j<taille) {
            r += t[j]* pow(2,i-1);
             i--;
            j++;


      }
        printf("ce nombre en base 10 est:%d \n",r);

        // Menu
        printf("\n===============================================================================\n");
        printf("======= AIMEREZ VOUS CONVERTIR UN AUTRE NOMBRE DE BINAIRE EN DECIMAL? =======");
        printf("\n===============================================================================\n");
        printf("\n souhaitez vous rester??? tappez \"oui\" pour rester et \"non\" pour quitter : \t");
        scanf("%s",&choix);
}
	break;

case 2:
	   
    while(strcmp(choix,"non")!=0){
        printf("\n===============================================================================\n");
        printf("======= BIENVENUE SUR LE CONVERTISSEUR DE BASE decimal A binaire =======");
        printf("\n===============================================================================\n");
   
    printf("Entrez un nombre entier positif: ");
    // vérification de la saisie
    while (scanf("%d", &a) != 1 || a < 0) {
        while (getchar() != '\n'); // vider le buffer
        printf("Vous avez entrez un nombre incorrect, entrez un nombre entier positif: ");
    }

    if (a == 0) {
        printf("Ce nombre en base 2 est: 0\n");
    } else {
        // conversion en binaire
        while (a != 0) {
            r = a % 2;
            a = a / 2;
            t[i] = r;
            i++;
        }
        printf("Ce nombre en base 2 est: ");
        for (j = i - 1; j >= 0; j--) {
            printf("%d", t[j]);
        }}
        printf("\n");
     printf("\n===============================================================================\n");
        printf("======= AIMEREZ VOUS CONVERTIR UN AUTRE NOMBRE DE DECIMAL EN BINAIRE? =======");
        printf("\n===============================================================================\n");
        printf("\n Souhaitez vous rester ??? tappez \"oui\" pour rester et \"non\" pour quitter : \t");
        scanf("%s",&choix);    
    }
    break;
    case 3:
    	 
    while(strcmp(choix,"non")!=0){
        printf("\n===============================================================================\n");
        printf("======= BIENVENUE SUR LE CONVERTISSEUR DE BASE decimal A hexadecimal =======");
        printf("\n===============================================================================\n");
   
    printf("Entrez un nombre entier positif: ");
    // vérification de la saisie
    while (scanf("%d", &a) != 1 || a < 0) {
        while (getchar() != '\n'); // vider le buffer
        printf("Vous avez entrez un nombre incorrect, entrez un nombre entier positif: ");
    }

    if (a == 0) {
        printf("Ce nombre en base 16 est: 0\n");
    } else {
        // conversion en hexadecimal
        while (a != 0) {
            r = a % 16;
            a = a / 16;
            t[i] = r;
            i++;
        }
    
        printf("Ce nombre en base 16 est: ");
        for (j = i - 1; j >= 0; j--) {
             hexa(t[j]);
        }
        printf("\n");}
     printf("\n===============================================================================\n");
        printf("======= AIMEREZ VOUS CONVERTIR UN AUTRE NOMBRE DE DECIMAL EN hexadecimal=======");
        printf("\n===============================================================================\n");
        printf("\n Souhaitez vous rester ??? tappez \"oui\" pour rester et \"non\" pour quitter : \t");
        scanf("%s",choix);    
    }
    break;
    	case 4:
	   
    while(strcmp(choix,"non")!=0){
        printf("\n===============================================================================\n");
        printf("======= BIENVENUE SUR LE CONVERTISSEUR DE BASE decimal A octal =======");
        printf("\n===============================================================================\n");
   
    printf("Entrez un nombre entier positif: ");
    // vérification de la saisie
    while (scanf("%d", &a) != 1 || a < 0) {
        while (getchar() != '\n'); // vider le buffer
        printf("Vous avez entrez un nombre incorrect, entrez un nombre entier positif: ");
    }

    if (a == 0) {
        printf("Ce nombre en base binaire est: 0\n");
    } else {
        // conversion en binaire
        while (a != 0) {
            r = a % 8;
            a = a / 8;
            t[i] = r;
            i++;
        }
        printf("Ce nombre en base binaire est: ");
        for (j = i - 1; j >= 0; j--) {
            printf("%d", t[j]);
        }}
        printf("\n");
     printf("\n===============================================================================\n");
        printf("======= AIMEREZ VOUS CONVERTIR UN AUTRE NOMBRE DE DECIMAL EN OCTAL  =======");
        printf("\n===============================================================================\n");
        printf("\n Souhaitez vous rester ??? tappez \"oui\" pour rester et \"non\" pour quitter : \t");
        scanf("%s",&choix);    
    }
    break;
    case 5:
     while(strcmp(choix,"non")!=0){
        // Menu
        printf("\n===============================================================================\n");
        printf("======= BIENVENUE SUR LE CONVERTISSEUR DE BASE OCTAL A BASE DECIMAL=======");
        printf("\n===============================================================================\n");

        printf("Quelle est la longueur de votre nombre ?? :  \n");
        scanf("%d",&taille);
        

        do{
        	do{
        	 printf("\n Entrez le %dieme chiffre de votre nombre(0, 1,2,3,4,5,6 ou 7) : ",i+1);
        printf("_________________________________________________________\n");
             while (scanf("%d", &t[i]) != 1 ) {
                while (getchar() != '\n'); // vider buffer
                printf("Entrée invalide ! Entrez 0,1,2,3,4,5,6 ou 7 : ");
            }

            if (t[i] != 0 && t[i] != 1 && t[i] != 2 && t[i] != 3 && t[i] != 4 && t[i] != 5 && t[i] != 6 && t[i] != 7) {
                printf("Erreur : un nombre octal contient seulement 0 ,1,2,3,4,5,6 ou 7 !\n");
            }

        } while (t[i] != 0 && t[i] != 1 &&t[i] != 2 && t[i] != 3 && t[i] != 4 && t[i] != 5 && t[i] != 6 && t[i] != 7);
            i++;
        } while(i<taille);

        while(j<taille) {
            r += t[j]* pow(8,i-1);
               i--;
            j++;
        }
        printf("ce nombre en base DECIMAL est:%d \n",r);

        // Menu
        printf("\n===============================================================================\n");
        printf("======= AIMEREZ VOUS CONVERTIR UN AUTRE NOMBRE D\'OCTAL A DECIMAL =======");
        printf("\n===============================================================================\n");
        printf("\n Souhaitez vous rester ??? tappez \"oui\" pour rester et \"non\" pour quitter : \t");
        scanf("%s",&choix);
}
	break;
	case 6:
	  while(strcmp(choix,"non")!=0){
        // Menu
        printf("\n===============================================================================\n");
        printf("======= BIENVENUE SUR LE CONVERTISSEUR DE BASE HEXADECIMAL A BASE DECIMAL =======");
        printf("\n===============================================================================\n");

    printf("Entrez un nombre hexadécimal : ");
    scanf("%x", &decimal); // lit directement l'hexadécimal

    printf("En décimal : %u\n", decimal);
 // Menu
        printf("\n===============================================================================\n");
        printf("======= AIMEREZ VOUS CONVERTIR UN AUTRE NOMBRE D\'HEXADECIMAL EN DECIMAL =======");
        printf("\n===============================================================================\n");
        printf("\n Souhaitez vous rester ??? tappez \"oui\" pour rester et \"non\" pour quitter : \t");
        scanf("%s",&choix);
}
        	
    default:
    	printf("erreur");}
    	
    	return 0;
    }