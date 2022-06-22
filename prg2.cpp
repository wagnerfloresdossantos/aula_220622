#include "prg2.h"

using namespace prg2;

Vetor vetor_cria(){

    Vetor v;

    v.tamanho = 0;
    v.area= nullptr;

    return v;

}

int vetor_obtem(const vetor & v, unsigned int posicao){
    if(v.tamanho > posicao){
        return v.area[posicao];
    } else {
        
    }

}