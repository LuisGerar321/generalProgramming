#include <stdio.h>
#include <stdlib.h>
#include "./aFolder/myLibrary.h"



int main (){
        char* cellPhone =  (char*)malloc(sizeof(char)*10);

        repit:
        printf("Enter a number phone:\n\t");
        scanf("%s", cellPhone);
        if(!isAPhoneNumber(cellPhone) ) goto repit;

        printf("Program continue...\n");
        return 0;
}