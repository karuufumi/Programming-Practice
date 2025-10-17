#include <iostream>
using namespace std;



class Room{
    private: 
    double length;
    double breadth;
    double height;
    
    public:
    Room(double l, double b, double h){
        l >=0? this->length = l: this->length = 0;
        b>=0? this->breadth = b: this->breadth =0;
        h>=0? this->height = h: this->height =0;
    }

    double calculateArea(){
        return this->length * this->breadth;
    }
    double calculateVolume(){
        return (this->length * this->breadth * this->height);
    }
};