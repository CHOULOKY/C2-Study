#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	string str[5]; int maxLength=0;
	for(int i=0;i<5;i++){
		cin>>str[i];
		maxLength = max(maxLength, (int)str[i].length());
	}
	for(int i=0;i<maxLength;i++){
		for(int j=0;j<5;j++){
			if(str[j].length()<=i)continue;
			cout<<str[j][i];
		}
	}
}

