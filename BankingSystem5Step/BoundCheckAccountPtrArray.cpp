/*
* 시스템명: Banking System 5 Step
* 파일이름: BoundCheckAccountPtrArray.cpp
*/

#include "BankingCommonDecl.h"
#include "BoundCheckAccountPtrArray.h"

template <typename T>
BoundCheckAccountPtrArray<T>::BoundCheckAccountPtrArray(int len) :arrlen(len)
{
	arr = new T[len];
}

template <typename T>
T& BoundCheckAccountPtrArray<T>::operator[] (int idx)
{
	if (idx<0 || idx >= arrlen)
	{
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}

template <typename T>
T BoundCheckAccountPtrArray<T>::operator[] (int idx) const
{
	if (idx<0 || idx >= arrlen)
	{
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return arr[idx];
}

template <typename T>
int BoundCheckAccountPtrArray<T>::GetArrLen() const
{
	return arrlen;
}

template <typename T>
BoundCheckAccountPtrArray<T>::~BoundCheckAccountPtrArray()
{
	delete[]arr;
}