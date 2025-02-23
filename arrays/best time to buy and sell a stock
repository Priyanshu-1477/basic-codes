
//You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.



#include <bits/stdc++.h>

using namespace std;
int main() {
    // your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=arr[0];
    int i;
    int c=0;
    for(i=0;i<n;i++){
        if(arr[i]<=l) {
            l=arr[i];
            c++;
        }
    }
    int h=arr[c-1];
    for(int j=c;j<n;j++){
        if(arr[j]>=h) h=arr[j];
    }
    cout<<h-l;
}


Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5


Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
