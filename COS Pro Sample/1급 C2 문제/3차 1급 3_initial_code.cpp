// 다음과 같이 include를 사용할 수 있습니다.
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<string> bishops) {
    // 여기에 코드를 작성해주세요.
    int answer = 0;
    
    int arr[8][8];
    for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			arr[i][j] = 0;
		}
	}
    
    queue<pair<pair<int, int>, int>> que;
    for(auto iter:bishops) {
    	int x = iter[0]-'A';
    	int y = iter[1]-'1';
    	for(int i=0; i<4; i++) que.push({{x, y}, i});
	}
	
	int dx[4] = {1, -1, -1, 1};
	int dy[4] = {1, 1, -1, -1};
	while(!que.empty()) {
		int x = que.front().first.first;
		int y = que.front().first.second;
		arr[x][y] = 1;
		int dir = que.front().second;
		que.pop();
		int nextX = x + dx[dir];
		int nextY = y + dy[dir];
		if(nextX >= 0 && nextX < 8 && nextY >= 0 && nextY < 8) {
			que.push({{nextX, nextY}, dir});
		}
	}
	
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(arr[i][j] == 0) answer++;
		}
	}
    
    return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    vector<string>  bishops1 = {"D5"};
    int ret1 = solution( bishops1);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret1 << "." << endl;

    vector<string>  bishops2 = {"D5", "E8", "G2"};
    int ret2 = solution( bishops2);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Solution: return value of the function is " << ret2 << "." << endl;
}
