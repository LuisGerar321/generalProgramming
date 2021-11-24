#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


int a = 5;
float b = 3.1416;
char c =  'c';

// {'9','9','9','2','6','5','4','1','7','0'}

bool isAPhoneNumber(char* number) {
        if( strlen(number) !=10 ){
                return false;
        };

        for (int i = 0; i<10; i++){
                if( (int)number[i] >= 48 && (int)number[i]<=57 ){
                        //pass
                }else{
                        return false;
                }
        }
        return true;
}

int main(){
        printf("char Ansii 'c': %d\n", (int)c); 
        printf("float  b: %d\n", (int)b);
        float z =  b/a;
        printf("z = %f\n", z);
        // printf("isAPhoneNumber = %d\n", isAPhoneNumber("9992654170"));
        char* cellPhone =  (char*)malloc(sizeof(char)*10);
        do{
                printf("Enter a number phone:\n\t");
                scanf("%s", cellPhone);
        }while(!isAPhoneNumber(cellPhone));

        
        
        return 0;
}