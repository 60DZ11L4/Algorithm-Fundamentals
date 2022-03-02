#include <stdio.h>
#include "../libraries/utils.h"
#include <stdlib.h>
#include <stdbool.h>



int main(int argc, char** argv){

	/// Loop contador (opearcion individual paso - paso)
	
	for(int iterador = 1; iterador <= 3; iterador = iterador + 1){
		printf("Iterador:%d\n",iterador);
	        sleep(1000);
	}

	/// Loop operacion suma (rango)
	
	int rango = 1;
	int count = 0;
	while (rango <= 100){
    		count = count + rango;
    		rango++;
	}
	printf("La suma es: %d\n", count);
	sleep(2000);

	/// Loops infinitos (carga - interaccion sistema)

	while (true){
		system("clear");
		printf("Program running...\n");
		sleep(1000);
	};
	for (;;){
		break;
	}

	/// Loop tipo (do - action)
	bool condition;
	int i = 1;
	int cuenta = 0;
	
	do{
		cuenta += i;
		printf("La cuenta es: %d\n", cuenta);
		condition = (i < 3);
		i++;
	}while (condition);
	
	return 0;
}
