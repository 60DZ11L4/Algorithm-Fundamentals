#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
  
int main(int argc, char *argv[]){
	printf("Program executed: %s\nNumber of input elements: %d\n", argv[0], (argc-1));
	if (argc <= 1)
		printf("No command line arguments found.\n");
	else {
		int number;
		number = atol(argv[1]);
		bool notReminder = ( number % 2 == 0);
		
		if(notReminder)
			printf("[%d] is even\n", number);
		else
			printf("[%d] is odd\n", number);
	return 0;
	}
}