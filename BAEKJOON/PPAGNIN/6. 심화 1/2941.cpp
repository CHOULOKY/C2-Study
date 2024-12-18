// Title: 크로아티아 알파벳
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	string str; cin >> str;
	string croatian[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	int result = str.size();
	for(auto iter:croatian) {
		size_t pos = 0;
		while((pos=str.find(iter, pos)) != string::npos) {
			result -= (iter.size()-1);
			if(iter=="z=" && str[pos-1]=='d') result++;
			pos += iter.size();
		}
	}
	cout << result;
	
	return 0;
}
