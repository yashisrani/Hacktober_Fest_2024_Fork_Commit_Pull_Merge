// Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.


#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    void rotatec (string &s){
        char c = s[s.size()-1];
        int index = s.size()-2;
        
        while(index >= 0){
            s[index+1] = s[index];
            index--;
        };
        s[0] = c;
    }
    
    void rotateac(string &s){
        char c = s[0];
        int index = 1;
        
        while(index < s.size()){
            s[index-1] = s[index];
            index++;
        };
        s[s.size()-1] = c;
    }
     
    bool isRotated(string str1, string str2)
    {
      
        if(str1.size() != str2.size()) return 0;
        
        string clock , anticlock;
        
        clock = str1;
        
        rotatec(clock);
        rotatec(clock);
        
        if(clock == str2) return 1;
        
        anticlock = str1;
        
        rotateac(anticlock);
        rotateac(anticlock);
        
        if(anticlock == str2) return 1;
        
        return 0;
        
    }

};



int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

