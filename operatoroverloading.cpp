#include<iostream>
using namespace std;
class complex{
  int real;
  int imag;
  public:
    complex(){
    real=0;
    imag=0;
    }
    complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void setreal(int r)
    {
        real=r;
    }
    void setimag(int i)
    {
        imag=i;
    }
    int getreal()
    {
        return real;
    }
    int getimag()
    {
        return imag;
    }
    void print()
    {
        cout<<real<<"+"<<imag<<"i";
    }
    void operator+(complex &c)
    {
        real+=c.real;
        imag=c.imag;
    }
};
int main()
{
    complex c;
    c.setreal(34);
    c.setimag(89);
    c.print();
}
