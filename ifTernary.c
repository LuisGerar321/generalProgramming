#include <stdio.h>
#include <stdbool.h>

bool isCapital(char character){
        //*If classic*//
        // if ( character  >= 65 && character <=  90) {
        //         return true;
        //         sentencia2;
        //         sentencia3;
        //         sentencia4;
        // }
        // return false;

        //IF ternary
        // return  character >= 65 && character <= 90 ?  true : false; 

        //* If conditional*//
        return character >= 65 && character <= 90; 
}

enum finiteStateMachine {
        attack,
        defence,
        passive,
};


typedef struct wizzard {
        int vida;
        int mana;
        int state;
} WIZZARD;

int main () {

        enum finiteStateMachine myFinite; 

        int choise  = 0;
        printf("Enter a number desition!\n");
        scanf("%d", &choise);

        // if (choise == 1) {
        //         printf("You select 1");
        // } else if ( choise == 2 ) {
        //         printf("You select 2");
        // } else if ( choise == 3 ) { 
        //         printf("You select 3");
        // } else if ( choise == 4 ) {
        //         printf("You select 4");
        // } else {
        //         printf("You didnt select a good number!\n");
        // };

        switch (choise) {
                case 1:
                        printf("You select 1\n");
                        break;
                case 2:
                        printf("You select 2\n");
                        break;
                case 3:
                        printf("You select 3\n");
                        break;
                case 4:
                        printf("You select 4\n");
                        break;
                default:
                        printf("You didnt select a good number!\n");
                        break;
        };
        
        WIZZARD gandalf =  {100, 100, myFinite.passive};
        
        switch ( gandalf.state) {
                case attack:
                        printf("execute a function in attack mood\n");
                        break;
                case passive:
                        printf("execute a function in passive mood\n");
                        break; 
                case defence:
                        printf("execute a function in defence mood\n");
                        break; 
                default:
                        break;
        };


        printf("%d\n", isCapital('L') );
        
        return 0;
}