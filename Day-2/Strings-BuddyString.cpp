#include<iostream>
using namespace std;
int main () {
	string s1, s2;
	cin>>s1>>s2;

	for(int i=0; i<s1.length(); i++){

		for(int j=i+1; j<s1.length(); j++){

			if(s1 == s2){
				cout<<"true";
				return 0;
			}
			else{

				char temp = s1.at(i);
				s1.at(i) = s1.at(j);
				s1.at(j) = temp;

			}

		}

	}

	cout<<"false";
}
