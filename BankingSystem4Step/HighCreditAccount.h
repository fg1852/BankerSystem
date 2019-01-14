/*
* �ý��۸�: Banking System 4 Step
* �����̸�: HighCreditAccount.h
*/

#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	int specialRate;
public:
	HighCreditAccount(int ID, int money, char * name, int rate, int special)
		: NormalAccount(ID, money, name, rate), specialRate(special)
	{  }
	virtual void Deposit(int money)
	{
		NormalAccount::Deposit(money);        // ���ݰ� �����߰� 
		Account::Deposit(money*static_cast<int>(specialRate / 100.0));   // Ư�������߰�
	}
};
#endif