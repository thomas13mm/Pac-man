#include "pacman.h"

PacMan::PacMan(int posX_, int posY_, bool EstadoLogico_, unsigned int vidas_):posX(posX_), posY(posY_), EstadoLogico(EstadoLogico_), vidas(vidas_){}

PacMan::~PacMan(){}

bool PacMan::getEstadoLogico(){
    return EstadoLogico;
}

int PacMan::getPosX(){
    return posX;
}

int PacMan::getPosY(){
    return posY;
}

unsigned int PacMan::getVidas(){
    return vidas;
}

void PacMan::setEstadoLogico(bool change){
    EstadoLogico=change;
}

void PacMan::setvidas(unsigned int x){
    vidas=x;
}

void PacMan::up(){
    posY--;
}

void PacMan::down(){
    posY++;
}

void PacMan::left(){
    posX--;
}

void PacMan::right(){
    posX++;
}
