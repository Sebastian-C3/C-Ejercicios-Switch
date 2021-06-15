#include <stdio.h>
#include <stdbool.h>

int main()
{
	int opcionMenu = 0;
	int numeroBool = 0;
	bool dejarMensaje = false;
	char mensajeGuardado[141] = "sin mensajes";

	printf("\n Hola, soy el Bot atendndedor, ingrese una opcion indicando si es...\n\n");
	printf("\t [1] - un familiar\n");
	printf("\t [2] - una amistad\n");
	printf("\t [3] - del trabajo\n");
	printf("\t [4] - una publicidad\n");
	printf("\t Opcion:");
	scanf("%i", &opcionMenu);

	switch(opcionMenu){
		case 1:
			printf("\nDesea dejar algun mensaje? 0-No 1-Si: ");
			scanf("%i", &numeroBool);
			dejarMensaje = numeroBool;
			//printf("\nGracias por llamar");
			break;
		case 2:
			printf("\nDesea dejar algun mensaje? 0-No 1-Si: ");
			scanf("%i", &numeroBool);
			dejarMensaje = numeroBool;
			//printf("\nLlama mas tarde");
			break;
		case 3:
			printf("\nNumero equivocado\n");
			break;
		case 4:
			printf("\n>:(\n");
			break;
	}

	if (dejarMensaje)
	{
		printf("Escriba su mensaje, 140 caracteres max: ");
		scanf(" %[^\n]", &mensajeGuardado);
		switch(opcionMenu){
		case 1:
			printf("\nGracias por llamar\n");
			break;
		case 2:
			printf("\nLlama mas tarde\n");
			break;
		}	
	}

	if (opcionMenu == 1 || opcionMenu == 2)
	{
		switch(opcionMenu){
			case 1:
				printf("\n\nLlamo un familiar");
				break;
			case 2:
				printf("\n\nLlamo una amistad");	
				break;
		}
		printf("\nmensaje: %s\n", mensajeGuardado);
	}else{
		printf("\nLlamada perdida\n");
	}

		



	

	return 0;
}