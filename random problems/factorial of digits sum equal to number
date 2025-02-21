#include <bits/stdc++.h>

using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main() {
    // your code goes here
    int l;
    int c = 3;
    int arr[c];
    for (int i = 100; i < 1000; i++) {
        int y=i;
        for (int k = 0; k < 3; k++) {
            l = y % 10;
            y = y / 10;
            arr[c - k - 1] = l;
        }
        int f1=fact(arr[0]);
        int f2=fact(arr[1]);
        int f3=fact(arr[2]);
        if((f1+f2+f3)==i){
            cout<<i;
            break;
        }
    }

}
