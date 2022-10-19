//https://leetcode.com/problems/total-hamming-distance/
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
    5 0101
    4 0100
    3 0011
    2 0010
*/  

//Count numbers of ones at each position and multiply by numbers of zeros, this will be the hamming distance for position
int totalHammingDistance(vector<int> nums) {
    int dist = 0;

    for (int i = 0; i < 32; i++){
        int ones = 0;
        for(int num : nums){
            ones += (num >> i) & 1;
        }
        int zeros = nums.size() - ones;
        dist += ones * zeros;
    }
    return dist;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    return 0;
}