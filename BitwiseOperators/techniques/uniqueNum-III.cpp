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

void updateSum(vector<int> &sumArr, int num){
    //Extract all bits of X;
    for(int i = 0; i < 32; i++){
        int ith_bit = num & (1 << i);
        if (ith_bit)
            sumArr[i]++;
    }
}

int numFromBits(vector<int> bits){
    int num = 0;
    for(int i = 0; i < 32; i++){
        num += (bits[i] * (1 << i));
    }
    return num;
}

int uniqueNo3(vector<int> arr){
    vector<int> sumArr(32,0);

    for(int num : arr){
        updateSum(sumArr, num);
    }

    //this turns sumArr to an Array of Bits, which is the unique number
    for(int i = 0; i < 32; i++){
        sumArr[i] %= 3;
    }

    return numFromBits(sumArr);

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    vector<int> arr{1,3,5,4,3,1,5,5,3,1};

    cout << uniqueNo3(arr) << endl;

    return 0;
}