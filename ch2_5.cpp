/* 리터럴 값을 단독으로 사용하는 프로그램 */
#include <iostream>
using namespace std;

int main()
{
    // 변수 선언
    int x;
    unsigned long int y;

    // 할당
    x = 1234;
    y = -24567; // 잘못된 값(부호없는 정수를 나타내는 변수인데, 음수를 할당해서 발생하는 문제)

    // 출력
    cout << x << endl;
    cout << y << endl;
    cout << 1234 << endl;
    cout << 14567L << endl;
    return 0;
}