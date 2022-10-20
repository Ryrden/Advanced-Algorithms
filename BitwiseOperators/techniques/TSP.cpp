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

int tsp(vector<vector<int>> dist, int setOfCities, int city, int n){
    //base case
    if (setOfCities == (1 << n) - 1){
        //return the cost from the city to the original
        return dist[city][0];
    }
    int ans = INT_MAX;
    for(int choice = 0; choice < n; choice++){
        //check if city is visited or not
        if ((setOfCities & (1 << choice)) == 0){
            int currCity = setOfCities | (1 << choice); //this line mean if 0001 is the actual city, next gonna be 0011 cause OR operator
            int subProb = dist[city][choice] + tsp(dist, currCity, choice, n);
            ans = min(ans,subProb);
        }
    }
    return ans;
}

int tsp_optimized(vector<vector<int>> dist, int setOfCities, int city, int n, vector<vector<int>> &dp){
    //base case
    if (setOfCities == (1 << n) - 1){
        //return the cost from the city to the original
        return dist[city][0];
    }

    if (dp[setOfCities][city] != -1){
        return dp[setOfCities][city];
    }

    int ans = INT_MAX;
    for(int choice = 0; choice < n; choice++){
        //check if city is visited or not
        if ((setOfCities & (1 << choice)) == 0){
            int currCity = setOfCities | (1 << choice); //this line mean if 0001 is the actual city, next gonna be 0011 cause OR operator
            int subProb = dist[city][choice] + tsp_optimized(dist, currCity, choice, n,dp);
            ans = min(ans,subProb);
        }
    }
    dp[setOfCities][city] = ans;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<vector<int>> dist = {
        {0,20,42,25},
        {20,0,30,34},
        {42,30,0,10},
        {25,34,10,0}
    };
    int n = 4;
    //cout << tsp(dist, 1, 0, n) << endl;

    vector<vector<int>> dp(1<<n, vector<int>(n,-1));
    
    cout << tsp_optimized(dist, 1, 0, n,dp) << endl;

    return 0;
}