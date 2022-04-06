/*
 ============================================================================
 Name        : Clase01.c
 Author      : Marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	//let nombreVariable;
	//var nombreVariableVar;

	//let numeroVariable = ;//depende de lo que yo guarde para que esto sea de algun tipo


	//c es un lenguaje fuertemente tipado

	int numerosEnteros=10;
	float numerosDecimales= 10.2;
	char unCaracter = 'a';
	int numeroPedidoUsuario;
	//javascript
	//console.log()
	//alert()
	//document.getElementById()
	//document.write()

	//En c imprimir en la consola
	printf("%c %d  \n",37,numerosEnteros);
	printf("%% %f    \n", numerosDecimales);
	printf("%c %c", unCaracter, 97);


	printf("\n Practica pedido usuario");
	printf("\n %d",numeroPedidoUsuario);

	printf("\n Ingrese un numero \n");
	scanf("%d",&numeroPedidoUsuario); //che en la biblioteca tal se encuentra la caja

	printf("\n Dato pedido");
	printf("\n %d",numeroPedidoUsuario);


	numeroPedidoUsuario +1

	return EXIT_SUCCESS;
}
