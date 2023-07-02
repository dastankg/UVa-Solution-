#include <vector>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>


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
    int n, m, c, tmp;
    int t = 1;
    while (true){
        cin >> n >> m >> c;
        if (n == 0){
            break;
        }
        int amper = 0;
        int max_amper = 0;
        vi arr(n);
        vector<bool> arr1(n, false);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        bool flag = false;
        for (int i = 0; i < m; ++i) {
            cin >> tmp;
            tmp--;
            if (arr1[tmp]){
                amper -= arr[tmp];
                arr1[tmp] = false;
            } else {
                amper += arr[tmp];
                arr1[tmp] = true;
                max_amper = max(max_amper, amper);
            }

            if (amper > c){
                flag = true;
            }
        }
        if (flag){
            cout << "Sequence " << t << "\nFuse was blown.\n";
        } else {
            cout << "Sequence " << t << "\nFuse was not blown.\nMaximal power consumption was " << max_amper << " amperes.\n";
        }
        t++;
        if (t > 1){
            cout << "\n";
        }
    }
}
