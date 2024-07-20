// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> enemies, vector<int> armies) {
	// 여기에 코드를 작성해주세요.
	int answer = 0;
	
	sort(enemies.begin(), enemies.end());
	sort(armies.begin(), armies.end());
	
	for(int i=0; i<armies.size(); i++) {
		for(int j=0; j<enemies.size(); j++) {
			if(enemies[j] == 0) continue;
			if(armies[i] >= enemies[j]) {
				answer++;
				enemies[j] = 0;
			}
		}
	}
	
	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
	vector<int> enemies1 = {1, 4, 3};
	vector<int> armies1 = {1, 3};
	int ret1 = solution(enemies1, armies1);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Solution: return value of the function is " << ret1 << " ." << endl;

	vector<int> enemies2 = {1, 1, 1};
	vector<int> armies2 = {1, 2, 3, 4};
	int ret2 = solution(enemies2, armies2);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Solution: return value of the function is " << ret2 << " ." << endl;	
}
