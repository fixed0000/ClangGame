#ifndef menu_h
#define menu_h
#include "newgame.c"
#include "settings.c"
#include "character.c"

int charCreation();
int getSex();
int getAge();
int getHair();
int getHeight();
int getUpperClothes();
int getLowerClothes();
int addToData(int *i, int *x, int *characterdata);
int saveData();

#endif