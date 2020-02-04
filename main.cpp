#include <iostream>
#include "Account.h"
using namespace std;
const int NAME_LEN = 20;
int main() {
	char name[NAME_LEN];
	Account a1;
	Account a2(1, 1000, "문영진");
	//a1에 관한 정보 입력
	cout << "이름 : ";
	cin >> name;
	a1.SetName(name);
	a1.SetId(10);
	a1.InMoney(5000);//예금
	a1.OutMoney(2000);//출금
	a1.ShowAllData();
	a2.ShowAllData();
	return 0;
}