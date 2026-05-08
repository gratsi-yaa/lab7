// profiling.cpp
#include <iostream>

// SLOW function - many iterations for profiling
void slowFunction()
{
    std::cout << "Starting slow function..." << std::endl;

    volatile double result = 0;
    for (long long i = 0; i < 100000000; i++)
    {
        result += i * 0.001;
    }

    std::cout << "Slow function done: " << result << std::endl;
}

// FAST function - instant execution
void fastFunction()
{
    std::cout << "Fast function executed" << std::endl;
}

int main()
{
    std::cout << "=== Profiling Test ===" << std::endl;

    slowFunction(); // Takes time
    fastFunction(); // Instant

    std::cout << "=== Test Complete ===" << std::endl;
    return 0;
}