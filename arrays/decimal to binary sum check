// check the sum of a set of decimal numbers converted in binary format and when the sum of any element matches to the checking number replace that position with one and if it 
// does not match erplace it with 0. the new number formed is then to be converted to decimal then the output is to be displayed.

#include <bits/stdc++.h>
using namespace std;

int binary(int n){
    int a=n;
	int b=n;
	int c=0;
	while (a>0){
	    a=a/2;
	    c++;
	}
	int l;
	int t[c];
	int x=0;
	for(int i=0;i<c;i++){
	    l=b%2;
	    b=b/2;
	    t[c-i-1]=l;
	}
	for(int i=0;i<c;i++){
	    x=x*10+t[i];
	}
	return x;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int x=0;
    for(int i=0;i<n;i++){
        x=x+binary(arr[i]);
    }
    int f=x;
    int g=x;
    int t=0;
    int z;
    while(f>0){
        f=f/10;
        t++;
    }
    int s[t];
    for(int i=0;i<t;i++){
        z=g%10;
        g=g/10;
        s[t-i-1]=z;
    }
    for(int i=0;i<t;i++){
        if(s[i]==k) s[i]=1;
        else s[i]=0;
    }
    int num=0;
    for(int i=0;i<t;i++){
        num = num + s[i]*pow(2,t-i-1);
    }
    cout<<num;
}
