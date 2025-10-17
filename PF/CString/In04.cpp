/*
Viết hàm void printFirstRepeatedWord(char str[]) in ra từ đầu tiên trong chuỗi bị lặp
lại. Từ bị lặp lại trong một chuỗi là từ mà từ vị trí của nó trở về phía trước có xuất hiện một từ
giống với nó.
• Đầu vào: Mảng kí tự chứa chuỗi
• Đầu ra: In ra từ đầu tiên trong chuỗi có lặp lại. Nếu không có từ nào lặp lại thì in ra
No Repetition.
• Các thư viện có thể dùng: <iostream>, <cstring>.
*/

#include <cstring>
#include <iostream>

using namespace std;

void printFirstRepeatedWord(char str[]){
    bool dict[31];
    bool repeated= false;
    for(int i = 0; i < strlen(str); i++){
        if (dict[char[i]])

    }
}


int main(){

    return 0;
}