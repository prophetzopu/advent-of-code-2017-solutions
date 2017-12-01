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

  int halfwayAround = input.length() / 2;

  for (int i=0; i < (input.length()); ++i) {
    int firstNum = charToInt(input[i]);
    int secondNum = charToInt(input[(i+halfwayAround)%(input.length())]);
    if (firstNum == secondNum) {
      sum += firstNum;
    }
  }

  return sum;
}

int charToInt(char c) {
  string tmp = "";
  tmp += c;
  return atoi(tmp.c_str());
}
