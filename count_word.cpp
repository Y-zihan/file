#include  <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;
int main()
{ char sentence[81], prev = ' '; //prev ��ʾ��ǰ�ַ���ǰһ�ַ�
  int i, num = 0;

  cin.getline(sentence, 81);

  for (i = 0; sentence[i] != '\0'; ++i) {
      if (prev == ' ' && sentence[i] != ' ') ++num;
      prev = sentence[i];
  }

  cout << "���ʸ���Ϊ��" << num << endl;

  return 0;
 }
