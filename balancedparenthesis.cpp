#include<iostream>
#include<stack>
using namespace std;

bool validexpression(string s)
{
   stack<char> s1;
   for(int i=0;i<s.size();i++)
   {   char curr=s[i];
       if(s[i]=='('){
        s1.push(curr);
       }
       else if(s[i]==')')
       {
           if(s1.empty()||s1.top()!='(')
           {
               return false;
           }
           s1.pop();
       }
   }
   return s.empty();
}

int main()
{
    string expr;
    cin>>expr;
    cout<<validexpression(expr);
}
