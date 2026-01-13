#include "ghost.h"

ghost::ghost(int posX_, int posY_, string color_, unsigned short *algoritmo_):posX(posX_), posY(posY_), color(color_),algoritmo(algoritmo_){}

ghost::~ghost(){}

void ghost::up(){
    posY--;
}

void ghost::down(){
    posY++;
}

void ghost::left(){
    posX--;
}

void ghost::rigth(){
    posX++;
}

int ghost::getAlgoritmo(){
    return *algoritmo;
}

int ghost::getposX(){
    return posX;
}

int ghost::getposY(){
    return posY;
}

string ghost::getcolor(){
    return color;
}
