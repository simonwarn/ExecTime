#include "ExecTime.h"
#include <iostream>

ExecTime::ExecTime()
{
	start = std::chrono::high_resolution_clock::now();
}

void ExecTime::Start()
{
	start = std::chrono::high_resolution_clock::now();
}

double ExecTime::Print()
{
	std::chrono::duration<double, std::milli> elapsed = std::chrono::high_resolution_clock::now() - start;
	double time = elapsed.count();
	std::cout << time << "\n";
	return time;
}

