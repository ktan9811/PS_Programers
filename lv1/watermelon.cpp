//https://school.programmers.co.kr/learn/courses/30/lessons/12922
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string wm = "수박";
    int temp;
    for (int i = 0; i < n; i++)
    {
        temp = (i % 2) * 3;
        answer += wm[temp];
        answer += wm[temp + 1];
        answer += wm[temp + 2];
    }
    
    return answer;
}