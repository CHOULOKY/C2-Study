// You may use include as below.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    // Write code here.
    int answer = 0;
    
    int arr[n][n];
    for(int i=0; i<n; i++) {
    	for(int j=0; j<n; j++) {
    		arr[i][j] = 0;
		}
	}
    int x=0, y=-1;
    int reverse=1, loop=n, value=0;
    while(loop != 0) {
    	for(int i=0; i<loop; i++) {
    		arr[x][y+=reverse] = ++value;
		}
		loop = loop - 1;
		for(int i=0; i<loop; i++) {
			arr[x+=reverse][y] = ++value;
		}
		reverse = -reverse;
	}
	
	int a=0, b=0;
	while(a<n && b<n) {
		answer += arr[a++][b++];
	}
    
    return answer;
}

// The following is main function to output testcase.
int main() {
    int n1 = 3;
    int ret1 = solution(n1);
    
    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret1 << " ." << endl;
    
    int n2 = 2;
    int ret2 = solution(n2);
    
    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret2 << " ." << endl;
}
