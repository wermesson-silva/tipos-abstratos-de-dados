#ifndef ARRAYSEQUENCE_H
#define ARRAYSEQUENCE_H

#include <iostream>

class ArraySequence {

private:
    int *elementos;
    int quantidade;
    int capacidade;
    void redimensionar();

public:
    ArraySequence(int capacidadeInicial = 10);
    ~ArraySequence();

    void pushBack(int value);
    void pushFront(int value);
    bool insert(int pos, int value);
    bool remove(int pos);
    int find(int value) const;
    int size() const;
    void print() const;
};

#endif