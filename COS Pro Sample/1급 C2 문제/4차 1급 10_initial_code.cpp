// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool Sosu(int num) {
	if(num < 2) return false;
	for(int i=2; i<sqrt(num); i++) {
		if(num%i==0) return false;
	}
	return true;
}
int solution(int a, int b) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    
    for(int i=2; i<a+b/2; i++) {
    	if(Sosu(i)) {
    		if(i*i >= a && i*i <=b) answer++;
    		else if(i*i*i >=a && i*i*i <=b) answer++;
		}
	}
    
    return answer;
}


// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int a = 6;
    int b = 30;
    int ret = solution(a, b);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << "." << endl;
   
    return 0;
}
