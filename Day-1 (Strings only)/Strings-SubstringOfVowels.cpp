#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int count = 0;
	int max = 0;

	// if(s.length() == 1){
	// 	if(s.at(0) == 'a' || s.at(0) == 'e' || s.at(0) == 'i' || s.at(0) == 'o' || s.at(0) == 'u'){
	// 		cout<<1;
	// 		return 0;
	// 	}
	// }

	for(int i=0; i<s.length(); i++){
		if(s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u'){
			count++;
		}
		else{
			count = 0;
		}
		if(count > max){
			max = count;
		}
	}

	cout<<max;
}
