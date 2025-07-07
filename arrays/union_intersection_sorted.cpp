// UNION AND INTERSECTION OF TWO SORTED ARRAYS


#include <bits/stdc++.h>

using namespace std;

int main() {
    // union of two arrays
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    vector < int > v;
    vector < int > v1;
    int j = 0;
    for (int i = 0; i < n1;) {
        if (arr1[i] < arr2[j] && arr1[i]!=arr1[i-1]) {
            v.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i]<arr2[j] && arr1[i]==arr1[i-1]){
            i++;
        }
        else if (arr1[i] > arr2[j] && arr2[j]!=arr2[j-1]) {
            v.push_back(arr2[j]);
            j++;
        }
        else if (arr1[i]>arr2[j] && arr2[j]==arr2[j-1]){
            j++;
        }
        else if (arr1[i] == arr2[j]) {
            v.push_back(arr1[i]);
            v1.push_back(arr1[i]);
            i++;
            j++;
        }
        if (i == n1) {
            for (j = j; j < n2; j++) {
                if(arr2[j]!=arr2[j-1]) v.push_back(arr2[j]);
            }
        }
        if(j==n2){
            for(i=i;i<n1;i++){
                if(arr1[i]!=arr1[i-1]) v.push_back(arr1[i]);
            }
        }
    }
    cout<<"union is : ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout<<endl<<"intersection is : ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    
}
