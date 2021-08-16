#include<iostream>
#include<cstring>
using namespace std;
int main () {
	string s;
	getline(cin, s);
	int sp = s.length()+1;
	
	int store = sp;

	for(int i=s.length()-1; i>=0; i--){
		
		if(isspace(s.at(i))){
			
			sp = store-i; // 7 - 3 = 4

			cout<<s.substr(i+1, sp-1)<<" ";

			store = i; // 7

		}

		if(i==0 && store == sp){
			cout<<s.substr(i, sp);
		}
		else if(i==0){
			cout<<s.substr(i, store);
		}

	}
}
