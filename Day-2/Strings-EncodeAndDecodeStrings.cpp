#include<iostream>
#include<cstring>
using namespace std;
int main () {
	int n;
	cin>>n;
	string s[n];
	// getline(cin, s);
	cout<<"[";

	for(int i=0; i<n; i++){
		cin>>s[i];

		
		
		if(i==n-1){
			cout<<s[i];
		}
		else{
			cout<<s[i]<<", ";
		}
	}

	cout<<"]";

}
