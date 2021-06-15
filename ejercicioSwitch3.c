#include <stdio.h>
#include <stdbool.h>

const int TIEMPO_ESTIMADO_ENTREGA = 90;
const int CALIF_0_ESTRELLA = 0;
const int CALIF_1_ESTRELLA = 1;
const int CALIF_2_ESTRELLA = 2;
const int CALIF_3_ESTRELLA = 3;

int main()
{
	int opcionMenuEntrega = 0;
	int opcionEstadoEntrega = 0;
	int tiempoEntrega = 0;

	printf("\nMenu de calificacion\n");
	printf("\nIndique si llego el paquete");
	printf("\n[1] - Llego\n[2] - No llego\n");
	scanf("%i", &opcionMenuEntrega);

	switch(opcionMenuEntrega){
		case 1:
			printf("\nIndique como llego el paquete\n");
			printf("\n[1] - En buen estado\n[2] - En mal estado\n");
			scanf("%i", &opcionEstadoEntrega);
		
			printf("\nIndique cuanto timepo tardo en llegar el paquete: \n");
			scanf("%i", &tiempoEntrega);
		
			if(opcionMenuEntrega == 1 && opcionEstadoEntrega == 1 && tiempoEntrega <= TIEMPO_ESTIMADO_ENTREGA)
			{
				opcionMenuEntrega = CALIF_3_ESTRELLA;
			}else if (opcionMenuEntrega == 1 && opcionEstadoEntrega == 2 && tiempoEntrega <= TIEMPO_ESTIMADO_ENTREGA )
			{
				opcionMenuEntrega = CALIF_2_ESTRELLA;
			}else if (tiempoEntrega > TIEMPO_ESTIMADO_ENTREGA)
			{
				opcionMenuEntrega = CALIF_1_ESTRELLA;
			}
		
			switch(opcionMenuEntrega){
				case 3:
					printf("\nEl paquete llego a tiempo y en buen estado\nEstrellas %i", CALIF_3_ESTRELLA);
					break;
				case 2:
					printf("\nEl paquete llego a tiempo pero en mal estado\nEstrellas %i", CALIF_2_ESTRELLA);
					break;
				case 1:	
					printf("\nEl paquete llego tarde\nEstrellas %i", CALIF_1_ESTRELLA);
					break;
			}
			
			break;
		case 2:
			printf("\nEl paquete nunca llego \nEstrellas %i", CALIF_0_ESTRELLA);
			break;
	}

	return 0;
}