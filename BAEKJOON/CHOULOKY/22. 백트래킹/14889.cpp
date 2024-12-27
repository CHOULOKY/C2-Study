#include <iostream>
using namespace std;

int n, result=1e9;
int board[20][20];
bool picked[20]={false};

void pick(int index, int count) {
	if(count == 0) {
		int aresult, bresult;
		aresult = bresult = 0;
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(picked[i] && picked[j]) aresult += board[i][j];
				else if(!picked[i] && !picked[j]) bresult += board[i][j];
			}
		}
		
		result = min(result, abs(aresult-bresult));
		
		return;
	}
	
	for(int i=index; i<n; i++) {
		picked[i] = true;
		pick(i+1, count-1);
		picked[i] = false;
	}
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> board[i][j];
		}
	}
	
	pick(0, n/2);
	
	cout << result;
}
