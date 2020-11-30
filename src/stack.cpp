#include "stack.hpp"

template <class T>
Stack<T>::Stack() {
    this->length = 0;
    this->first = nullptr;
}

template <class T>
Stack<T>::~Stack() {
    delete [] this->first;
}

template <class T>
size_t
Stack<T>::size() {
    return this->length;
}

template <class T>
void 
Stack<T>::push(T value) {
    Node<T>* node = new Node<T>();
    node->value = value;
    
    if (this->first != nullptr) {
        node->next = first; 
    }

    this->first = node;
    this->length++;
}

template <class T>
T 
Stack<T>::top() {
    return this->first->value;
}

template <class T>
void
Stack<T>::pop() {
    this->first = this->first->next;
    this->length--;
}