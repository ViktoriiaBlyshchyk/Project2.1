#include "IntPower.h"

IntPower::IntPower()
{
	first = 1;
	second = 0;
}

IntPower::IntPower(float x, int y = 0)
{
	first = x;
	second = y;
}

IntPower::IntPower(const IntPower& i)
{
	first = i.first;
	second = i.second;
}

IntPower::~IntPower()
{ }

void IntPower::SetFirst(float x)
{
	first = x;
}
void IntPower::SetSecond(int y)
{
	second = y;
}

float IntPower::GetFirst() const
{
	return first;
}

int IntPower::GetSecond() const
{
	return second;
}

IntPower& IntPower::operator = (const IntPower& i)
{
	first = i.first;
	second = i.second;
	return *this;
}


IntPower::operator string () const
{
	stringstream ss;
	ss << "First = " << first << endl;
	ss << "Second = " << second << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const IntPower& i)
{
	out << string(i);
	return out;
}

istream& operator >> (istream& in, IntPower& i)
{
	cout << "Input complex value: " << endl;
	cout << "First = "; in >> i.first;
	cout << "Second = "; in >> i.second;
	cout << endl;
	return in;
}

IntPower& IntPower::operator ++()
{
	first++;
	return *this;
}

IntPower& IntPower::operator --()
{
	first--;
	return *this;
}

IntPower IntPower::operator ++(int)
{
	IntPower t(*this);
	second++;
	return t;
}

IntPower IntPower::operator --(int)
{
	IntPower t(*this);
	second--;
	return t;
}

void IntPower::power()
{
	double p;
	p = pow(first, second);
	cout << "p = " << p << endl;
}
