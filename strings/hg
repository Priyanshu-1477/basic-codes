// earliest repeating character
 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    cin>>s;
    int n;
    n=s.size();
    int count=0;
    for( int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(s[j]==s[i]) {
                count++;
                cout<<s[i];
                break;
            }
        }
        if(count==1) break;   
    }
}



// repeated character present first in a string



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int n;
	n=s.size();
	int count=0;
    for( int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s[j]==s[i]) {
                count++;
                cout<<s[i];
                break;
            }
        }
        if(count==1) break;
        
        
    }
    
}
