#include <stdio.h>


int main(int argc, char** argv) {
        
        int number1 = argv[1][0] - '0'; // 50 - 48 = 2;
        int number2 = argv[2][0] - '0'; // 51 - 48 = 3;
        printf("add = %d\n",  number1 + number2);

        //Sumar dos numero de dos cifras que vienen de argv//
        // converToNumber("21") ---> retorna valor entero e.j. 21.
        
        return 0;
}