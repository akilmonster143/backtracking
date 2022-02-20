#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void generate(string &s,int open,int close)
{
     if(open==0&&close==0){
          v.push_back(s);
     }
     if(open>0)
     {
          s.push_back('(');
          generate(s,open-1,close);
          s.pop_back();
     }
     if(close>0)
     {
          if(open<close)
          {
          s.push_back(')');
          generate(s,open,close-1);
          s.pop_back();
          }
     }
}
int main()
{
     long long n,c=0;;
     string s;
     cin>>n;
     generate(s,n,n);
     for(auto i :v)
     {
          c++;
          cout<<i;
          cout<<c<<endl;
     }
}
