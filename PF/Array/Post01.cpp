/*
Given a two-dimensional array whose each element is integer, its size is M x N.

Implement the following function:

int specialCells(int arr[][1000], int row, int col);
Where arr, row and col are the given two-dimensional array, its number of rows and its number of columns.
 A cell is called as HN3 if the sum of all elements of the row containing it and 
 the sum of all elements of the column containing it are prime numbers. Find the number of HN3 cells of the given array.

Note: Libraries iostream, vector, and string have been imported, and namespace std has been used.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


inline bool isPrime(int k) {
    if (k < 2) return false;

    for (int i = 2; i * i <= k; i += 1) {
        if (k % i == 0) return false;
    }

    return true;
}

int specialCells(int arr[][1000], int row, int col) {
    vector<int> rowSum(row, 0);
    vector<int> colSum(col, 0);

    for (int i = 0; i < row; i += 1) {
        for (int j = 0; j < col; j += 1) {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }

    int primeRows = 0;
    int primeCols = 0;

    for (int i = 0; i < row; i += 1) {
        if (isPrime(rowSum[i])) {
            primeRows += 1;
        }
    }

    for (int j = 0; j < col; j += 1) {
        if (isPrime(colSum[j])) {
            primeCols += 1;
        }
    }

    return primeRows * primeCols;
}

int main(){

    int arr[][1000] = {{37,53,74},{12,37,60},{98,13,15}};
    cout << specialCells(arr,3,3);
    return 0;
}