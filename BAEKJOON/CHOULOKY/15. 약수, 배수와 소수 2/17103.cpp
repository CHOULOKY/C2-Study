#include <iostream>
#include <vector>
using namespace std;

#define MAX_SIZE 1000001

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	vector<bool> vec(MAX_SIZE, false);
	vec[0] = vec[1] = true;
	for(int i=2; i*i<=MAX_SIZE; i++) {
		if(vec[i] == true) continue;
		for(int j=i+i; j<=MAX_SIZE; j+=i) {
			vec[j] = true;
		}
	}
	
	int n, num; cin >> n;
	while(n--) {
		cin >> num;
		
		int result = 0;
		for(int i=2; i<=num/2; i++) {
			if(!vec[i] && !vec[num-i]) result++;
		}
		
		cout << result << '\n';
	}
}
