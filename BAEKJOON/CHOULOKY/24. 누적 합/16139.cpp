#include <iostream>
using namespace std;

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	string str; cin >> str;
	int arr[str.length()][26] = {0};
	arr[0][str[0]-'a']++;
	for(int i=1; i<str.length(); i++) {
		for(int j=0; j<26; j++) {
			arr[i][j] = arr[i-1][j];
		}
		arr[i][str[i]-'a']++;
	}
	
	int n; cin >> n;
	while(n--) {
		char c; cin >> c;
		int a, b; cin >> a >> b;
		
		int index = c - 'a';
		int result = arr[b][index];
        if(a > 0) result -= arr[a-1][index];
        
		cout << result << '\n';
	}
}
