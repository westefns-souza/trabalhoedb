#pragma once

#include <iostream>
#include "node.hpp"

//Lista duplamente encadeada

template<typename T>
class List
{
    public:
        List();
        ~List();

        size_t size();
        void insertAt(T value, size_t position); // insere o elemento value na posição position. Complexidade: O(n).
        void removeAt(size_t position); // remove o elemento na posição position. Complexidade: O(n).
        void insertAtFront(T value); // insere o valor value na primeira posição da lista. Complexidade: O(1).
        void insertAtBack(T value); // insere o valor value na última posição da lista. Complexidade: O(1).
        void removeAtFront(); // remove o primeiro valor da lista. Complexidade: O(1).
        void removeAtBack(); // remove o último valor da lista. Complexidade: O(1).
        void print(); // Imprime todos os elementos da lista. Complexidade: O(N)
    
    private:
        size_t length;
        Node<T>* first;
        Node<T>* last;
};