#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func_a(string times){
    int hour = stoi(times.substr(0, 2));
    int minute = stoi(times.substr(3));
    return hour*60 + minute;
}

int solution(vector<string> subway_times, string current_time) {
    int current_minute = func_a(current_time);
    int INF = 1000000000;
    int answer = INF;
    for(int i = 0; i < subway_times.size(); ++i){
        int subway_minute = func_a(subway_times[i]);
        if(subway_minute >= current_minute){
            answer = subway_minute - current_minute;
            break;
        }
    }
    if(answer == INF)
        return -1;
    return answer;
}

// The following is main function to output testcase.
int main() {
    vector<string> subway_times1 = {"05:31", "11:59", "13:30", "23:32"};
    string current_time1 = "12:00";
    int ret1 = solution(subway_times1, current_time1);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret1 << " ." << endl;

    vector<string> subway_times2 = {"14:31", "15:31"};
    string current_time2 = "15:31";
    int ret2 = solution(subway_times2, current_time2);

    // Press Run button to receive output.
    cout << "Solution: return value of the function is " << ret2 << " ." << endl;
}
