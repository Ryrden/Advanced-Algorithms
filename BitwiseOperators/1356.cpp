//https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>
#define print(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< ' '; cout << endl

using namespace std;

int countBits(int n){
    int cnt = 0;
    while(n > 0){
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

vector<int> sortByBits(vector<int> arr) {
    map<int,multiset<int>> hash;
    for(int num : arr){
        int bits = countBits(num);
        hash[bits].insert(num);
    }
    
    vector<int> ans;
    for(auto x : hash){
        for (auto y : x.second) 
            ans.pb(y);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{0,1,2,3,4,5,6,7,8};

    vector<int> ans1 = sortByBits(vect1);

    print(ans1,0,ans1.size());

    return 0;
}