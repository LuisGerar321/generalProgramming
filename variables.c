#include <stdio.h>
#include <stdbool.h>


//Variables Convencionales!!
typedef struct person
{
        int age;
        char* name;
}PERSON;


int myInt = 3;
float myFloat = 3.1416;
char myChar = '4';
double myDouble = 3.14161718102222;
bool myBool = true;
PERSON myPerson = {24, "Luis"};

//Variables especiales!
int* myPtr = &myInt;
int** myPtrDoble = &myPtr;


int main(int argc, char** argv){
        //Caractares especiales de pointers and address;
        printf("myInt = %d,  address myInt: %p,  address myPtr: %p, valueMyPtr: %d\n", myInt, myPtr, &myPtr, *myPtr);
        printf("PointerDoble: myPtrDoble = %p, myPtrDobleAddress: %p\n", myPtrDoble, &myPtrDoble);
        //Desde Pointer doble, imprimir el valor de myInt y su direcion!:
        
        return 0;
}