#include <stdio.h>
#include "../libraries/utils.h"

int main(int argc, char** argv){
    
    for(int iterador = 1; iterador <= 10; iterador = iterador + 1){
        printf("Iterador:%d\n",iterador);
        sleep(1000);
    }
    return 0;
}