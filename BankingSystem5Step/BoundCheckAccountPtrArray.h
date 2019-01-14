/*
* 시스템명: Banking System 5 Step
* 파일이름: BoundCheckAccountPtrArray.h
*/

#ifndef __ACCOUN_ARRAY_H__
#define __ACCOUN_ARRAY_H__

template <typename T>
class BoundCheckAccountPtrArray
{
private:
	T * arr;
	int arrlen;

	BoundCheckAccountPtrArray(const BoundCheckAccountPtrArray& arr) { }
	BoundCheckAccountPtrArray& operator=(const BoundCheckAccountPtrArray& arr) { }

public:
	BoundCheckAccountPtrArray(int len = 100);
	T& operator[] (int idx);
	T operator[] (int idx) const;
	int GetArrLen() const;
	~BoundCheckAccountPtrArray();
};

#endif