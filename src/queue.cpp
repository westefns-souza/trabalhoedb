#include "queue.hpp"
#include "node.hpp"

template <class T>
Queue<T>::Queue() {
    this->length = 0;
}

template <class T>
Queue<T>::~Queue() {
    delete [] this->first;
    delete [] this->last;
}

template <class T>
size_t
Queue<T>::size() {
    return this->length;
}

template <class T>
void 
Queue<T>::pushBack(T value) {
    Node<T>* node = new Node<T>();
    node->value = value;
    
    if (this->last != nullptr) {
        node->prev = this->last;
        this->last->next = node;
    }else {
        this->first = node;
    }

    this->last = node;
}

template <class T>
void 
Queue<T>::popFront() {
    this->first = this->first->next;
}

template <class T>
T
Queue<T>::front() {
    return this->first->value;
}

template <class T>
T 
Queue<T>::back() {
    return this->last->value;
}