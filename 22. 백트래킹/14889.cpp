// Title: 스타트와 링크
// Solved by VICLOKY

#include <iostream>
#include <algorithm>
using namespace std;

int n, result=1e9;
vector<vector<int>> vec;

void cal(vector<int>& picked, int count) {
	if(count == n/2) {
		vector<int> ateam(picked), bteam;
		for(int i=0; i<n; i++) {
			if(find(ateam.begin(), ateam.end(), i) == ateam.end()) bteam.push_back(i);
		}
		int ascore=0, bscore=0;
		for(int i=0; i<n/2; i++) {
			for(int j=0; j<n/2; j++) {
				ascore += vec[ateam[i]][ateam[j]];
				bscore += vec[bteam[i]][bteam[j]];
			}
		}
		result = min(result, abs(ascore - bscore));
		return;
	}
	int start = picked.empty() ? 0 : picked.back()+1;
	for(int i=start; i<n; i++) {
		picked.push_back(i);
		cal(picked, count+1);
		picked.pop_back();
	}
}
int main(void) {
	cin >> n;
	for(int i=0; i<n; i++) {
		vec.push_back(vector<int>(n));
		for(int j=0; j<n; j++) {
			cin >> vec[i][j];
		}
	}
	vector<int> picked;
	cal(picked, 0);
	cout << result;
}
