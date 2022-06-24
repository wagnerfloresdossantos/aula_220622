//
// Created by aluno on 22/06/22.
//

#ifndef AULA_220622_PRG2_H
#define AULA_220622_PRG2_H

namespace prg2{

    //o tipo vetor dinâmico
struct Vetor {
    //area de armazendamento (o vetor de fato)
    int * area;

    // a capacidade atual do vetor
    unsigned int tamanho;


};

//operaçoes do vetor
Vetor vetor_cria(unsigned int capacidade);

//Obtem o valor de uma posição do vetor
int vetor_obtem(Vetor & v, unsigned int posicao);

//Modifica o valor de uma posição do vetor
void vetor_altera(Vetor & v, unsigned int posicao, int valor);

//destroi um vetor
void vetor_destroi(Vetor & v);

}

#endif //AULA_220622_PRG2_H
