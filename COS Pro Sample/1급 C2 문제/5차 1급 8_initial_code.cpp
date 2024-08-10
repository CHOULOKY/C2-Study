#include <iostream>

using namespace std;

int func_a(int a, int b);
int func_b(int n);
bool func_c(int p, int q);

int func_a(int a, int b) {
    int mod = a % b;
    
    while(mod > 0) {
        a = b;
        b = mod;
        mod = a % b;
    }

    return b;
}

int func_b(int n) {
    int answer = 0;

    for(int i = 1; i <= n; i++) {
        if(func_c(n, i))
            answer++;
    }

    return answer;
}


bool func_c(int p, int q) {
    if(p % q == 0)
        return true;
    else
        return false;
}

int solution(int a, int b, int c) {
    int answer = 0;
    
    int gcd = func_a(func_a(a, b), c);
    answer = func_b(gcd);

    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    int a = 24;
    int b = 9;
    int c = 15;
    int ret = solution(a, b, c);

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret << " ." << endl;
}
