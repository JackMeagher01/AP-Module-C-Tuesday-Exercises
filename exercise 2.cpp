//
// Public link - https://repl.it/@Meagher01/LowerCase-Converter#main.cpp
// Invite link - https://repl.it/join/jbpmjmgm-meagher01
//
#include <iostream>
#include <string>

using namespace std;

string getWord() {
  string word;
  cout << "Please enter a word: ";
  getline(cin, word);
  return word;
}

bool isSingleWord(string word) {
  for (int i=0; i < word.length(); i++) {
    if (isspace(word[i])) {
      return false;
    }
  }
  return true;  
}

bool isAlphabetic(string word) {
  for (int i=0; i < word.length(); i++) {
    if (!isalpha(word[i])) {
      return false;
    }
  }
  return true; 
}

bool validInput(string word) {
  if (isSingleWord(word) && isAlphabetic(word)) {
    return true;
  }
  cout << "Please enter a valid word." << endl;
  return false;
}

void displayLowerCase(string word, string lowerCaseWord) {
  cout << word << " converted to lower case is: " << lowerCaseWord << endl;
}

string toLower(string word) {
  for (int i=0; i<word.length(); i++) {
    word[i] = tolower(word[i]);
  }
  return word;
}

int main() {
  string word;
  do {
    word = getWord();  
  } while (!validInput(word));
  
  string lowerCase = toLower(word);
  displayLowerCase(word, lowerCase);
}
