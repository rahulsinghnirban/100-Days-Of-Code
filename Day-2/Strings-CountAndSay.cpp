#include<iostream>
using namespace std;

string countnsay(int n){

	if(n == 1){
		return "1";
	}
	if(n == 2){
		return "11";
	}

	string s="11";

	for(int i=3; i<=n; i++){

		int c = 1;
		s = s+"#";
		string t = "";

		for(int i=1; i<s.length(); i++){

			if(s[i] == s[i-1]){
				c++;
			}

			else{
				t = t + to_string(c); // 11122
				t = t + s[i-1]; // 111221
				c=1;
			}

		}

		s = t;
	}

	return s;

}

int main () {
	int n;
	cin>>n;

	string ans = countnsay(n);
	
	cout<<ans;
}
