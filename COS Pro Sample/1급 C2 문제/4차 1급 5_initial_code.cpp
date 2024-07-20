#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 0; i < n; i++) {
        answer += to_string(i+1);
        reverse(answer.begin(),answer.end());
    }
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int n = 5;
    string ret = solution(n);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << "." << endl;
}
