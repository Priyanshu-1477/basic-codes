#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x=0;
	int w;
	
 //power of 2 which is just less than n will be subtracted from n.

  while(pow(2,x)<n){
	    x=x+1;
	}
	
 //if 2^x is just less than n then it will increase value of x by 1 but it will exceed from n. so  using the follwing codes.

  if(pow(2,x)==n){
	    x=x;
	}
	else {
	    x=x-1;
	}
    int j=pow(2,x);    
    
  //final formula by logic.

    w=2*(n-j)+1;
    cout<<w;
    

}
