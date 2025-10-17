/*
Một đường truyền thông tin gồm các kí tự bị hacker tấn công. Cuộc tấn công chỉ làm ảnh
hưởng đến các tín hiệu có giá trị là kí tự trong bảng chữ cái làm cho các chữ thường thành chữ in
hoa và ngược lại các chữ in hoa thành chữ thường. Sinh viên được chủ đường truyền nhờ để khôi
phục dữ liệu lại về như ban đầu.
Sinh viên viết hàm xử lý void recover(char signal[]) để biến đổi tất cả chữ cái in hoa thành
chữ viết thường và chữ cái thường thành chữ in hoa có trong chuỗi signal (lưu ý biến đổi trực tiếp
trên signal).
• Đầu vào: Chuỗi kí tự cần biến đổi chữ hoa thành chữ thường và chữ thường thành chữ hoa.
• Đầu ra: Kết quả biến đổi trực tiếp trên signal (lưu ý các kí tự không phải kí tự trong bảng
chữ cái thì giữ nguyên).
*/

#include <iostream>
using namespace std;

size_t stringLen(char signal[]){
    char* curr = signal;
    size_t cnt =0;
    while (*curr != '\0')
    {
        cnt+=1;
        curr ++;
    }
    return cnt;

}

void recover(char signal[]){
    size_t size = stringLen(signal);
    for(size_t i = 0; i < size; i+=1){
        if(signal[i] <='z' && signal[i] >='a'){
            signal[i] -= 32;
        }
    }

}

int main(){

    char tmp[6]= "hello";
    recover(tmp);

    for(size_t i =0; i < stringLen(tmp); i+=1){
        cout << tmp[i];
    }

}