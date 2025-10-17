#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void process(string fileName)   {

    ifstream file(fileName);
    int N;
    int M;
    file >> N;
    file >> M;
    double globalMax = -2145965;
    for(int i =0; i < N; i++){
        double localMax = -2145965;
        for(int j = 0; j < M; j++){
            double curr;
            file >> curr;
            if (curr > localMax)
                localMax = curr;
            
        }
        cout << localMax << " ";
        if (localMax > globalMax)
            globalMax = localMax;
    }
    cout << globalMax;
}

int main(){

    process("file.txt");
    return 0;
}