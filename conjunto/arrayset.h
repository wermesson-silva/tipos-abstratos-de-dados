#ifndef SET_H
#define SET_H

#include <iostream>

class ArraySet {

private:
    int *elementos;
    int quantidade;
    int capacidade;
    int fim;

    void redimensionar();

public:
    ArraySet();
    ~ArraySet();

    bool add(int elem);
    bool remove(int elem);
    bool contains(int elem) const;
    ArraySet unionSet(const ArraySet& A, const ArraySet& B) const;
    ArraySet intersection(const ArraySet& A, const ArraySet& B) const;
    void print() const;
};

#endif