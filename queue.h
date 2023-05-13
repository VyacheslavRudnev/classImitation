#include "list.h"

template <typename T> class queue : public List<T>
{
protected:
    Element<T>* _head;
    Element<T>* _tail;
    int _size;

public:
    queue() : _head(nullptr), _tail(nullptr), _size(0) {}
    ~queue() {
        Element<T>* temp = _head;
        while (temp != nullptr) {
            temp = temp->next;
            delete _head;
            _head = temp;
        }
        _tail = nullptr;
    }

    void push_back(T value) override
    {
        Element<T>* temp = new Element<T>(value);
        if (_head == nullptr) {
            _head = temp;
            _tail = temp;
        }
        else {
            _tail->next = temp;
            temp->prev = _tail;
            _tail = temp;
        }
        _size++;
    }
    int copy_q() 
    {
        Element<T>* temp = _head;
        int count = 0;
        while (temp != nullptr) {
            temp = temp->next;
        }
        return _head;
    }

    void pop_front() override
    {
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
            _head = _head->next;
            _head->prev = nullptr;
            delete temp;
        }
        _size--;
    }

    void print() override
    {
        Element<T>* temp = _head;
        while (temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
        
    int size() { return _size; }
};

