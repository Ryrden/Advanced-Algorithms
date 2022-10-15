//https://leetcode.com/problems/hamming-distance/
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
    int ans = 0;
    while (n > 0){
        n = n & (n - 1);
        ans++;
    }
    return ans;
}

int hammingDistance(int x, int y) {
    int diffBits = x ^ y;

    return countBits(diffBits);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << hammingDistance(1,4) << endl; //2
    cout << hammingDistance(3,1) << endl; //1

    return 0;
}