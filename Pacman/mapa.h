#ifndef MAPA_H
#define MAPA_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class mapa{
public:
    mapa();
    ~mapa();
    bool CargarMapa(string& filename);
    bool ValidarPos(int x, int y);
    void CambiarTipoCelda(int x, int y);
    unsigned int getAncho();
    unsigned int getAlto();
    unsigned int** ptrMatriz();

private:
    unsigned int** ptrMatriz;
    unsigned int ancho;
    unsigned int alto;
};

#endif // MAPA_H
