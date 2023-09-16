#pragma once
class Counter
{
private:
	int count;
	int step;
public:
	Counter() :count(0), step(1) {}
	Counter(int counter):count(counter), step(1){}
	void setIncrementStep(int step_val);
	int getCount();
	void increment();
	void resetCount();
	Counter operator++();
	Counter operator++(int);
	Counter operator+(Counter c1) const;
	bool operator>(Counter c1);
	bool operator>=(Counter c1);
	bool operator<(Counter c1);
	bool operator<=(Counter c1);
	bool operator==(Counter c1);
	bool operator!=(Counter c1);
	void operator+=(Counter c1);


};

