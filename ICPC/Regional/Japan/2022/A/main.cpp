#include <bits/stdc++.h>
using namespace std;

struct House {
    int a, b, id;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<House> houses(n);

    for (int i = 0; i < n; i++) {
        cin >> houses[i].a >> houses[i].b;
        houses[i].id = i;
    }

    sort(houses.begin(), houses.end(),
         [](const House& x, const House& y) {
             return x.a < y.a;
         });

    vector<int> ans(n);

    // min heap
    priority_queue<pair<int,int>,
                   vector<pair<int,int>>,
                   greater<pair<int,int>>> pq;

    int ptr = 0;

    for (int day = 1; day <= 31; day++) {

        // houses that become available today
        while (ptr < n && houses[ptr].a == day) {
            pq.push({houses[ptr].b, houses[ptr].id});
            ptr++;
        }

        // visit up to k houses today
        for (int cnt = 0; cnt < k && !pq.empty(); cnt++) {
            auto [deadline, id] = pq.top();
            pq.pop();

            ans[id] = day;
        }
    }

    for (int x : ans) {
        cout << x << '\n';
    }

    return 0;
}
