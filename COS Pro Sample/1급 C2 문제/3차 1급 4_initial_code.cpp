// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s1, string s2) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    
    int len = min(s1.size(), s2.size());
    for(int i=0; i<len; i++) {
    	string a = s1.substr(0, i+1);
    	string b = s2.substr(s2.size()-i-1);
    	if(a==b) answer = i+1;
	}
	int result=0;
	for(int i=0; i<len; i++) {
		string a = s1.substr(s1.size()-i-1);
		string b = s2.substr(0, i+1);
		if(a==b) result = i+1;
	}
    answer = s1.size() + s2.size() - max(answer, result);
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    string s1 = "ababc";
    string s2 = "abcdab";
    int ret = solution(s1, s2);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << "." << endl;
}
