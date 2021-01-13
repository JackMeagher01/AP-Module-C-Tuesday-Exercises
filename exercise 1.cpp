//
// Public link - https://repl.it/@Meagher01/ReverseWord#main.cpp
// Invite link - https://repl.it/join/qlzelvsc-meagher01
//
#include <iostream>
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

string reverse(string word) {
  char reverseWord[word.length()];
  for (int i=0; i < word.length(); i++) {
    reverseWord[i] = word[word.length() - (1+i)];
  }
  return reverseWord;
}

void displayReverse(string word, string reversedWord) {
  cout << word << " spelt backwards is: " << reversedWord;
}

int main() {
  string word;
  do {
    word = getWord();  
  } while (!validInput(word));
  
  string reversedWord = reverse(word);
  displayReverse(word, reversedWord);
}
