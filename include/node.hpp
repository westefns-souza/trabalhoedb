#pragma once

template<typename T>
struct Node
{
    T value;
    Node<T>* prev;
    Node<T>* next;
};