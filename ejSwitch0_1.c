#include <stdio.h>

/*
	Menu de MacRonals
	Mostrar un menu por consola donde figure
		- Cafe con un Tostado Criollo a
		- Cuarto de libra con queso b
		- Doble cuarto de libra con queso c
		- Cajita feliz d 
		- Salir z
	Implementar una forma de detectar la opcion del cliente
	Una vez que el  usuario elija la opcion entonces imprimir un mensaje
	informando la confirmacion de la misma
	variables:
		- opcion recibida [int, char]
	
	constantes:
		- las opciones
*/

int main(){

	char opcionRecibida = '-';

	printf("\tMenu de MacRonals\n");
	printf("\t- Cafe con un Tostado Criollo     [a]\n");
	printf("\t- Cuarto de libra con queso       [b]\n");
	printf("\t- Doble cuarto de libra con queso [c]\n");
	printf("\t- Cajita feliz                    [d]\n");
	printf("\t- Salir                           [z]\n");

	scanf("%c", &opcionRecibida);

	switch(opcionRecibida){
		case 'a':
			printf("Pediste un cafe contos Tostado criollo\n");
			break;
		case 'b':
			printf("Pediste un cuarto de libra con queso\n");
			// instrucciones
			break;
		case 'c':
			printf("Pediste un doble cuarto de libra con queso\n");
			break;
		case 'd':
			printf("Pediste una cajita feliz\n");
			break;
		case 'z':
			printf("Vuelva pronto!\n");
			break;
		default:
			printf("Ingreso invalido\n");
	}


	return 0;
}