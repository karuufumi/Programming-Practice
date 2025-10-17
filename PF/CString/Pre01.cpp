/*
Viết hàm void reverse(char str[]) đảo ngược các ký tự trong chuỗi.
• Mô tả hàm: Hàm này thực hiện việc đảo ngược chuỗi ký tự truyền vào ngay tại chỗ. Hàm
không trả về giá trị và thay đổi chuỗi đầu vào để chuỗi sau khi đảo ngược thay thế chuỗi ban
đầu.
• Đầu vào: Mảng kí tự chứa chuỗi cần đảo ngược.
• Đầu ra: Chuỗi đầu vào được đảo ngược ngay tại chỗ, không cần chuỗi đầu ra outstr.
• Các thư viện có thể dùng: <iostream>, <cstring>.

*/


#include <iostream>
#include <cstring>


void reverse(char str[]){
    int length = strlen(str)-1;
    int idx = 0;
    while( length > idx){
        char tmp = str[length];
        
    }
}

int main(){


    return 0;
}