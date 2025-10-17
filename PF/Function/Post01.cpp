#include <iostream>
using namespace std;

int stringLen(char* str) {
    char *tmp = str;
    int count =0;
    while (tmp != '\0'){
        count++;
        tmp++;
    }
    return count;
}

void mostFrequentCharacter(char* str, char& res, int& freq) {
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        int key = (unsigned char)str[i];
        count[key]++;
    }

    int maxFreq = 0;
    char maxChar = '\0';

    for (int i = 0; i < 256; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            maxChar = char(i);
        }
    }

    res = maxChar;
    freq = maxFreq;
}

int main(){
    return 0;
}