// You may use include as below.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string pos) {
    // Write code here.
    int answer = 0;
    
    int x=pos[0]-'A'+1, y=pos[1]-'0';
    int a[8] = {2, 2, 1, -1, -2, -2, 1, -1};
    int b[8] = {1, -1, 2, 2, 1, -1, -2, -2};
    for(int i=0; i<8; i++) {
    	if(x+a[i] >=1 && x+a[i] <= 8) {
    		if(y+b[i] >=1 && y+b[i] <= 8) {
    			answer++;
			}
		}
	}
    
    return answer;
}

// The following is main function to output testcase.
int main() {
    string pos = "A7";
    int ret = solution(pos);

    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}
