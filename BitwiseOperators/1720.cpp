//https://leetcode.com/problems/decode-xored-array/
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

vector<int> decode(vector<int> encoded, int first) {
    vector<int> ans;
    ans.pb(first);

    int res = 0 ^ first;
    for(int num : encoded){
        res ^= num;
        ans.pb(res);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{1,2,3};
    vector<int> vect2{6,2,7,3};

    vector<int> ans1 = decode(vect1,1);
    print(ans1,0, ans1.size()); // 6,0,2,5,6
    
    vector<int> ans2 = decode(vect2,4);
    print(ans2,0, ans2.size()); //4,2,0,7,4

    return 0;
}