/*
Given a two-dimensional array whose each element is integer, its size is M x N.

Implement the following function:

int subMatrix(int arr[][1000], int row, int col);
Where arr, row and col are the given two-dimensional array, 
its number of rows and its number of columns. 
A sub-array whose size is 2x2 is called as HN4 if the sum of all elements of it is an odd number. 
Find the number of sub-array of the given array.

Note: Libraries iostream, vector, and string have been imported, and namespace std has been used.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int subMatrixSum(int arr[][1000], int i, int j ){
    return arr[i+1][j] + arr[i][j] + arr[i+1][j+1] + arr[i][j+1];
}
int subMatrix(int arr[][1000], int row, int col) {
    int hn4 = 0;
    for(int i =0; i < row-1; i ++){
        for(int j = 0; j < col-1; j++)
        {
            if(subMatrixSum(arr,i,j)%2 !=0)
                hn4 += 1;
        }
    }
    return hn4;
}


int main(){
    int arr[][1000] = {{66,16,71},{25,81,61},{2,10,34}};
    cout << subMatrix(arr,3, 3);
    return 0;
}