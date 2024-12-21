#include <iostream>
#include <vector>
using namespace std;

int GetGCD(int a, int b) {
	int temp, left = a, right = b;
	while(right != 0) {
		temp = left % right;
		left = right;
		right = temp;
	}
	return left;
}

int main(void) {
	cin.tie(0); ios::sync_with_stdio(false);
	
	int n;
    cin >> n;

    vector<int> arr(n);
	int maxnum;
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    	if(i == 0) continue;
    	else if(i == 1) maxnum = arr[1] - arr[0];
        else maxnum = GetGCD(arr[i] - arr[i - 1], maxnum);
    }
	
	int minVal = arr[0];
    int maxVal = arr[n - 1];
    
    int count = 0;
    for (int i = minVal; i <= maxVal; i += maxnum) {
        count++;
    }
    
    cout << count - n;
}
