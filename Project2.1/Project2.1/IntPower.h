#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class IntPower
{
private:
	float first;
	int second;

public:
	IntPower();
	IntPower(float, int);
	IntPower(const IntPower&);
	~IntPower();

	void SetFirst(float);
	void SetSecond(int);
	float GetFirst() const;
	int GetSecond() const;

	IntPower& operator = (const IntPower&);
	operator string() const;

	friend ostream& operator << (ostream&, const IntPower&);
	friend istream& operator >> (istream&, IntPower&);

	IntPower& operator ++();
	IntPower& operator --();
	IntPower operator ++(int);
	IntPower operator --(int);

	void power();
};

