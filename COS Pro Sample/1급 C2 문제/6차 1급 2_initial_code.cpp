// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int K, vector<string> words) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    
    int line=0;
    for(auto iter:words) {
    	if(line + iter.size() > 10) {
    		answer++;
    		line = iter.size()+1;
		}
		else {
			line += iter.size() + 1;
		}
	}
    
    return answer+1;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int K = 10;
    vector<string> words = {"nice", "happy", "hello", "world", "hi"};
    int ret = solution(K, words);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << " .";
}
