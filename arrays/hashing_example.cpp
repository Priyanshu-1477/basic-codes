// Hashing using mapping

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	map<int,int> mpp;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    mpp[arr[i]]++;
	}
	
	
	int q;
	cin>>q;
	while(q--){
	    int num;
	    cin>>num;
	    cout<< mpp [num] <<endl;
	}
}




// Hashing /for strings


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }

}



// Hashing without mapping























