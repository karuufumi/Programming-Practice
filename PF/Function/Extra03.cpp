/*
Task: Write a function string mostFrequentWord(string s). 
The string contains words separated by spaces. You must find and return the word that appears the most times. 
If there is a tie, return the word that appeared first chronologically.
Constraints: Your function must ignore case 
(e.g., "Apple" and "apple" are the same word) and handle varying amounts of spaces between words.
*/


#include <iostream>
#include <string>
using namespace std;


 string mostFrequentWord(string s){
    string wordMap[100] ;
    int freqMap[100];
   
    size_t used = 0;
    size_t j = 0;

    while (j < s.size() && used < 100) {
    // skip spaces
    while (j < s.size() && s[j] == ' ') {
        j++;
    }

    // collect one word
    string word = "";
    while (j < s.size() && s[j] != ' ') {
        word += s[j];
        j++;
    }

    if (word != "") {
        wordMap[used] = word;
        freqMap[used] = 1;
        used++;
    }

}
    for(int i =0; i < 100; i+=1){
        for(char &c: wordMap[i]){
            if(c >='A' && c <= 'Z'){
                c += 32;
            }
        }
    }





 }

 int main(){

    return 0;
 }