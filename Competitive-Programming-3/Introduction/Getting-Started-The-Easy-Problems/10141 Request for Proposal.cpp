#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;


int main() {

    int n, m;
    int t = 1;
    while (cin >> n >> m) {
        string ans, name, tmp;
        int count = -1;
        double price = INT32_MAX;
        if (n == 0 && m == 0) {
            break;
        }
        if (t != 1){
            cout << endl;
        }
        getline(cin, tmp);
        for (int i = 0; i < n; ++i) {
            getline(cin, tmp);
        }
        int r;
        double d;
        for (int i = 0; i < m; ++i) {
            getline(cin, name);
            cin >>  d >> r;
            getline(cin, tmp);
            for (int j = 0; j < r; ++j) {
                getline(cin, tmp);
            }
            if (r > count){
                count = r;
                ans = name;
                price = d;
            } else if (r == count && d < price){
                count = r;
                ans = name;
                price = d;
            }
        }
        cout << "RFP #" << t << "\n" << ans << "\n";
        t++;
    }
}
