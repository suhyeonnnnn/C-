/* 3회 거래 후의 계좌 잔액을 구하는 프로그램 */
#include <iostream>
using namespace std;

int main()
{
    // 변수 선언
    int balance = 0;
    int transaction;

    // 첫번째 거래 후에 잔액 조정
    cout << "첫번째 거래 금액 입력: ";
    cin >> transaction;
    balance = balance + transaction;

    // 두번째 거래 후에 잔액 조정
    cout << "두번째 거래 금액 입력: ";
    cin >> transaction;
    balance = balance + transaction;

    // 세번째 거래 후에 잔액 조정
    cout << "세번째 거래 금액 입력: ";
    cin >> transaction;
    balance = balance + transaction;

    // 최종 잔액 출력
    cout << "계좌의 최종 잔액은 " << balance << "달러입니다. ";
    return 0; 

}