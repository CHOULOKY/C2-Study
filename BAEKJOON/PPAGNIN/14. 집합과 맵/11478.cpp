// Title: ���� �ٸ� �κ� ���ڿ��� ����
// Solved by VICLOKY

#include <iostream>
#include <set>
using namespace std;

int main(void) {
	string str; cin >> str;
	set<string> st;
	string temp;
	for(int i=0; i<str.size(); i++) {
		temp = "";
		for(int j=i; j<str.size(); j++) {
			temp += str[j];
			st.insert(temp);
		}
	}
	cout << st.size();
}
