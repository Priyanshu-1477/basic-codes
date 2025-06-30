#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int m;
	cin>>m;
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	string s[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	if (n>arr[m-1]) cout<<"This month has only "<<arr[m-1]<<" days."<<endl<<"Please enter a valid date.";
	int day;
	cin>>day;
	if(day>7) {
	    cout<<"\nThere are only 7 days in a week."<<endl<<"Enter a valid day.";
	}
	int sum=0;
	int y=0;
	int i=m-1;
	while(i<12){
	    sum+=arr[i]%7;
	    y++;
	    i++;
	    if(sum%7==0){
	        break;
	    }
	    else if(i==11) {
	        i=0;
	    }
	}
	cout<<"The date "<<n<<" will repeat on "<<s[day-1]<<" after "<<y/12<<" years and "<<y%12<<" months";
}
