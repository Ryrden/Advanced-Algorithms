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

int count_bits(int n){
    int count = 0;

    while (n > 0){
        int last_bit = (n & 1);
        count += last_bit;

        n >>= 1;
    }
    return count;
}

//Counting Sets Bits : Hack (Faster method)
int count_bits_hack(int n){
    int ans = 0;
    while(n>0){
        n = n & (n-1); // removes the last set bit from current number
        ans++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    cout << count_bits(n) << endl;
    cout << count_bits_hack(n) << endl;

    return 0;
}