// Title: ∫Ì∑¢¿Ë
// Solved by VICLOKY

#include <iostream>
using namespace std;

int main(void) {
	int n,m; cin>>n>>m;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int result=0;
	for(int i=0; i<n-2; i++) {
		for(int j=i+1; j<n-1; j++) {
			for(int k=j+1; k<n; k++) {
				if(a[i]+a[j]+a[k] <= m)
					result = max(result, a[i]+a[j]+a[k]);
			}
		}
	}
	cout << result;
}

