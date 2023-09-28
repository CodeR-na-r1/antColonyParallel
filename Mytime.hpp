#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;

class Mytime {

private:

	std::chrono::steady_clock::time_point start, end;
	std::chrono::duration<float> duration;

public:

	Mytime() { start = std::chrono::high_resolution_clock::now(); }

	void retime() { start = std::chrono::high_resolution_clock::now(); }

	auto get_time()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		return duration.count();
	}
};