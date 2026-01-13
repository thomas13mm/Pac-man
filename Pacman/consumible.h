#ifndef CONSUMIBLE_H
#define CONSUMIBLE_H

class Consumible{
public:
    Consumible(unsigned int valor_, int posX_, int posY_, bool EsBooster_);
    ~Consumible();

private:
    unsigned int valor=50;
    int posX;
    int posY;
    bool EsBooster;
};

#endif // CONSUMIBLE_H
