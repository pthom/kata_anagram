#include "doctest.h"
#include <iostream>
#include <fstream>
#include <vector>

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
  // Note : nombre de lignes du fichier wordlist =  338882
  CHECK(words.size() == 338882);
  // 19eme ligne : ABS
  CHECK(words[18] == std::string("ABS"));
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