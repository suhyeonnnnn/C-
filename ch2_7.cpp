/* 이스케이프 문자를 사용하는 프로그램 */
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello\n"; // \n은 endl과 같은 역할
    cout << "Hi\t friends." << endl; // 탭문자가 들어감
    cout << "Buenos dias \bamigos." << endl; // \b는 이전 글자를 삭제(띄어쓰기 하나를 삭제)
    cout << "Hello\rBonjour mes amis." << endl; // \r은 줄의 앞부분으로 커서를 옮기고 다시 입력(따라서 앞의 내용이 삭제)
    cout << "This is a single quote\'." << endl; // 작은 따옴표 출력
    cout << "This is a double quote\"." << endl; // 큰 따옴표 출력
    cout << "This is how to pritn a backslash \\."; // 역 슬래시 출력
    return 0;
}