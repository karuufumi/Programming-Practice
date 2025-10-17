/*
Hiện thực hàm findAllIndex(string s1, string s2) để in ra tất cả các vị trí xuất hiện
của kí tự đầu tiên của chuỗi s2 trong chuỗi s1. Nếu không tìm thấy in ra -1. Các vị trí tìm thấy sẽ
cách nhau một khoảng trắng, sau vị trí cuối cùng, không in thêm bất kỳ ký tự nào (kể cả khoảng
trắng, dấu xuống hàng).

*/
#include <iostream>
#include <string>
using namespace std;



void findAllIndex(std::string s1, std::string s2){
    if(s2.empty())
        return;
    
    
    if (s1.empty())
        return;

    size_t foundPos = s1.find(s2[0]);

    if (foundPos == std::string::npos)
    {
        std:: cout << -1;
        return;
    }
    std::cout << foundPos;

    while(foundPos != std::string::npos)
    {
       std::cout << " ";
        foundPos = s1.find(s2[0], foundPos +1);
        std::cout << foundPos;
    }
    


}


int main(){
    string s1 = "Truong Dai Hoc Bach Khoa.";
string s2 = "a";
findAllIndex(s1, s2);
    return 0;
}