/* 변수를 초기화할 때 리터럴을 사용하는 프로그램 */
#include <iostream>
using namespace std;

int main()
{
    // 변수 선언과 초기화
    int x = -1234; // Ok
    unsigned int y = 1235; // Ok
    unsigned int z = -2345; // 논리적 오류, 음수 값이 양수값으로 바뀜
    unsigned int t = 14.56; // 소수점 아래 부분이 잘림

    // 초기화된 값 출력
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << t;

    return 0; 
}