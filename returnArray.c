#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct array {
        int* items;
} ARRAY;

ARRAY createArrayZeros( int tam) {
        ARRAY aNewArray = { (int*)malloc(sizeof(int) * tam  )   };
        for (int i = 0; i< tam; i++){
                aNewArray.items[i] = 0;
        };
        return aNewArray;
}

int main () {
        ARRAY myArray = { malloc( sizeof(int) * 10 )};

        ARRAY  zeros  =  createArrayZeros( 6 );
        for (int i = 0; i< 6;  i++) {
                printf("%d ", zeros.items[i]);
        }
        printf("\n");

        
        return 0;
}