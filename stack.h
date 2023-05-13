#include "list.h"

template <typename T> class stack : public List<T>
{
private:
    Element<T>* _head;
    Element<T>* _tail;
    int _size;

public:
    stack() : _head(nullptr), _tail(nullptr), _size(0) {}
    ~stack() {
        Element<T>* temp = _head;
        while (temp != nullptr) {
            temp = temp->next;
            delete _head;
            _head = temp;
        }
        _tail = nullptr;
    }

    void push_back(T value) override {
        Element<T>* temp = new Element<T>(value);
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
    
    void pop_back() override {
        if (_head == nullptr) {
            return;
        }
        else if (_head == _tail) {
            delete _head;
            _head = nullptr;
            _tail = nullptr;
        }
        else {
            Element<T>* temp = _head;
            while (temp->next != _tail) {
                temp = temp->next;
            }
            delete _tail;
            _tail = temp;
            _tail->next = nullptr;
        }
        _size--;
    }
    
    void print() override {
        Element<T>* temp = _head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int size() { return _size; }
   
};
