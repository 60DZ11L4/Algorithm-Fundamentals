#include <stdio.h>
#include <stdlib.h>

//Global Variables;
//Create a variable: dataType nameVariable = anyData;
//dataTypes in C/C++/C#/PHP

int unEntero = 3;
float unDecimal = 3.141592;
char* name = "EdoardoAlonso";
char unCaracter = 'M';


int main(){
    printf("Hello Data B!, welcome: %s\n", name);
    printf("El valor de pi es: %f\n", unDecimal);
    printf("La cantidad de tortas actual es: %i\n", unEntero);
    printf("La primer letra de Mamuts es: %c\n", unCaracter);
    return 0;
}