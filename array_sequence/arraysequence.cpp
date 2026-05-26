#include "arraysequence.h"

ArraySequence::ArraySequence():quantidade(0),capacidade(10) {
    elementos = new int[capacidade];
}

ArraySequence::~ArraySequence() {
    delete[] elementos;
}

void ArraySequence::redimensionar() {

    capacidade += 1;

    int *novo = new int[capacidade];

    for (int i = 0; i < quantidade; i++) {
        novo[i] = elementos[i];
    }

    delete[] elementos;
    elementos = novo;
}

void ArraySequence::pushBack(int value) {

    if (quantidade == capacidade) {
        redimensionar();
    }

    elementos[quantidade] = value;
    quantidade++;
}

void ArraySequence::pushFront(int value) {

    if (quantidade == capacidade) {
        redimensionar();
    }

    for (int i = quantidade; i > 0; i--) {
        elementos[i] = elementos[i - 1];
    }

    elementos[0] = value;
    quantidade++;
}

bool ArraySequence::insert(int pos, int value) {

    int indice = pos - 1;

    if (indice < 0 || indice > quantidade) {
        return false;
    }

    if (quantidade == capacidade) {
        redimensionar();
    }

    for (int i = quantidade; i > indice; i--) {
        elementos[i] = elementos[i - 1];
    }

    elementos[indice] = value;
    quantidade++;

    return true;
}

bool ArraySequence::remove(int pos) {

    int indice = pos - 1;

    if (indice < 0 || indice >= quantidade) {
        return false;
    }

    for (int i = indice; i < quantidade - 1; i++) {
        elementos[i] = elementos[i + 1];
    }

    quantidade--;
    return true;
}

int ArraySequence::find(int value) const {

    for (int i = 0; i < quantidade; i++) {

        if (elementos[i] == value) {
            return i + 1;
        }
    }

    return -1;
}

int ArraySequence::size() const {
    return quantidade;
}

void ArraySequence::print() const {

    std::cout << "[ ";

    for (int i = 0; i < quantidade; i++) {
        std::cout << elementos[i] << " ";
    }

    std::cout << "]" << std::endl;
}