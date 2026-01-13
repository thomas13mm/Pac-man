#ifndef GHOST_H
#define GHOST_H
#include<string>

using namespace std;

class ghost{
public:
    ghost(int posX_, int posY_, string color_, unsigned short int* algoritmo_);
    ~ghost();
    int getposX();
    int getposY();
    string getcolor();
    unsigned short int* getAlgoritmo();
    void up();
    void down();
    void left();
    void rigth();

private:
    int posX;
    int posY;
    string color;
    unsigned short int* algoritmo;
};

#endif // GHOST_H
