#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account {
private:
	int id, balance;
	char* name;
public:
	Account();
	Account(int id1, int bal1, char* name1);
	Account(const Account& op);
	~Account();
	void SetName(char* name1);
	void SetId(int id1);
	void InMoney(int val);
	void OutMoney(int val);
	void ShowAllData();
};
#endif
