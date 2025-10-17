/*
Viết hàm int find(char str[], char substr[]) để tìm vị trí của chuỗi con trong một
chuỗi cho trước. Hàm trả về vị trí đầu tiên của chuỗi con trong chuỗi ban đầu. Nếu không tìm thấy
chuỗi con, hàm trả về -1.
• Mô tả hàm: Hàm này thực hiện việc tìm kiếm chuỗi con trong chuỗi ban đầu và trả về vị trí
đầu tiên của chuỗi con nếu được tìm thấy. Nếu không tìm thấy, hàm trả về -1.
• Đầu vào:
– char str[]: Mảng kí tự chứa chuỗi ban đầu.
– char substr[]: Mảng kí tự chứa chuỗi con cần tìm.
• Đầu ra: int: Vị trí đầu tiên của chuỗi con trong chuỗi ban đầu. Nếu không tìm thấy, trả về
-1.
• Các thư viện có thể dùng: <iostream>, <cstring>.
*/

#include <iostream>
#include <cstring>
using namespace std;

int find(char str[], char substr[]){
    int subSize = strlen(substr);
    int size = strlen(str);
    bool found = false;
    int i =0;

    while ( i < size){
        for(int j =0; j < subSize; j +=1){
            if (str[i] != substr[j])
            {
                i+=1;
                break;
            }
            else{
                i++;
                if (j+1 == subSize)
                    found = true;

                continue;
            }
        }
        if (found)
            return i-1;

    }
    return -1;
}

int main(){

    char str[9] = "nice lol";
    char substr[2] = "l";
    cout << find(str, substr);
    return 0;
}