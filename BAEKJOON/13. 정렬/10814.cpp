// Title: 나이순 정렬
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

struct Member {
	int age;
	string name;
};
bool compare(const Member& a, const Member& b) {
	return a.age < b.age;
}
int main(void) {
	int n; cin>>n;
	Member member[n];
	for(int i=0; i<n; i++) cin >> member[i].age >> member[i].name;
	stable_sort(member, member+n, compare);
	for(auto iter:member) cout << iter.age << ' ' << iter.name << '\n';
}
