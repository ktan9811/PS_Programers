//https://school.programmers.co.kr/learn/courses/30/lessons/132267
#include <string>
#include <vector>

using namespace std;
//a 지불하는 콜라병, b 받는 콜라, n 병 개수 
int solution(int a, int b, int n) {
    int answer = 0;
    int temp = 0;
    
    while (a <= n)
    {
        temp = (n / a) * b;
        answer += temp;     
        n = n % a + temp;
    }
    return answer;
}