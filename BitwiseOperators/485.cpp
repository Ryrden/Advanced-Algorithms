//https://leetcode.com/problems/max-consecutive-ones/
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

int findMaxConsecutiveOnes(vector<int> nums) {
    int cnt = 0;
    int maxi = INT_MIN;

    for(int num : nums){
        if (num & 1){
            cnt++;
        }else{
            cnt = 0;
        }
        maxi = max(maxi,cnt);
    }
    return maxi;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{1,1,0,1,1,1};
    vector<int> vect2{1,0,1,1,0,1};

    cout << findMaxConsecutiveOnes(vect1) << endl; //3
    cout << findMaxConsecutiveOnes(vect2) << endl; //2

    return 0;
}