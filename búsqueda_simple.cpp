/*Copyright (c) Enrique Mesa. 2021*/

#include <iostream>
#include <cstdlib>
#include <cstdio>

int main(int argc, char *argv[]){
	int array[] = {12, 42, 60, 80, 50};
	int numero_a_buscar = 50;
	for(int i = 0; i < sizeof(array); i++){
		if(array[i] == numero_a_buscar){
			cout << "Elemento hallado en posición" << i << endl;
			break;
	}
	return 0;
} 
