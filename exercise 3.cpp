//
// Public link - https://repl.it/@Meagher01/Palindrome-Checker#main.cpp
// Invite link - https://repl.it/join/uaugmgjr-meagher01
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

bool isPalindrome(string word1, string word2) {
  return word1 == word2;
}

string reverse(string word) {
  char reverseWord[word.length()];
  for (int i=0; i < word.length(); i++) {
    reverseWord[i] = word[word.length() - (1+i)];
  }
  return reverseWord;
}

string toLower(string word) {
  for (int i=0; i<word.length(); i++) {
    word[i] = tolower(word[i]);
  }
  return word;
}


void displayMessage(string word, string palindromeWord) {
  if (isPalindrome(toLower(word), palindromeWord)) {
    cout << "Yes, ‘" << word << "’ is a palindrome" << endl;
  } else {
    cout << "Sorry, ‘" << word << "’ is not a palindrome." << endl;
  }
}

int main() {
  string word;
  do {
    word = getWord();  
  } while (!validInput(word));
  
  string palindromeWord = toLower(reverse(word));  
  displayMessage(word, palindromeWord);
}
