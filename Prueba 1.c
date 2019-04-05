#include <stdio.h>

int main()
{
	int n;
	char A, B, op1, op2, op3;
	//Siendo A entrada, B salida.
	char E, L, D, I;
	//Siendo E estudio, L coger o dejar libro, D descanso, I información.
	
	printf("¿Entras o sales?\n");
	switch(op1)
	{
		case 'A':
			printf("Bienvenidx, ¿que vienes a hacer?\n");
			switch(op2)
			{
				case 'E':
					printf("Quedan %f plazas disponibles.\n", n);
					//Habría un for para contabilizar el número de plazas ocupadas.
					break;
				case 'L':
					printf("Mas adelante encontrara un ordenador para devolver, renovar o buscar libros.\n");
					break;
				case 'I':
					printf("Mas adelante encontrara un puesto de información.\n");
			break;
			}
			
		case 'B':
			printf("¿Que deja de hacer?\n");
			switch(op3)
			{
				case 'E':
					printf("Esperamos que haya aprovechado su dia\n");
					//Habría un for para contabilizar el número de plazas disponibles.
					break;
				case 'D':
					printf("Procura no tardar mas de 30 minutos, es posible que su sitio quede libre en caso contrario.\n");
					//Podríamos añadir un temporizador, es opcional.
					break;
				case 'L':
					printf("Esperamos haberle servido de ayuda.\n");
					break;
				case 'I':
					printf("Esperamos haberle servido de ayuda.\n");
					break;
			break;
			printf("Gracias por su visita, esperamos verle pronto\n");
			}
		
	}

	
}
