#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;

	cout<<s.at(0);

	for(int i=1; i<s.length(); i++){
		if(s.at(i) != s.at(i-1)){
			cout<<s.at(i);
		}
	}
}
