#include <iostream>
#include "Account.h"
using namespace std;
Account::Account() {
	id = 0; balance = 0;
	name = NULL;
}
Account::Account(int id1, int bal1, char* name1) {
	id = id1; balance = bal1;
	name = new char[strlen(name1) + 1];
	strcpy_s(name, strlen(name1) + 1, name1);
}
Account::Account(const Account& op) {
	id = op.id; balance = op.balance;
	name = new char[strlen(op.name) + 1];
	strcpy_s(name, strlen(op.name) + 1, op.name);
}
Account::~Account() {
	if (name) {
		delete[] name;
		name = NULL;
	}
}
void Account::SetName(char* name1) {
	name = new char[strlen(name1) + 1];
	strcpy_s(name, strlen(name1) + 1, name1);
}
void Account::SetId(int id1) {
	id = id1;
}
void Account::InMoney(int val) {
	balance += val;
}
void Account::OutMoney(int val) {
	if (balance >= val) balance -= val;
	else cout << "잔액이 부족합니다." << endl;
}
void Account::ShowAllData() {
	cout << "id : " << id << endl;
	cout << "balance: " << balance << endl;
	cout << "name : " << name << endl;
}