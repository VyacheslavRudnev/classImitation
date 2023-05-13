#ifndef List_class
#define List_class
#include "library.h"

template <typename T> class Element {
public:
    T value;
    Element* next;
    Element() : value(), next(nullptr) {}
    Element(T value) : value(value), next(nullptr) {}
    ~Element() = default;
};

template <typename T> class List abstract
{
protected:
    Element<T>* _head;
    Element<T>* _tail;
    int _size;

public:
   List() : _head(nullptr), _tail(nullptr), _size(0) {}
    ~List() {
        Element<T>* temp = _head;
        while (temp != nullptr) {
            temp = temp->next;
            delete _head;
            _head = temp;
        }
        _tail = nullptr;
    }

    virtual void push_back(T value) = 0;
    virtual void push_front(T value) = 0;
    virtual void pop_back() = 0;
    virtual void pop_front() = 0;
    virtual void print() = 0;
       
    int size() { return _size; }
};
#endif
