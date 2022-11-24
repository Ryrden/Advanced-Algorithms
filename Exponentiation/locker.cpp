//https://www.spoj.com/problems/LOCKER/
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

ll mod = 1e9+7;

int solve(int n){
    ll res = 1;
    int a = 2;
    while(n){ 
        if (n & 1){
            res 
        }       
        a += a;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;cin>>t;

    while(t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }

    return 0;
}