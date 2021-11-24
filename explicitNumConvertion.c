#include <stdlib.h>
#include <stdio.h>


float addTwoNumbers(float param1, float param2){
        return param1 + param2;
}


int main(int argc, char** argv){
        printf("%s %s\n", argv[1], argv[2]);
        float num1 =  atof(argv[1]);
        float num2 = atof(argv[2]);
        float result = addTwoNumbers(num1, num2);
        printf("result = %f\n", result);
        //Convertir un dato numero a string();

        return 0;
}