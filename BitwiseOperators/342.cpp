//https://leetcode.com/problems/power-of-four/
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

/* 
    04 = 00000100
    16 = 00010000
    64 = 01000000

    there is a gap between power of 2 and power of 4, just need to verify all

    a better way is just create a mask that looks like 0101010101... but i don't know how do that
*/

bool isPowerOfFour(int n) {
    if (n < 1) return false;
    
    for(int i = 0; i < 32;i += 2){
        if (n == (1 << i)) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cout << isPowerOfFour(16) << endl;//true
    cout << isPowerOfFour(8) << endl; //false
    cout << isPowerOfFour(5) << endl; //false
    cout << isPowerOfFour(2) << endl; //false
    cout << isPowerOfFour(1) << endl; //true

    return 0;
}