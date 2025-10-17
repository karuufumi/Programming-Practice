#include <iostream>
#include <string>

using namespace std;

/*
operator[](int idx): overload operator [] to do: read (get) the value of element at position idx, 
and write (set) a new value to the element at position idx. For instance: read: x = a[2], write: a[2] = 5, 
for a is an object of class Array. if idx has an invalid value (idx < 0 or idx >= size), then throw -1;

*/


template <typename T>
class Array {
public:
    Array(int size, T initValue);
    ~Array();

    void setAt(int idx, const T & value);
    T getAt(int idx);
    T& operator[](int idx);
    
    void print();

private:
    int size;
    T * p;
};

template<typename T>
void Array<T>::print() {
    for (int i = 0; i < this->size; ++i) {
        cout << (i > 0 ? " " : "")
            << this->p[i];
    }
    cout << endl;
}
template<typename T>
T& Array<T>::operator[] (int idx){
    return *(this->p + idx);
}
// TODO

int main(){

    return 0;
}