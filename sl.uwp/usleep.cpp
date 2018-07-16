#include "pch.h"

#include <ctime>

using namespace std;
using namespace std::chrono;


#if defined(__cplusplus) || defined(__cplusplus__) || defined(__CPLUSPLUS)
extern "C"
{
#endif


void __cdecl usleep(int duration)
{
	auto start = high_resolution_clock::now();
	auto end = high_resolution_clock::now();
	auto elaspe = duration_cast<microseconds>(end - start).count();
	while (elaspe < duration)
	{
		end = high_resolution_clock::now();
		elaspe = duration_cast<microseconds>(end - start).count();
		Sleep(1);
	}
}

#if defined(__cplusplus) || defined(__cplusplus__) || defined(__CPLUSPLUS)
}
#endif