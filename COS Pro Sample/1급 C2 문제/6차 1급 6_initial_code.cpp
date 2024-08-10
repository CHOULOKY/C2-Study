#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}

int solution(vector<vector<int>> grid) {
    int answer = 0;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            for(int k = j + 1; k < 4; k += 2)
                answer = max(answer, max(grid[i][j] + grid[i][k], grid[j][i] + grid[k][i]));
    return answer;
}


int main() {
	vector<vector<int>> grid = {{1, 4, 16, 1}, {20, 5, 15, 8}, {6, 13, 36, 14}, {20, 7, 19, 15}};
	int ret = solution(grid);

	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	cout << "Solution: return value of the function is " << ret << " ." << endl;
}
