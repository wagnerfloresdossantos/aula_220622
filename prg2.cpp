#include "prg2.h"

namespace prg2 {

//implementação 24/06

//operaçoes do vetor
    Vetor vetor_cria(unsigned int capacidade) {
        Vetor v = {nullptr, capacidade};
        if (capacidade > 0) {
            v.area = new int[capacidade];
        }
        return v;

    }

//Obtem o valor de uma posição do vetor
    int vetor_obtem(Vetor &v, unsigned int posicao) {
        //se posição >= capacidade, expande o vetor
        if (posicao >= v.tamanho) {
            //expande vetor!
            int novo_tamanho = posicao + 1;
            void vetor_expande();

            return v.area[posicao];

        }
    }

    void vetor_expande(Vetor &v, unsigned int novo_tamanho) {

            int *nova = new int[novo_tamanho];

            //copia os dados para nova area de memoria
            for (int j = 0; j < v.tamanho; j++) {
                nova[j] = v.area[j];
            }
            //zera as posições remanescentes da nova area
            for (int j = v.tamanho; j < novo_tamanho; j++) {
                nova[j] = 0;
            }
            //destruir a antiga area de memoria
            delete[] v.area;

            //atualiza a aarea de memoria
            v.area = nova;
            v.tamanho = novo_tamanho;
    }

//Modifica o valor de uma posição do vetor
   void vetor_altera(Vetor &v, unsigned int posicao, int valor) {
            if (posicao >= v.tamanho) {
                void vetor_expande(Vetor &v, unsigned int novo_tamanho);
            }

   }

   void vetor_destroi(Vetor &v) {
        if (v.tamanho > 0) {
            delete[]v.area;
            v.tamanho = 0;
            v.area = nullptr;
        }
    }
}