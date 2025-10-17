#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> pythagoreanTriplets(int limit) {

    // to hold the triplets
    vector<vector<int>> ans;

    for(int c = 1; c<=limit; c++) {
        int a = 1, b = c - 1;
        while (a <= b) {
            if (a * a + b * b == c * c) {
                ans.push_back({a,b,c});
                break;
            }
            else if (a * a + b * b < c * c) {
                a++;
            }
            else {
                b--;
            }
        }
    }
    return ans;
}

int main() {
    int limit = 100;
    vector<vector<int>> ans = pythagoreanTriplets(limit);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < 3; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
