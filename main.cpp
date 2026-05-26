#include <iostream>
#include "sequencia/sequencia.h"
#include "conjunto/arrayset.h"
#include "array_sequence/arraysequence.h"

int main() {

    std::cout << "===== TESTE TAD SEQUENCIA =====" << std::endl;

    //CRIANDO UMA SEQUENCIA COM CAPACIDADE INICIAL 10, ATRAVÉS DOS INICIALIZADORES DO CONSTRUTOR
    Sequencia s;

    //INSERINDO DADOS INFORMANDO CADA POSIÇÃO ATRAVÉS DO INSERT()
    s.insert(1, 10);
    s.insert(2, 20);
    s.insert(3, 30);

    //IMPRIMINDO A SEQUÊNCIA APÓS INSERIR OS ELEMENTOS, COM O PRINT()
    std::cout << "Sequencia: ";
    s.print();

    //INSERINDO O ELEMENTO 99 NA POSIÇÃO 2 COM O INSERT()
    s.insert(2, 99);

    //IMPRIMINDO A SEQUÊNCIA APÓS INSERIR O ELEMENTO 99 NA POSIÇÃO 2, COM O PRINT()
    std::cout << "Apos inserir 99 na posicao 2: ";
    s.print();

    //REMOVENDO O ELEMENTO DA POSIÇÃO 3 DA SEQUÊNCIA COM O REMOVE()
    s.remove(3);

    //IMPRIMINDO A SEQUÊNCIA APÓS REMOVER O ELEMENTO DA POSIÇÃO 3, COM O PRINT()
    std::cout << "Apos remover posicao 3: ";
    s.print();

    //IMPRIMINDO APENAS O ELEMENTO DA POSIÇÃO 2 DA SEQUENCIA COM O GET()
    std::cout << "Elemento da posicao 2: " << s.get(2) << std::endl;

    std::cout << std::endl;

    std::cout << "===== TESTE TAD CONJUNTO =====" << std::endl;

    //CRIANDO CONJUNTOS A e B
    ArraySet A;
    ArraySet B;

    //ADICIONANDO ELEMENTOS NOS CONJUNTOS A
    A.add(1);
    A.add(2);
    A.add(3);
    A.add(5);

    //ADICIONANDO ELEMENTOS NOS CONJUNTOS B
    B.add(3);
    B.add(4);
    B.add(5);
    B.add(6);

    //IMPRIMINDO O CONJUNTO A USANDO O PRINT()
    std::cout << "Conjunto A = ";
    A.print();

    //IMPRIMINDO O CONJUNTO B USANDO O PRINT()
    std::cout << "Conjunto B = ";
    B.print();

    std::cout << std::endl;

    //CRIANDO O CONJUNTO QUE SERÁ A UNIÃO DOS CONJUNTOS A e B USANDO O UNIONSET()
    ArraySet uniao = uniao.unionSet(A,B);

    //MOSTRANDO O CONJUNTO RESULTADO DA UNIÃO DE A e B COM O PRINT()
    std::cout << "Uniao(A, B) = ";
    uniao.print();

     //CRIANDO O CONJUNTO QUE SERÁ A INTERSEÇÃO DOS CONJUNTOS A e B USANDO O INTERSECTION()
    ArraySet intersecao = intersecao.intersection(A,B);

    //MOSTRANDO O CONJUNTO RESULTADO DA INTERSEÇÃO DE A e B COM O PRINT()
    std::cout << "Intersecao(A, B) = ";
    intersecao.print();

    std::cout << std::endl;

    std::cout << "===== TESTE ARRAY SEQUENCE =====" << std::endl;

    ArraySequence seq;

    seq.pushBack(10);
    seq.pushBack(20);
    seq.pushBack(30);
    seq.pushBack(40);

    std::cout << "Inicial: ";
    seq.print();

    seq.pushFront(5);

    std::cout << "Apos pushFront(5): ";
    seq.print();

    seq.insert(3, 15);

    std::cout << "Apos insert(3, 15): ";
    seq.print();

    std::cout << "Posicao do 30: " << seq.find(30) << std::endl;

    seq.remove(4);

    std::cout << "Apos remove(4): ";
    seq.print();

    std::cout << "Tamanho final: " << seq.size() << std::endl;;

    return 0;
}