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

int convertToBinary(int n){
    int ans = 0;
    int p = 1;

    while(n>0){
        int last_bit = (n&1);
        ans += p*last_bit;

        p *= 10;
        n >>= 1;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    cout << convertToBinary(n) << endl;

    return 0;
}