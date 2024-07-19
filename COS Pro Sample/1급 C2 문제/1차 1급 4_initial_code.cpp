// You may use include as below.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(long long num) {
    // Write code here.
    long long answer = 0;
    
    while(1) {
    	bool isOK = true;
    	string str = to_string(++num);
    	for(int i=0; i<str.size(); i++) {
    		if(str[i] == '0') {
    			isOK = false;
    			break;
			}
		}
		if(isOK) break;
	}
    
    return (answer = num);
}

// The following is main function to output testcase.
int main() {
    long long num = 9949999;
    long long ret = solution(num);

    // Press Run button to receive output. 
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}
