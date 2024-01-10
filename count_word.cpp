#include  <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;
int main()
{ char sentence[81], prev = ' '; //prev 表示当前字符的前一字符
  int i, num = 0;

  cin.getline(sentence, 81);

  for (i = 0; sentence[i] != '\0'; ++i) {
      if (prev == ' ' && sentence[i] != ' ') ++num;
      prev = sentence[i];
  }

  cout << "单词个数为：" << num << endl;

  return 0;
 }
