/*
* 시스템명: Banking System 5 Step
* 파일이름: AccountHandler.h
*/

#ifndef __ACCOUN_HANDLER_H__
#define __ACCOUN_HANDLER_H__

#include "Account.h"
#include "BoundCheckAccountPtrArray.h"
#include "BoundCheckAccountPtrArray.cpp"

class AccountHandler
{
private:
	BoundCheckAccountPtrArray<Account *> accArr;
	int accNum;
public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();
protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
};
#endif