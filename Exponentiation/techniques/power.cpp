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

//O(log(b))
int power(int a, int b){
    int res = 1;
    while(b){
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1; // other option -> b /= 2
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int a,b;
    cin >> a >> b;
    cout << power(a,b) << endl;

    return 0;
}