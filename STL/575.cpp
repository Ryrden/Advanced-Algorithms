//https://leetcode.com/problems/distribute-candies/
#include <bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define hashMap unordered_map
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define maxHeap priority_queue<int>

using namespace std;

int distributeCandies(vector<int> candyType) {
    set<int> differentType;

    for(int candy : candyType){
        differentType.insert(candy);
    }

    int canEat = candyType.size() / 2;
    int typesCount = differentType.size();

    if (typesCount > canEat)
        return canEat;
        
    return typesCount;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> vect1{1,1,2,2,3,3};
    vector<int> vect2{1,1,2,3};
    vector<int> vect3{6,6,6,6};

    cout << distributeCandies(vect1) << endl;
    cout << distributeCandies(vect2) << endl;
    cout << distributeCandies(vect3) << endl;

    return 0;
}