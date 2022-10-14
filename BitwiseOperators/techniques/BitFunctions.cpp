#include <bits/stdc++.h>

using namespace std;

int getIthBit(int n, int i){
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n,int i){
    int mask = (1<<i);
    n = (n | mask);
}

void clearIthBit(int &n, int i){
    int mask = ~(1<<i);
    n = (n & mask);
}

void updateIthBit(int &n, int i, int v){
    clearIthBit(n,i);
    int mask = (v<<i); //v is 0 or 1
    n = n | mask; //sets the ritght value
}

void clearLastBits(int &n, int i){
    int mask = (-1 << i);
    n = n & mask;
}

void clearBitsInRange(int &n, int i, int j){
    //mask = 1111110000111
    //a    = 1111110000000 = (~0) << (j+1)
    //b    = 0000000000111 = 2^i - 1 = (1 << i) - 1 => 2's complement method
    int a = (~0) << (j+1);
    int b = (1<<i) - 1;
    int mask = a | b;
    n = n & mask;
}

int main() {
    int n = 5;
    int i;
    cin >> i;

    cout << getIthBit(n,i) << endl;

    return 0;
}