#include<bits/stdc++.h>


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<long long >> vll;
typedef vector<long long> vl;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, a, b;
    while (true){
        cin >> n;
        if (n == 0){
            break;
        }
        cin >> m;
        int ans = 0;
        int h = 0;
        for (int i = 0; i < m; ++i) {
            cin >> a;
            if (n - a > h){
                ans += (n - a) - h;

            }
            h = n - a;
        }
        cout << ans << endl;


    }
}
