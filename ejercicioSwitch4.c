#include <stdio.h>

/*
	
	Como pronunciar el conjuro Wingardium leviosa
	Permitir al usuario ingresar una opcion para completar el conjuro con un conjunto de caracteres especifico dado
	La opcion puede ser numerica o de caracter, al elegir la opcion se debera asignar un conjunto de caracteres
	correspondientes a la misma y mostrar el resultado en consola
	Conjunto de caracteres:
		- constantes desde CONJURO_1 hasta CONJURO_8
	Conjuro a completar:
		- "Win-GAR-di-um %s-i-O-sa"
	Conjuro correcto:
		- "Win-GAR-di-um lev-i-O-sa"
	ej:
		si el usuario ingresa la opcion 3 el conjuro deberia quedar como "Win-GAR-di-um di-i-O-sa" 
	extra: informar si la opcion fue correcta o no
	
*/

//NO MODIFICAR
#define CONJURO_1 "Win"
#define CONJURO_2 "GAR"
#define CONJURO_3 "di"
#define CONJURO_4 "um"

#define CONJURO_5 "lev"
#define CONJURO_6 "i"
#define CONJURO_7 "O"
#define CONJURO_8 "sa"
//NO MODIFICAR

//OPCIONAL para usar con el switch
#define OPC_1  1
#define OPC_2  2
#define OPC_3  3
#define OPC_4  4
#define OPC_5  5
#define OPC_6  6
#define OPC_7  7
#define OPC_8  8
//OPCIONAL

int main(){

	int opcionMenu = 0;

	printf("\nIngrese una opcion para completar el conjuro correctamente\n");
	printf("\t\nWin-GAR-di-um [__]-i-O-sa\n");
	printf("\n\t [1] - %s", CONJURO_1);
	printf("\n\t [2] - %s", CONJURO_2);
	printf("\n\t [3] - %s", CONJURO_3);
	printf("\n\t [4] - %s", CONJURO_4);
	printf("\n\t [5] - %s", CONJURO_5);
	printf("\n\t [6] - %s", CONJURO_6);
	printf("\n\t [7] - %s", CONJURO_7);
	printf("\n\t [8] - %s", CONJURO_8);
	printf("\nOpcion: ");
	scanf("%i", &opcionMenu);

	switch(opcionMenu){
		case OPC_1:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_1);
			break;
		case OPC_2:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_2);
			break;
		case OPC_3:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_3);
			break;
		case OPC_4:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_4);
			break;
		case OPC_5:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_5);
			break;
		case OPC_6:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_6);
			break;
		case OPC_7:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_7);
			break;
		case OPC_8:
			printf("\nConjuro ingresado: Win-GAR-di-um %s-i-O-sa\n", CONJURO_8);
			break;
	}

	if (opcionMenu==OPC_5)
	{
		printf("\nEl conjuro ingresado es el correcto\n");
	}else{
		printf("\nEl conjuro ingresado es incorrecto\n");
	}

	return 0;
}