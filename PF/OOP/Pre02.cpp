#include <iostream>
using namespace std;





class Integer{
    private:
    int val ;
    public:
    Integer(int val){
        this->val = val;

    }
    void setValue(int val){
        this->val = val;
    }
    int getValue(){
        return this->val;
    }

};