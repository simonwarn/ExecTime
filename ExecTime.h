#pragma once
#include <chrono>
class ExecTime
{
public:// time in ms
	ExecTime();
	void Start();
	double Print();
private:
	std::chrono::steady_clock::time_point start;
};