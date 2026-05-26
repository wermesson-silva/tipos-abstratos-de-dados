#include "sequencia.h"
#include <iostream>

//Iniciando Sequência com quantidade inicial igual a zero e capacidade inicial igual a 10
Sequencia::Sequencia():quantidade(0), capacidade(10) {
    dados = new int[capacidade];
}

Sequencia::~Sequencia() {
    delete[] dados;
}

void Sequencia::redimensionar() {

    capacidade += 1;
    int *novo = new int[capacidade];

    for (int i = 0; i < quantidade; i++) {
        novo[i] = dados[i];
    }

    delete[] dados;

    dados = novo;
}

bool Sequencia::insert(int pos, int elem) {

    int indice = pos - 1;

    if (indice < 0 || indice > quantidade) {
        return false;
    }

    if (quantidade == capacidade) {
        redimensionar();
    }

    for (int i = quantidade; i > indice; i--) {
        dados[i] = dados[i - 1];
    }

    dados[indice] = elem;

    quantidade++;

    return true;
}

bool Sequencia::remove(int pos) {

    int indice = pos - 1;

    if (indice < 0 || indice >= quantidade) {
        return false;
    }

    for (int i = indice; i < quantidade - 1; i++) {
        dados[i] = dados[i + 1];
    }

    quantidade--;

    return true;
}

int Sequencia::get(int pos) const {

    int indice = pos - 1;

    if (indice < 0 || indice >= quantidade) {
        return -1;
    }

    return dados[indice];
}

void Sequencia::print() const {

    std::cout << "[ ";

    for (int i = 0; i < quantidade; i++) {
        std::cout << dados[i] << " ";
    }

    std::cout << "]" << std::endl;
}