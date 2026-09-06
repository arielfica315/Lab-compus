#include "funciones.h"

int elevar_cuadrado(int entrada){

	int salida;
	salida = entrada * entrada;
	return salida;

}

float area_circulo(int radio){

	return PI * elevar_cuadrado(radio);
}
char neg_or_pos(int number){

	if(number <0){

		return 'n';
	}
	else if(number >0){

		return 'p';
	}
	else{
		return 'z';
	}

}
