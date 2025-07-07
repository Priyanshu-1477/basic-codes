// Selection sorting

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    
    for(int a=0;a<n-1;a++){
        int mini=a;
        for(int b=a;b<n;b++){
            if(arr[b]<arr[mini]) mini=b; 
        }
        int temp=arr[mini];
        arr[mini]=arr[a];
        arr[a]=temp;
    }

    
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";    
    }
        

}



// Bubble Sorting


#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}

ex- 1 2 3 5 4 7 6 3

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}






















