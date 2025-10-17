#include <iostream>

#include <string>
/*

Hiện thực hàm cutString(string s, int index) để in ra chuỗi con của chuỗi s từ vị trí
index đến hết (index tính từ 0). Nếu index không hợp lệ cho chuỗi thì không in ra gì cả.
*/


void cutString(std::string s, int index){
    // you can use the methods from string library
    std::cout << s.substr(index, s.size()-index);
}
int main(){

    cutString("HelloWorld",2);
    //std::cout << "Hello World\n" ;
    return 0;
}