#include <bits/stdc++.h>
using namespace std;

void profit(int j, int t, int n, int arr[], int max_profit) {
    if (t == n - 1) {
        cout<<"maximum profit = "<<max_profit;
    }
    else {
        int l = arr[t];  
        for (int i = t; i < n; i++) {
            if (arr[i] <= l) {
                j = i;
                l = arr[i];
            }
            else if (arr[i] > l) break;
        }
        int h = arr[j];
        for (int k = j; k < n; k++) {
            if (arr[k] >= h) {
                h = arr[k];
                t = k;
            }
            else if (arr[k] < h) break;
        }
        max_profit = max_profit + h - l;
        profit(j, t, n, arr, max_profit);
    }
}
int main() {
    // your code goes here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    profit(0, 0, n, arr, 0);
    return 0;
}


Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.
Example 2:

Input: prices = [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
Total profit is 4.
Example 3:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.
 





