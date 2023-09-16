#include "Counter.h"

void Counter::setIncrementStep(int step_val)
{
	step = step_val;
}

int Counter::getCount()
{
	return count;
}

void Counter::increment()
{
	count += step;
}

void Counter::resetCount()
{
	count = 0;
}

Counter Counter::operator++()
{
	return Counter(count++);
}

Counter Counter::operator++(int)
{
	return Counter(++count);
}

Counter Counter::operator+(Counter c1) const
{
	return Counter(count + c1.count);
}

bool Counter::operator>(Counter c1)
{
	return (count > c1.count);
}

bool Counter::operator>=(Counter c1)
{
	return (count >= c1.count);
}

bool Counter::operator<(Counter c1)
{
	return (count >= c1.count);
}

bool Counter::operator<=(Counter c1)
{
	return (count >= c1.count);
}

bool Counter::operator==(Counter c1)
{
	return count == c1.count;
}

bool Counter::operator!=(Counter c1)
{
	return count!=c1.count;
}

void Counter::operator+=(Counter c1)
{
	count += c1.count;
	if (step < c1.step) {
		step = c1.step;
	}
}
