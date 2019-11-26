#ifdef UNIT_TEST 
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#endif
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

namespace
{
  const std::string example_file { "resources/wordlist.txt" };
}

typedef std::vector<std::string> StringArray;

StringArray ReadLines(const std::string & file)
{
  std::ifstream is(file.c_str());
  StringArray lines;
  std::string currentLine;
  while (std::getline(is, currentLine))
    lines.emplace_back(currentLine);
  return lines;
}

TEST_CASE("ReadLines can read the whole file") 
{
  auto words = ReadLines(example_file);
    // Todo : tester que le nombre de lignes lues correspond au nombre de lignes du fichier
    // Avec le mode de test: 
    CHECK(338882 == words.size());

}

void RunAnagram()
{
  // On peut travailler avec les donnees complete ou un sous-ensemble
  //StringArray words = ReadLines(example_file);
  StringArray words { "ABC", "BCA", "abcd", "DCab", "", "AM", "AMA" };

  throw std::runtime_error("Not implemented");
}

// - pour lancer les tests unitaires : ./anagram_test
// - pour lancer le programme : ./anagram
// (Vous devrez copier le repertoire "resources" dans votre repertoire d'execution)
#ifndef UNIT_TEST 
int main()
{
  RunAnagram();
  return 0;
}
#endif