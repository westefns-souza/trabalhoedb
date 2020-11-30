#pragma once

#include <iostream>
#include "node.hpp"

//pilha

template<typename T>
class Stack
{
    public:
        Stack();
        ~Stack();

        size_t size();
        void push(T value); // insere o valor value no topo da pilha. Complexidade: O(1).
        T top(); // retorna o elemento do topo da pilha. Complexidade: O(1).
        void pop(); // remove o elemento do topo da pilha. Complexidade: O(1).
    
    private:
        size_t length;
        Node<T>* first;
};