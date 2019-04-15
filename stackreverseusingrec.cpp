#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &s,int x)
{
    if(s.size()==0)
    {
        s.push(x);
        return;
    }
    int a=s.top();
    s.pop();
    insertatbottom(s,x);
    s.push(a);



}
void reversestack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
     int x=s.top();
     s.pop();
     reversestack(s);
     insertatbottom(s,x);

}
int main()
{
    stack<int> s;
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int n;
        cin>>n;
        s.push(n);
    }
    reversestack(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

}

