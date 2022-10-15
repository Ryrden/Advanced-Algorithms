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

void uniqueNo2(vector<int> arr){
    int n = arr.size();

    //XOR
    int result = 0;
    for(int i = 0; i < n; i++){
        result ^= arr[i];
    }

    // Pos
    int pos = 0;
    int temp = result;
    while((temp & 1) == 0){
        pos++;
        temp >>= 1;
    }

    // Filter out the numbers from the array which have set bit at 'pos'
    int setA = 0;
    int setB = 0;
    int mask = (1<<pos);
    for (int i = 0; i < n; i++){
        if ((arr[i] & mask) > 0){
            setA ^= arr[i];
        }
        else {
            setB ^= arr[i];
        }
    }

    cout << setA << endl;
    cout << setB << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> arr{1,3,5,4,3,1,5,7};

    uniqueNo2(arr);


    return 0;
}