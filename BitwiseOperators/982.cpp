//https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero/
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

//map all tuples, then check array again verifying if there is some match 
int countTriplets(vector<int>& nums) {
    hashMap<int, int> tuples;
    for (auto a : nums)
        for(auto b : nums)
            tuples[a & b]++;

    int cnt = 0;
    for (auto a : nums)
        for (auto t : tuples)
            if ((t.first & a) == 0)
                cnt += t.second;
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{2,1,3};
    vector<int> vect2{0,0,0};

    cout << countTriplets(vect1) << endl; //12
    cout << countTriplets(vect2) << endl; //27

    return 0;
}