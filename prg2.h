//
// Created by aluno on 22/06/22.
//

#ifndef AULA_220622_PRG2_H
#define AULA_220622_PRG2_H

namespace prg2{

    //o tipo vetor dinâmico
struct Vetor {
    //area de armazendamento (o etor de fato)
    int * area;

    // a capacidade atual do vetor
    using int tamanho;

};

//operaçoes do vetor
Vetor vetor_cria();

//destroi um vetor
void vetor_destroi(vetor & v);

int vetor_obtem(const vetor & v, unsigned int posicao);

}

#endif //AULA_220622_PRG2_H
