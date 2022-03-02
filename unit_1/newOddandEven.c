#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
  
int main(int argc, char** argv){
	if(argc != 2){
		printf("Error program: Invalid input, no arguments, insert e.g: %s argv[1]\n", argv[0]);
		return 0;
	}
	
	bool isANumber = (argv[1][0] >= 48 && argv[1][0] <= 57);
	
	if (!isANumber){
		printf("Error program: Invalid input, insert a number\n");
		return 0;
	}
	else{
		int numberToTest = atoi(argv[1]);
		int result = numberToTest % 2;
		bool hasModule = (result > 0);

		if (hasModule){
			printf("Number %d is an odd\n", numberToTest);
		}
		else{
			printf("Number %d is an even\n", numberToTest);
		}
	return 0;
	}
}
