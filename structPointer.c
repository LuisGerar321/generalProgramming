#include <stdio.h>
#include <stdlib.h>


struct node {
        int dato1;
        float dato2;
};

struct mago {
        //cualidades (atributs)//
        int life;
        int mana;
        //Poderes (methods)
        //Debe decir hola//
};



int main(){
        struct node myNode = { 3, 3.1416 };
        printf("myNode: dato1= %d, dato2: %f", myNode.dato1, myNode.dato2);
        struct mago Gandalf = { 200, 500};
        
        struct mago* Sarman = (struct mago*)malloc(sizeof(struct mago));
        (*Sarman).life = 1000;
        Sarman->mana = 2000;

        return 0;
}