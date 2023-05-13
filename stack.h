#include "list.h"

template <typename T> class Element_2 {
public:
    T value;
    Element_2* next;
    Element_2() : value(), next(nullptr) {}
    Element_2(T value) : value(value), next(nullptr) {}
    ~Element_2() = default;
};

template <typename T> class stack : public List<T>
{
private:
    Element_2<T>* _head;
    Element_2<T>* _tail;
    int _size;

public:
    stack() : _head(nullptr), _tail(nullptr), _size(0) {}
    ~stack() {
        Element_2<T>* temp = _head;
        while (temp != nullptr) {
            temp = temp->next;
            delete _head;
            _head = temp;
        }
        _tail = nullptr;
    }

    void push_back(T value) {
        Element_2<T>* temp = new Element_2<T>(value);
        if (_head == nullptr) {
            _head = temp;
            _tail = temp;
        }
        else {
            _tail->next = temp;
            _tail = temp;
        }
        _size++;
    }
    
    void pop_back() {
        if (_head == nullptr) {
            return;
        }
        else if (_head == _tail) {
            delete _head;
            _head = nullptr;
            _tail = nullptr;
        }
        else {
            Element_2<T>* temp = _head;
            while (temp->next != _tail) {
                temp = temp->next;
            }
            delete _tail;
            _tail = temp;
            _tail->next = nullptr;
        }
        _size--;
    }
    
    void print() {
        Element_2<T>* temp = _head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
   
};
