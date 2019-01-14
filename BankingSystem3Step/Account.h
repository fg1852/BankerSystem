/*
* 시스템명: Banking System 3 Step
* 파일이름: Account.h
*/

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
private:
	int accID;
	int balance;
	char * cusName;
public:
	Account(int ID, int money, char * name);
	Account(const Account & ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};
#endif