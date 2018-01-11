#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <conio.h>

/* Signal Handler for SIGINT */
void sigint_handler(int sig_num) {
    printf("\n User provided signal handler for Ctrl+C \n");
    exit(0);
}

int main(void) {
    signal(SIGINT, sigint_handler);

    int i, k, k2, c = 0;
    int szam = 0;

    while(1) {
        k = getch();
        if (k = 224){
            k2 = getch();
            if(k2 == 72){
                /*printf(" Felso kurzor!");*/
            }
            if(k2 == 75 && szam > 0){
                /*printf(" Bal kurzor!");*/
                szam--;
                system("cls");
                for(i = 0; i < szam; i++){
                    printf("_");
                }
                printf("@\n");

            }
            if(k2 == 77 && szam < 19){
                /*printf(" Jobb kurzor!");*/
                szam++;
                system("cls");
                for(i = 0; i < szam; i++){
                    printf("_");
                }

                printf("@\n");

            }
            if(k2 == 80){
                /*printf(" Also kurzor!");*/

            }
        }
    }




    return 0;
}
