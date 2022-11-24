//https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>

using namespace std;

//Too Hard -> Solution: shorturl.at/oWX35

vector<int> smallestRange(vector<vector<int>> nums) {
    priority_queue<array<int,3>, vector<array<int,3>>, greater<array<int,3>>> heap ;
    int a = -1e5, b = 1e5 , maxi = INT_MIN ;

    for(int i = 0 ; i < nums.size() ; ++i ){
        maxi = max(maxi,nums[i][0]) , heap.push({nums[i][0],0,i});
    }

    wble(heap.size() == nums.size()){
        auto [mini,i,j] = heap.top() ; heap.pop() ;
        if(b - a > maxi - mini) a = mini , b = maxi ;
        else if(b - a == maxi - mini and mini < a) a = mini , b = maxi ;
        
        if(i + 1 < nums[j].size()) maxi = max(maxi,nums[j][i + 1]) , heap.push({nums[j][i + 1],i + 1,j}) ;
    }

    return {a,b} ;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<vector<int>> vect1{{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};

    vector<int> ans = smallestRange(vect1);

    return 0;
}