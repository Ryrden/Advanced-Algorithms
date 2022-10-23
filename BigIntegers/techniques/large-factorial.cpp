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

void multiply(vector<int> &arr, int no, int &size){

    int carry = 0;
    for(int i = 0; i < size; i++){
        int product = arr[i] * no + carry;

        arr[i] = product % 10;

        carry = product / 10;
    }

    while (carry){
        arr[size] = carry % 10;
        carry /= 10;
        size++;
    }
}

void bigFactorial(int n){
    vector<int> arr(1000,0);
    arr[0] = 1;
    int size = 1;

    for(int i = 2; i <= n; i++){
        multiply(arr,i,size);
    }

    //print result in the reverse order
    //size - 1 to 0
    for(int i = size - 1; i >= 0; i--){
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;

    cin >> n;

    bigFactorial(n);

    return 0;
}