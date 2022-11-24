#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>
#define print(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< ' '; cout << endl

/* 
For a base number X, the product of multiplying it Y times is called X to the Y-th power and 
represented as pow(X,Y). For example, we have pow(2,3)=2×2×2=8.

Given three integers A, B, and C, compare pow(A,C) and pow(B,C) to determine which is greater.

If pow(A,C) < pow(B,C), return <; 
if pow(A,C) > pow(B,C), return >; 
if pow(A,C) = pow(B,C), return = .
*/

using namespace std;
string solve(int A,int B, int C){
    int resA = 1;
    int resB = 1;
    while(C){
        if (C & 1){
            resA *= A;
            resB *= B;
        }
        A *= A;
        B *= B;
        C >>= 1;
    }
    if (resA == resB)
        return "=";
    return (resA > resB ? ">" : "<");
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout << solve(3,2,4) << endl; // >
    cout << solve(-7,7,2) << endl; // =
    cout << solve(6,1,6) << endl; // >
    cout << solve(-8,-6,3) << endl; // <

    return 0;
}