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

double myPow(double x, int n) {
    double res = 1;
    bool positive = n > 0 ? true : false;

    while(n){
        if (n & 1)
            res *= positive ? x : (1/x);
        x *= x;
        n /= 2; // this instead >>= because n could be negative
    }
    return res;
}

int main() {
    cout << fixed << setprecision(5);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << myPow(2.00000,10) << endl; // 1024.00000
    cout << myPow(2.10000,3) << endl; // 9.26100
    cout << myPow(2.00000,-2) << endl; // 0.25000
    cout << myPow(1.00000,-2147483648) << endl; // 1.00000

    return 0;
}