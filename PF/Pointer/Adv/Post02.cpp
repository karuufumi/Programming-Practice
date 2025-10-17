#include <iostream>
using namespace std;


bool deleteRow(int**& matrix, int r, int c, int row) {
    if (row >= r)
        return false;
    int** res = new int*[r-1];
    for(int i =0; i < r)
    for (int i =0; i < r; i++){

        if (i == row){
            continue;
        }
        else if (i < row){
            for(int j =0; j < c; j++){
                res[i][j] = matrix[i][j];
            }
        }
        else {
            for(int j = 0; j < c; j++){
                res[i-1][j] = matrix[i][j];
            }
        }
    }
    for(int i =0; i < r; i++){
        delete[] matrix[i];
    }
    matrix = res;

    return true;
}



int main(){

    return 0;
}