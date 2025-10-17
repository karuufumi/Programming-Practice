#include <iostream>
#include <string>
#include <fstream>
using namespace std;


struct Item {
    int productID;
    int quantity;
};

struct Purchase {
    string customerName;
    Item items[100];
    int itemCount;
};

void calMoney(string price, string buy) {
    int N;
    ifstream file(price);
    file >> N;
    int *prices = new int[N];
    int *ids = new int[N];
    for(int i = 0; i < N; i ++){
        for(int j =0; j < 2; j++){
            int id;
            int Price;
            file >> id;
            ids[i]  = id;
            file >> Price;
            prices[i] = Price;
        }
    }

    int M;
    ifstream file1(buy);
    file1 >> M;
    char* purchase = new char[M];
    int* purchasePrice = new int[M];

    for(int i =0; i < M ; i ++){
        string currLine;
        getline(file1, currLine);
   //     file1 >> pName;
        int j = 0;
        // read customer name
        while (j < currLine.length() && currLine[j] == ' ')
            j++;

        
    }

    delete[] prices;
    delete[] ids;
    // TODO
}
