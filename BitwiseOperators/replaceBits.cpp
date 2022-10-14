/*
You are given two 32-bit numbers, N and M, and two bit positions i and j.
Write a method to set all bits between i and j in N equal to M.
M (becomes a substring of N locationed at and starting at j)

Input:
    N = 10000000000 -> 1024
    M = 10101 -> 21
    i = 2, j = 6

Output
    10001010100 -> 1108

*/
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

void replaceBits(int &n, int m, int i, int j){
    int clearBits = ((~0) << (j+1)) | ((1<<i) - 1);
    n = n & clearBits;

    int mask = m << i;
    n = n | mask;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n = 15;
    replaceBits(n, 2,1,3);
    cout << n << endl; //5

    int n = 1024;
    replaceBits(n, 21,2,6);
    cout << n << endl; //1108

    return 0;
}