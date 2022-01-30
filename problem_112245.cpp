#include <bits/stdc++.h>
// #include <string>
using namespace std;
int st = 1;
string s;
int des = 0;
void rec(int n)
{
  if(n==0)
        return;
  else
  {
    string cifra_str;
    int cifra;
    cifra_str = s.substr(n-1,1);
    cifra=atoi(cifra_str.c_str());
    des= des+ st*cifra;
    st=st*2;
      n--;
    rec(n);
  }
}
int main()
{
  cin >> s;
  int n;
  n = s.size();
  if(s[0]=='-'){
           cout<<'-';
  }
  rec(n);
  cout << des;
  return 0;
}