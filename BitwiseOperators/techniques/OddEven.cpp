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

//Check if a number is odd or even

// If num & 1 == 1, so, it is Odd

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int num; 
    cin >> num;

    if ((num & 1) == 1){
        cout << "Odd" << endl;
    }
    else if ((num & 1) == 0){
        cout << "Even" << endl;
    }

    return 0;
}