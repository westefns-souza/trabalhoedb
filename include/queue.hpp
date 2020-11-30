#pragma once

#include <iostream>
#include "node.hpp"

//lista

template<typename T>
class Queue
{
    public:
        Queue();   
        ~Queue();   

        size_t size();
        void pushBack(T value); // insere o valor value no final da fila. Complexidade: O(1).
        void popFront(); // remove o primeiro elemento da fila. Complexidade: O(1).
        T front(); // retorna o primeiro elemento da fila. Complexidade: O(1).
        T back(); // retorna o último elemento da fila. Complexidade: O(1).

    private:
        size_t length;
        Node<T>* first;
        Node<T>* last;
};