#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int captchaPuzzleSolver(string input);
int charToInt(char c);

int main() {
  string input;

  cout << "What is your input? ";
  getline(cin,input);

  cout << "Your sum is " << captchaPuzzleSolver(input) << '\n';

  return 0;
}

int captchaPuzzleSolver(const string input) {
  int sum = 0;

  for (int i=0; i < (input.length()-1); ++i) {
    int firstNum = charToInt(input[i]);
    int secondNum = charToInt(input[i+1]);
    if (firstNum == secondNum) {
      sum += firstNum;
    }
  }

  if (input.length() > 0) {
    int lastNum = charToInt(input[input.length()-1]);
    int firstNum = charToInt(input[0]);
    if (lastNum == firstNum) {
      sum += lastNum;
    }
  }

  return sum;
}

int charToInt(char c) {
  string tmp = "";
  tmp += c;
  return atoi(tmp.c_str());
}
