//https://leetcode.com/problems/kth-largest-element-in-an-array/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define hashMap unordered_map

using namespace std;

/* 
    Time Complexity: O(n)
    Space Complexity: O(n)
 */

int findKthLargest(vector<int>& nums, int k) {
    multiset<int> vec;

    for(auto num : nums){
        vec.insert(num);
    }

    int count = 1;
    int ans = 0;
    for(auto it = vec.rbegin(); it != vec.rend();it++){
        ans = *it;
        if(count++ == k) break;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{3,2,1,5,6,4};
    vector<int> vect2{3,2,3,1,2,4,5,5,6};
    vector<int> vect3{1};

    cout << findKthLargest(vect1, 2) << endl;
    cout << findKthLargest(vect2, 4) << endl;
    cout << findKthLargest(vect3, 1) << endl;

    return 0;
}