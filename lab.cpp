#include "doctest.h"
#include <iostream>

TEST_CASE("UnitTest sample") 
{
    CHECK( 2 * 2 == 4);
}

#ifndef UNIT_TEST
int main()
{
	std::cout << "Hello world\n";
	return 0;
}
#endif