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

const ll mod = 1e9 + 7;

ll power(ll a, ll b){
    ll res = 1;
    while(b){
        if (b & 1)
            res *= a, res %= mod;
        a *= a, a %= mod;
        b >>= 1;
    }
    return res;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    return 0;
}