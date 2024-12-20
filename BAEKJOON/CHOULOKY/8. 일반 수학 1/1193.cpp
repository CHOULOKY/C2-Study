#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str;int a;cin>>str>>a; int result=0;
	for(int i=str.length()-1;i>=0;i--){
		int num;
		if(isdigit(str[i])) num=str[i]-'0';
		else num=str[i]-'A'+10;
		result+=num*pow(a,abs(i-((int)str.length()-1)));
	}
	cout<<result;
}

