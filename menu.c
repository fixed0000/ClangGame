#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>
#include "menu.h"

int menu();
int start();
int launch();
int language();

int main() {
    language();
    start();
    launch();
    return 0;
}

int start() {
    int choice = 0;
    printf("Welcome\n1.New game\n2.Load game\n3.Description\n4.Settings\n5.Exit\n");
    scanf("%d", choice);
    return choice;
}

int launch(){
    printf("Place\n");
    int a = 1;
    while (a == 1) {
    if (start() == 1) {
        charCreation();
    }
    else if (start() == 2) {
        printf("Place for loading\n");
    }
    else if (start() == 3) {
        printf("Place for description\n");
    }
    else if (start() == 4) {
        printf("Place for settings\n");
    }
    else if (start() == 5) {
        a = 0;
    }
    else {
        printf("Error\n");
        start();
    }
    }
    return 0;
}

int language(){
    int choice = -1;
    puts("Choose language. [0 - English, 1 - Russian, 2 - Japanese]\n");
    scanf("%d", &choice);

    //if (choice = 0;) 
}