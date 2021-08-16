#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int count = 0;
	cout<<s.at(0);

	for(int i=1; i<s.length(); i++){
		if(s.at(i) == s.at(i-1)){
			count++;
		}
		else{
			if(count != 0){
				cout<<count+1;
			}

			cout<<s.at(i);
			count=0;
		}
	}
	if(count != 0){
		cout<<count+1;
	}
}
