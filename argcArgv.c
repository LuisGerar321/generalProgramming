#include <stdio.h>
#include <stdlib.h>
//Caracteres
char  myChar = '1';
//Cadenas de texto
char myStringCad[255] = "100";
// char myStringCad[255] = {'1','0','0'};
char* myStr = "100";

char myListChar[3][255] = { "Luis", "Christian", "Angelo" };
// char** myList =  { "Luis", "Christian", "Angelo" };


// char* secondStr;

int main(int argc, char** argv){

        // secondStr = (char*)malloc(sizeof(char)*100 );

        myStr = "200";
        printf("char: %c, string: %s, argv: %s, argc: %d\n", myStringCad[0], myListChar[2], argv[1], argc );
        return 0;
}