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
    long double h, u, d, f;
    while (true){
        cin >> h >> u >> d >> f;
        if (h == 0){
            break;
        }
        long double n = 0;
        int day = 0;
        long double percent = u * (f / 100);
        while (true){
            day++;
            n += max<long double>(0, u);
            if (n > h){
                cout << "success on day " << day << "\n";
                break;
            }
            n -= d;
            if (n < 0){
                cout << "failure on day " << day << "\n";
                break;
            }
            u -= percent;
        }
    }
}
