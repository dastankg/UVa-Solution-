#include "grader.h"
#include "memory.h"
#include<bits/stdc++.h>
 
using namespace std;
void play(){
    unordered_map<char, vector<int>> mp;
    for (int i = 1; i <= 50; ++i) {
        char c = faceup(i);
        mp[c].push_back(i);
    }
    for (auto i: mp){
        char a = faceup(i.second[0]);
        a = faceup(i.second[1]);
    }
}
