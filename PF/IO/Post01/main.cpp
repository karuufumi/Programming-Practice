#include <iostream>
#include <string>
#include <fstream>
using namespace std;



void studentGrading(string fileName)   {

    int aCount =0;
    int bCount =0;
    int cCount = 0;
    int dCount = 0;

    bool belowFive = false;
    int N;
    ifstream file(fileName);
    file >>N;
    for(int i =0; i < N; i++){
        float gpa = 0;
        float curr ;
        for(int j = 0; j < 4;  j++){
            file >>curr;
            if (curr < 5)
                belowFive = true;
            if (curr > 10)
                curr = 10;
            if (curr <0)
                curr = 0;
           gpa += (int)curr; 
        }
        gpa /=4 ;
        if (gpa >=8 && !belowFive) 
            aCount ++;
        else if (gpa < 8 && gpa >=6.5 && !belowFive)
            bCount ++;
        else if (gpa <6.5 && gpa>=5 && !belowFive)
            cCount ++;
        else 
            dCount++;
        belowFive = false;
    }
    cout << "A " << aCount <<"\n";
   cout << "B " << bCount <<"\n"; 
      cout << "C " << cCount <<"\n"; 
       cout << "D " << dCount <<"\n"; 

}


int main(){

    studentGrading("file.txt");
    return 0;
}