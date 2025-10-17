/*
Chomảng2chiềuchứacácsốnguyên,kíchthướcMxN.Hiệnthựchàmint findMaxColumn
(int arr[][1000], int row, int col) để tìm chỉ số của cột có tổng tất cả các phần tử lớn nhất,
trong đó arr, row và col lần lượt là mảng 2 chiều, số hàng và số cột của mảng.
Lưu ý: Cột đầu tiên được đánh chỉ số 0. Nếu có nhiều hơn một cột có tổng lớn nhất, ta chọn cột
có chỉ số lớn nhất.

*/

#include <iostream>
using namespace std;

int findMaxColumn(int arr[][1000], int row, int col){
    int max = 0;
    int maxSum = -2148000;
    for(int i =0; i < col; i +=1){
        int sum =0;

        for(int j =0; j < row; j ++){
            sum += arr[j][i]       ;
        }
        if (sum > maxSum){
            max = i;
            maxSum = sum;
        }

    }
    return max;
}

int main(){

    int arr[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};
    cout << findMaxColumn(arr, 2,5);
    return 0;
}