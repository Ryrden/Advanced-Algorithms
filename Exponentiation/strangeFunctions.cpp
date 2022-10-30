//https://www.codechef.com/submit/ABX01
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

int digit(int a){
    int no = 0;
    while(a){
        no += a % 10;
        a /= 10;
    }
    return no;
}

int f(int a){
    while(a >= 10){
        a = digit(a);
    }
    return a;
}

int solve(int a,int b){
    int res = 1;
    while(b){
        if(b & 1){
            res *= f(a);
            res = f(res);
        }
        a = f(a) * f(a);
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }

    return 0;
}