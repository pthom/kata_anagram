#include "doctest.h"
#include <iostream>

TEST_CASE("UnitTest sample") 
{
    CHECK( 2 * 2 == 4);
}

void RunAnagram()
{
	// load words from file

	// init anagram_result as empty vector<vector<string>>

	// for each word in words 
		// if it not an anagram of the current anagram_result, add it to anagram_result
		// otherwise add it to anagram_result where it belongs  

	// Dump result to stdout, grouped by anagrams
}

#ifndef UNIT_TEST
int main()
{
	RunAnagram();
	return 0;
}
#endif