#include <stdio.h>
#include <string.h>


int main(int argc, char** argv){
    printf("Programa ejectuado: %s,number of inputs: %d", argv[0], (argc-1));
    printf("Bienvenido usuario: %s %s %s %s, conexion establecida\n", argv[1], argv[2], argv[3], argv[4]);
    return 0;
}