#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    int arr[n];
    int arrs[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l;
    cin >> l;
    int k= l % n;
    int a = 0;
    for (int i = n - k; i < n; i++) {
        for (int j = a; j < k; j++) {
            arrs[j] = arr[i];
            a++;
            break;
        }
    }
    int b=0;
    for (int i = 0; i < n - k; i++) {
        for (int j = n - k -1 + b; j < n; j++) {
            arrs[j] = arr[i];
            b++;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arrs[i] << " ";
    }
}
