//https://leetcode.com/problems/bitwise-and-of-numbers-range/
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
//shift to right until left num are equal to right num, this will be the final answer
int rangeBitwiseAnd(int left, int right) {
    int cnt = 0;
    while(left != right){
        left >>= 1;
        right >>= 1;
        cnt++;
    }
    
    return (left << cnt);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << rangeBitwiseAnd(5,7) << endl; //4
    cout << rangeBitwiseAnd(0,0) << endl; //0
    cout << rangeBitwiseAnd(1,2147483647) << endl; //0
    cout << rangeBitwiseAnd(7,16) << endl; //0

    return 0;
}