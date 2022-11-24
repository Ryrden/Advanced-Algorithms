//https://leetcode.com/problems/count-good-numbers/
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

const int mod = 1e9 + 7;

int countGoodNumbers(long long n) {
    ll res = 1;
    int odd = false;
    while(n){
        if (n & 1) res
        n >>= 1;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    return 0;
}