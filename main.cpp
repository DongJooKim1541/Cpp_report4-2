#include <iostream>
#include "Account.h"
using namespace std;
const int NAME_LEN = 20;
int main() {
	char name[NAME_LEN];
	Account a1;
	Account a2(1, 1000, "������");
	//a1�� ���� ���� �Է�
	cout << "�̸� : ";
	cin >> name;
	a1.SetName(name);
	a1.SetId(10);
	a1.InMoney(5000);//����
	a1.OutMoney(2000);//���
	a1.ShowAllData();
	a2.ShowAllData();
	return 0;
}