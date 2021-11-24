#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 255

char str[SIZE] = "Luis";
char strCpy[SIZE] = {'H', 'o', 'l', 'a'};
char* strPuro =  "Christian";

typedef int integer;

int lenString(char* str) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++, count++){};
        return count;
}

char* catStr(char* str1, char* str2) {
        char* result;
        int lenStr1 = lenString(str1);
        int lenStr2 = lenString(str2);

        result = malloc(sizeof(char)*( lenStr1 + lenStr2));
        for(int i = 0; i< lenStr1 + lenStr2; i++) {
                if(i<lenStr1){
                        result[i] = str1[i];
                }else{
                        result[i] = str2[ i- lenStr2 - 2];
                }
        }
        return result;
}

void strModification(char str[], char* newData){
        for(int i = 0; i< lenString(newData);  i++ ){
                str[i] = newData[i];        
        }  
}

bool compareString(char* string1, char* string2){
        if( lenString(string1) != lenString(string2) ) {
                return false;
        } else {
                for (int i = 0; i<lenString(string2); i++){
                        if( string2[i] != string1[i] ){
                                return false;
                        }
                }
                return true;
        }
}

int main(){
        strPuro = "Gerardo";
        // strModification(str, "Carlos");//Algoritmo
        //string.h
        printf("%ld\n", strlen("Dia"));
        // strcpy(str, "Carlos");
        strModification(str, "Carlos");//Algoritmo
        printf("%s\n", str); 
        //Concatenar una cadena: unir dos strings, A + B =  AB;
        // char* catAB =  str + strPuro; //No se puede en C facilmente
        char* catAB = catStr(str, strCpy); //Funcion que no existe --> LuisHola //HacerEnC
        printf("catAB: %s\n", catAB);
        // strcat(str, strCpy);
        // printf("%s\n", str);
        
        printf("comaration of str1, str2 %d\n", compareString("Luis", "Luis")  );

        // //Comparar cadenas: compara cadena A con cadena B;
        // char christianYears[SIZE] = "21";
        // char luisYears[SIZE] = "21";
        // // if ( christianYears == luisYears ){
        // //         printf("They are the same years");
        // // }
        // if ( !strcmp(christianYears, luisYears) ){
        //         printf("They are the same years\n");
        // }

        // for ( int i = 0; luisYears[i] != '\0'; i++){
        //         printf("%c\n", luisYears[i]);
        // };
        
        return 0;
}