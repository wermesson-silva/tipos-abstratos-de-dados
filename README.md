# Trabalho de Estrutura de Dados – Implementação de TADs em C++

## Descrição

Este trabalho tem como objetivo implementar diferentes Tipos Abstratos de Dados (TADs) utilizando a linguagem C++, aplicando conceitos de:

- modularização;
- encapsulamento;
- ponteiros;
- alocação dinâmica de memória;
- implementação manual de estruturas de dados.

Todas as estruturas foram implementadas sem utilização de estruturas prontas da STL (`vector`, `set`, `list`, etc.), conforme solicitado.

---

# Estruturas Implementadas

## 1. TAD Sequência

Estrutura baseada em array dinâmico.

### Operações implementadas

- `insert(int pos, int elem)`
- `remove(int pos)`
- `get(int pos)`
- `print()`

---

## 2. TAD Conjunto (ArraySet)

Implementação de conjunto utilizando array não ordenado.

### Regras

- Não permite elementos repetidos.

### Operações implementadas

- `add(int elem)`
- `remove(int elem)`
- `contains(int elem)`
- `unionSet(Set A, Set B)`
- `intersection(Set A, Set B)`
- `print()`

---

## 3. TAD ArraySequence

Implementação de sequência dinâmica utilizando array.

### Operações implementadas

- `pushBack(int value)`
- `pushFront(int value)`
- `insert(int pos, int value)`
- `remove(int pos)`
- `find(int value)`
- `size()`
- `print()`

---

# Estrutura do Projeto

```txt
.
├── main.cpp
├── Makefile
│
├── sequencia
│   ├── sequencia.cpp
│   └── sequencia.h
│
├── conjunto
│   ├── arrayset.cpp
│   └── arrayset.h
│
└── array_sequence
    ├── arraysequence.cpp
    └── arraysequence.h
