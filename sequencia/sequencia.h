#ifndef SEQUENCIA_H
#define SEQUENCIA_H

class Sequencia {

private:
    int *dados;
    int quantidade;
    int capacidade;

    void redimensionar();

public:
     Sequencia();
    ~Sequencia();

    bool insert(int pos, int elem);
    bool remove(int pos);
    int get(int pos) const;
    void print() const;
};

#endif