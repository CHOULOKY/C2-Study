// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(string s1, string s2, int p, int q) {
    // 여기에 코드를 작성해주세요.
    string answer = "";
    
    int k=0, s1res=0;
    for(int i=s1.size()-1; i>=0; i--) {
    	s1res += pow(p, k++) * (s1[i]-'0');
	}
	k=0;
	int s2res=0;
	for(int i=s2.size()-1; i>=0; i--) {
    	s2res += pow(p, k++) * (s2[i]-'0');
	}
	int res = s1res + s2res;
	
	while(res != 0) {
		answer += to_string(res%q);
		res /= q;
	}
	reverse(answer.begin(), answer.end());
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    string s1 = "112001";
    string s2 = "12010";
    int p = 3;
    int q = 8;
    string ret = solution(s1, s2, p, q);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}
