// Title: 약수들의 합
// Solved by VICLOKY

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n;
	while(cin >> n) {
		if(n==-1) break;
		int sum=0;
		vector<int> vec;
		for(int i=1; i<=n/2; i++) {
			if(n%i==0) {
				sum += i;
				vec.push_back(i);
			}
		}
		if(sum==n) {
			cout << n << " = ";
			for(int j = 0; j < vec.size(); j++) {
                cout << vec[j];
                if(j < vec.size() - 1) cout << " + ";
            }
			cout << '\n';
		}
		else cout << n << " is NOT perfect.\n";
	}
}
