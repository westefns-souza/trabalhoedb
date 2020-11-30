#include "list.hpp"
#include "node.hpp"

template <class T>
List<T>::List() {
    this->length = 0;
}

template <class T>
List<T>::~List() {
    delete [] this->first;
    delete [] this->last;
}

template <class T> 
size_t 
List<T>::size() {
    return this->length;
}


template <class T> 
void
List<T>::insertAt(T value, size_t position) {
    Node<T>* node = new Node<T>();
    node->value = value;

    if (position == 0)
    {
        if (this->first != nullptr){
            node->next = this->first;
        }else {
            this->last = node;
        }

        this->first = node;
        ++length;
    } 
    else if (position == this->size() - 1)
    {
        if (this->last != nullptr)
        {
            node->prev = this->last;
        }else {
            this->last = node;
        }
        this->last = node;
        ++length;
    } 
    else 
    {
        if (this->size() > position){
            Node<T>* currentNode = this->first;

            size_t index = 0;

            while (index != position)
            {
                currentNode = currentNode->next;
                index++;
            }

            node->next = currentNode;
            currentNode->prev->next = node;
            currentNode->prev = node;
        ++length;
        }
    }
}

template <class T> 
void
List<T>::removeAt(size_t position) {
    if (position == 0)
    {
        this->first = this->first->next;
    } 
    else if (position == this->size() - 1)
    {
        this->last = this->last->prev;
        --length;
    } 
    else 
    {
        if (this->size() > position) {
                Node<T>* currentNode = this->first;

                size_t index = 0;

                while (index != position)
                {
                    currentNode = currentNode->next;
                    index++;
                }

                currentNode->prev->next = currentNode->next; 
                currentNode->next->prev = currentNode->prev; 
            --length;
        }
    }

}

template <class T> 
void 
List<T>::insertAtFront(T value) {
    this->insertAt(value, 0);
}

template <class T> 
void
List<T>::insertAtBack(T value) {
    this->insertAt(value, this->size() - 1);
}

template <class T> 
void 
List<T>::removeAtFront() {
    removeAt(0);
}

template <class T> 
void 
List<T>::removeAtBack() {
    removeAt(size());
}

template <class T> 
void 
List<T>::print() {
    Node<T>* currentNode = this->first;

    while (currentNode != nullptr)
    {
        std::cout << currentNode->value << std::endl;

        currentNode = currentNode->next;
    }
}