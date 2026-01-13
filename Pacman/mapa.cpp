#include "mapa.h"

mapa::mapa() {}

mapa::~mapa(){
    for(unsigned int i=0; i<alto; i++){
        delete[] ptrMatriz[i];
    }
    delete[] ptrMatriz;
    ptrMatriz=nullptr;
}

void mapa::CambiarTipoCelda(int x, int y){
    ptrMatriz[x][y]=0;
}

bool mapa::CargarMapa(string &filename){
    fstream archivo;
    string linea;
    unsigned int filas=0;
    unsigned int columnas=0;
    archivo.open(filename, in);
    if(archivo.is_open()){
        while(getline(archivo,linea)){
            filas++;
            if (filas == 1){
                columnas = linea.length();
            }
        }
        archivo.close();

        ptrMatriz = new int* [filas];
        archivo.open(filename, in);
        for(unsigned int i =0; i<filas; i++){
            getline(archivo, linea);
            ptrMatriz[i]=new int [columnas];
            for(unsigned int j=0; j<columnas;j++){
                if(linea[j]=='#'){//muro
                    ptrMatriz[i][j]=0;
                }
                else if(linea[j]=='.'){//comida
                    ptrMatriz[i][j]=1;
                }
                else if(linea[j]=='*'){//booster
                    ptrMatriz[i][j]=2;
                }
                else{//vacio
                    ptrMatriz[i][j]=3;
                }
        }
        archivo.close();
        ancho=columnas;
        alto=filas;
        return true;
    }
    return false;
}
