/*

Viết chương trình đọc vào chuỗi s từ bàn phím, tìm và trả về chuỗi con có tính chất đối
xứng dài nhất có trong s.
• Đầu vào: Chuỗi s.
• Đầu ra:Chuỗi con có tính chất đối xứng dài nhất có trong s. Trong trường hợp có nhiều chuỗi
con dài nhất có cùng độ dài, trả về chuỗi con có vị trí bắt đầu nhỏ nhất.
*/

#include <iostream>
#include <string>
using namespace std;


int expand(string s, int left, int right){
    int bestLength =0;
    while(left >=0 && right < s.size() && s[left] == s[right]){
        bestLength+=1;
    }

    return bestLength;

}

string symmetricString(string s){
   // string* palindromes ;
    int bestStart = 0;
    int bestEnd = 0;
    int bestlength = 0;

    for(int i = 0; i < s.size() ; i +=1){
        int curr = expand(s, i , i+1);
        if (curr > bestlength)
            {
                bestStart = i;
                bestEnd = 
            }
    }
    //return expand(s, bestStart, bestEnd);
    return s.substr(bestStart,bestEnd);
}