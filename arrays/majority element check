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
	int c=0;
	int el;
	for(int i=0;i<n;i++){
	    if(c==0){
	        c=1;
	        el=arr[i];
	    }
	    else if(el==arr[i]){
	        c++;
	    }
	    else if(el!=arr[i]){
	        c--;
	    }
	}
	int c1=0;
	for(int i=0;i<n;i++){
	    if(arr[i]==el) c1++;
	}
	if(c1>n/2) cout<<el;
	cout<<-1;

}


    // TC=O(N) + O(N) {the second O(N) will be there if there is no guarantee of a fix majority element availability}
    // SC=O(1) as there is no use of any extra space 
    
