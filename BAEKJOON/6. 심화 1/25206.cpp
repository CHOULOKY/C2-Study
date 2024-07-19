// Title: 너의 평점은
// Solved by VICLOKY

#include <iostream>
#include <map>
using namespace std;

int main(void) {
	string title, _grade; float score, grade, total, scoreSum=0;
	map<string, float> m;
	string str[9] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
	float temp = 4.5f;
	for(auto iter:str) {
		m.insert({iter, temp});
		temp -= 0.5f;
	}
	m["F"] = m["P"] = 0;
	for(int i=0; i<20; i++) {
		cin >> title >> score >> _grade;
		grade = m[_grade];
		if(_grade!="P") {
			total += score * grade;
			scoreSum += score;
		}
	}
	cout << total / scoreSum;
	
	return 0;
}
