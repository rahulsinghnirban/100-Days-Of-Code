#include<iostream>
using namespace std;
int main () {
	string s;
	cin>>s;
	int count = 0;
	int max=0;

	for(int i=1; i<s.length(); i++){

		if(s.at(i) == s.at(i-1)){
			count++;
		}
		else{
			count = 0;
		}
		if( count > max){
			max = count;
		}

		
	}

	cout<<max+1;
}
