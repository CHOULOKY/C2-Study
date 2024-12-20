// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int hour, int minute) {
    // 여기에 코드를 작성해주세요.
    string answer = "";
    
    hour = hour*5;
    
    answer = to_string(abs(hour - minute) * 6) + ".0";
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int hour = 3;
    int minute = 0;
    string ret = solution(hour, minute);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << "." << endl;
}
