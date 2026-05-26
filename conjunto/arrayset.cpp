#include "arrayset.h"

ArraySet::ArraySet(): quantidade(0), capacidade(10), fim(0) {
    elementos = new int[capacidade];
}

ArraySet::~ArraySet() {
    delete[] elementos;
}

void ArraySet::redimensionar() {

    capacidade += 1;
    int *novo = new int[capacidade];

    for (int i = 0; i < quantidade; i++) {
        novo[i] = elementos[i];
    }

    delete[] elementos;

    elementos = novo;
}

bool ArraySet::contains(int elem) const {

    for (int i = 0; i < quantidade; i++) {

        if (elementos[i] == elem) {
            return true;
        }
    }

    return false;
}

bool ArraySet::add(int elem) {

    if (contains(elem)) {
        return false;
    }

    if (quantidade == capacidade) {
        redimensionar();
    }

    elementos[fim] = elem;

    quantidade++;

    fim++;

    return true;
}

bool ArraySet::remove(int elem) {

    int indice = -1;

    for (int i = 0; i < quantidade; i++) {

        if (elementos[i] == elem) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        return false;
    }

    elementos[indice] = elementos[quantidade - 1];

    quantidade--;

    fim--;

    return true;
}

ArraySet ArraySet::unionSet(const ArraySet& A, const ArraySet& B) const {

    ArraySet resultado;

    for (int i = 0; i < A.quantidade; i++) {
        resultado.add(A.elementos[i]);
    }

    for (int i = 0; i < B.quantidade; i++) {
        resultado.add(B.elementos[i]);
    }

    return resultado;
}

ArraySet ArraySet::intersection(const ArraySet& A, const ArraySet& B) const {

    ArraySet resultado;

    for (int i = 0; i < A.quantidade; i++) {

        if (B.contains(A.elementos[i])) {
            resultado.add(A.elementos[i]);
        }
    }

    return resultado;
}

void ArraySet::print() const {

    std::cout << "{ ";

    for (int i = 0; i < quantidade; i++) {
        std::cout << elementos[i] << " ";
    }

    std::cout << "}" << std::endl;
}