#include <iostream>
#include "prg2.h"

int main( int argc, char  *argv[]){
    auto v = prg2::vetor_cria(4);

    prg2::vetor_altera(v,10,55);

    std::cout << "Tamanho vetor: " << v.tamanho << std:: endl;

    for (int j=0; j<v.tamanho; j++){
        std::cout << "v[" <<j<<"]" << std::endl;
    }



}