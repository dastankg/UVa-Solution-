#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;


int main() {
    bool flag = false;
    int n, c, t, d;
    while (cin >> n) {
        if (flag){
            cout << "\n";
        } else {
            flag = true;
        }
        vector<string> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        string name;
        unordered_map<string, int> mp;
        for (const auto &i: arr) {
            mp[i] = 0;
        }
        while (n--) {
            cin >> name >> c >> t;
            if (t > 0) {
                d = c / t;

                mp[name] -= d * t;
                for (int i = 0; i < t; ++i) {
                    cin >> name;
                    mp[name] += d;
                }
            }

        }
        for (const auto &i: arr) {
            cout << i << " " << mp[i] << "\n";
        }
    }
}
