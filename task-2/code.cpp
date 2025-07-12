#include<iostream>
using namespace std;
int main()
{
    float a,b; char op;
    cout<<"enter the operand";
    cin>>op;

    cout<<"enter first number = ";
    cin>>a;
    cout<<"enter second number = ";
    cin>>b;
switch (op)
{
case '+':
    cout<<a<<"+"<<b<<"="<<a+b;
    break;
    case '-':
      cout<<a<<"-"<<b<<"="<<a-b;
      break;
      case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;
        case '/':
          cout<<a<<"/"<<b<<"="<<a/b;
          break;
default:
cout<<"invalid operator";
    break;
}

return 0;

}



