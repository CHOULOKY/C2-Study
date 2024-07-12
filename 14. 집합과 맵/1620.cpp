// Title: 나는야 포켓몬 마스터 이다솜
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n, m; cin >> n >> m;
	map<string, int> stringM;
	map<int, string> intM;
	for(int i=0; i<n; i++) {
		string str; cin >> str;
		stringM[str]=i+1;
		intM[i+1]=str;
	}
	for(int i=0; i<m; i++) {
		string str; cin >> str;
		if(atoi(str.c_str())==0) cout << stringM[str];
		else cout << intM[stoi(str)];
		cout << '\n';
	}
}
