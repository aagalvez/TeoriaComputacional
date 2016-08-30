#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prefijo(char *cad,int l){
	int i,x,numPrefijos;
	i = x = 0;
	
	printf("Lista de Prefijos: \n");
	while(i<l){
		for (x=0; x <= i; x++)
			printf("%c", cad[x]);
		
		i++;
		numPrefijos++;
		printf("\n");
	}
	
	++numPrefijos;
	printf("Epsilon\n");
	printf("\nPrefijos: %d\n",numPrefijos);
	
}

void sufijo(char *cad, int l){
	int i = l,x,numSufijos;
	
	printf("Lista de Sufijos: \n");
	while(i>0){
		i--;
		for (x=i; x < l; x++)
			printf("%c", cad[x]);

		numSufijos++;
		printf(" \n");
	}
	
	++numSufijos;
	printf("Epsilon\n");
	printf("\nSufijos: %d\n",numSufijos);
	
}

void printchar(char *cad, int num) {
    int i;
    for (i = 0; i < num; i++) {
            printf("%c", *(cad + i));
    }
    printf("\n");
    
}
  
void subcadenas(char cad[]){
	int i = 0, j, subcadcont = 0;
	printf("Lista de Subcadenas: \n");
    while (cad[i] != '\0') {
        for (j = 1; j <= strlen(cad) - i; j++) {
                // imprime caracteres de cada posicion
                printchar((cad + i), j);
                subcadcont++;
        }
        i++;
	}
	++subcadcont;
	printf("Epsilon\n");
	printf("\nSubcadenas: %d\n",subcadcont);
}


int main(void){

char *gets(char *str);
char palabra[100];
int opcion, l;

printf("Introduce una cadena: \n");
gets(palabra);
l = strlen(palabra);
palabra[strlen(palabra)] = '\0';

opcion = 0;
printf("\n Que desea obtener de la cadena ? \n");
printf("1 - Prefijo\n");
printf("2 - Sufijo\n");
printf("3 - Subcadenas\n");
printf("0 - Salir\n\n");
scanf("%d",&opcion);
printf("\n\n");

switch(opcion){
	case 1:
		prefijo(palabra,l);
		break;
	case 2:
		sufijo(palabra,l);
		break;
	case 3:
		subcadenas(palabra);
		break;
	case 0:
		system("cls");
		printf("Hasta la vista!...");
		break;

	default:
		printf("TACHE, opcion incorrecta\n");
		break;
	}
	
}

