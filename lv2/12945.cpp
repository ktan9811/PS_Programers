//https://school.programmers.co.kr/learn/courses/30/lessons/12945#
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int answer = 0;
    int pstate = 0, cstate = 1, nstate;
    for (int i = 0; i < n; i++)
    {
        nstate = (pstate + cstate) % 1234567;
        pstate = cstate;
        cstate = nstate;
    }
    
    answer = pstate;
    return answer;
}