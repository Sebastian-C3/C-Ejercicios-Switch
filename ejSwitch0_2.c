#include <stdio.h>

/*
	
	Crear una aplicacion que reconozca al menos 5 caracteres del 
	abecedario usando sus valores numericos en codigo ASCII
	Por ejemplo si ingreso el numero 114 el programa deberia detectar que 
	corresponde al caracter 'r' e imprimir un mensaje informando 
	el resultado
	En caso de que no se detecte ningun caracter entonces informar que el 
	ingreso no fue considerado
	
	variables:
		- valor numero del caracter deseado
	caracteres considerados:
		114   tiene que ser detectado con 'r'
		122   tiene que ser detectado con 'z'
		81    tiene que ser detectado con 'Q'
		68    tiene que ser detectado con 'D'
		70    tiene que ser detectado con 'F'
*/

int main(){

	int numeroCaracter = 0;

	printf("Ingrese el valor numero del caracter deseado\n");
	scanf("%i", &numeroCaracter);

	switch(numeroCaracter){
		case 'r':
			printf("Ingresaste el valor numero del caracter 'r'\n");
			break;
		case 'z':
			printf("Ingresaste el valor numero del caracter 'z'\n");
			break;
		case 'Q':
			printf("Ingresaste el valor numero del caracter 'Q'\n");
			break;
		case 'D':
			printf("Ingresaste el valor numero del caracter 'D'\n");
			break;
		case 'F':
			printf("Ingresaste el valor numero del caracter 'F'\n");
			break;
		default:
			printf("El valor numero no fue considerado\n");

	}


	return 0;
}