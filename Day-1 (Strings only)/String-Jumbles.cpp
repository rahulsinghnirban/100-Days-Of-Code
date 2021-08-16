#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i=0; i<s1.length(); i++){
        if(s1.at(i) != s2.at(i)){
            cout<<"False";
            return 0;
        }
    }

    cout<<"True";
}
