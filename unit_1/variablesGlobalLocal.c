#include <stdio.h>
#include <stdlib.h>

///Global Variables
char* Date = "02-02-22T10:25:00z";

///Code Block & Local Variable
int main(){
    char* Date = "02-03-22T10:25:00z";
    int Hours = 11;
    Hours = Hours + 11;
    printf("The current time is: %d\n", Hours);
    return 0;
}