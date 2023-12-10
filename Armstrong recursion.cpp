#include <iostream>
#include <math.h>
using namespace std;
int c=0;
int count(int n){
 int c=0;
  while(n!=0)
  {c++;
   n/=10;
  }
 return c;
}
int sum(int n)
{
    if(n==0)
     return 0;
    int n1=n%10;
    return pow(n1,c)+sum(n/10);
}
int main()
{ int n,s;
  cout<<"Enter the number: ";
  cin>>n;
  c=count(n);
  s=sum(n);
  if(s==n)
   cout<<"The entered number is an Armstrong number!";
  else
   cout<<"The entered number is not an Armstrong number!";
  
  return 0;

}
