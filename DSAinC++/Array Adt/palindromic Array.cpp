// Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.


#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	
    	for(int i=0; i<n; i++)
        { 
          int rev=0; 
          int arr=a[i]; 
          while(arr!=0)
          { 
              int rem=arr%10; 
              
              arr=arr/10; 
              rev=rev*10 + rem; 
          } 
          if(a[i] != rev)
          { 
              return 0;
          } 
          
      }
      return 1; 
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
