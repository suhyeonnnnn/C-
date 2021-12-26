/* 불 변수와 값을 사용하는 프로그램 */
#include <iostream>
using namespace std;

int main()
{
    // 변수 선언
    bool x = 123; // 123은 1로 변환 (true)
    bool y = -8; // -8은 1로 변환 (true)
    bool z = 0; // 0은 0으로 변환 (false)
    bool t = -0; // -0은 0으로 변환 (false)
    bool u = true; // true는 1로 출력
    bool v = false; // false 는 0으로 출력

    // 값 출력
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << t << endl; 
    cout << u << endl;
    cout << v << endl;

    return 0;
}