/*
 ============================================================================
 Name        : Clase03.c
 Author      : Marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANT_PERSONAS 10
#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout,NULL);

	int numeroIngresado;
	//int acumulador;
	int contador;
	int banderaPrimerIngreso;
	int numeroMayor;
	int numeroMenor;

	//acumulador=0;
	contador=0;
	banderaPrimerIngreso=1;
	int contadorFor;


	for(contadorFor = 0; contadorFor<CANT_PERSONAS;  contadorFor++)
	{
		printf("\nFavor de ingresar un número");
		scanf("%d", &numeroIngresado);

		if(contadorFor == 0)
		{
			numeroMayor=numeroIngresado;
			numeroMenor=numeroIngresado;
		}
		else
		{
			if (numeroMayor<numeroIngresado)
			{
				numeroMayor=numeroIngresado;
				printf("\nEl número máximo actual es %d", numeroMayor);
			}

			if (numeroMenor>numeroIngresado)
			{
				numeroMenor=numeroIngresado;
				banderaPrimerIngreso=0;
				printf("\nEl número mínimo actual es %d", numeroMenor);
			}
		}


	}









	while (contador < 10)
	{
		contador++;
		printf("\nFavor de ingresar un número");
		scanf("%d", &numeroIngresado);




		///Version curso de ingreso que es valida
		if(banderaPrimerIngreso==TRUE)
		{
			numeroMayor=numeroIngresado;
			numeroMenor=numeroIngresado;
		}
		else
		{
			if (numeroMayor<numeroIngresado)
			{
				numeroMayor=numeroIngresado;
				printf("\nEl número máximo actual es %d", numeroMayor);
			}

			if (numeroMenor>numeroIngresado)
			{
				numeroMenor=numeroIngresado;
				banderaPrimerIngreso=FALSE;
				printf("\nEl número mínimo actual es %d", numeroMenor);
			}
		}


	///Mostro Lautaro
		if (banderaPrimerIngreso==1 || numeroMayor<numeroIngresado)
		{
			numeroMayor=numeroIngresado;

			printf("\nEl número máximo actual es %d", numeroMayor);
		}

		if (banderaPrimerIngreso==1 || numeroMenor>numeroIngresado)
		{
			numeroMenor=numeroIngresado;
			banderaPrimerIngreso=0;
			printf("\nEl número mínimo actual es %d", numeroMenor);
		}
	}//fin while

	return EXIT_SUCCESS;
}
