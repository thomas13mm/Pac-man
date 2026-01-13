#ifndef PACMAN_H
#define PACMAN_H
#include <iostream>

using namespace std;

class PacMan{
public:
    PacMan(int posX_, int posY_, bool EstadoLogico_, unsigned int vidas_);
    ~PacMan();
    int getPosX();
    int getPosY();
    bool getEstadoLogico();
    unsigned int getVidas();
    void setEstadoLogico(bool change);
    void setvidas(unsigned int x);
    void up();
    void down();
    void left();
    void right();

private:
    int posX=0;
    int posY=0;
    bool EstadoLogico=true;
    unsigned int vidas=3;
};

#endif // PACMAN_H
