//Calculator
#include<iostream>
using namespace std;
int main()
{
double a,b,A;
char c;
cout<<"Enter two numbers:"<<endl;
cout<<"Press (+) for Addition \n (-) for Subtraction \n (*) for Multiplication \n (/) for Division "<<endl;
cin>>c;
cin>>a>>c>>b;
if(c=='+')
A=a+b;
else if (c=='-')
A=a-b;
else if(c=='*')
A=a*b;
else if(c=='/')
A=a/b;
cout<<"The answer is:"<<A;
system ("pause");
return 0;
}
