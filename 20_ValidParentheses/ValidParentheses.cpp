/* ************************************************************************
 *       Filename:  ValidParentheses.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2015Äê04ÔÂ13ÈÕ 13ʱ58·Ö47Ãë
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Solution {
public:
    bool isValid(string s) 
    {
		if(s.size() == 0){
			return false;
		}
		vector<char> sta;
		 //sta.push_back(s[0]);
		if(s[0]==')' || s[0]==']' || s[0]=='}'){
			sta.push_back(s[0]);
		}
		for(int i=0; i<s.size(); i++){
			if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
				sta.push_back(s[i]);
				continue;
			}
			
			char c = sta.back();
			if(s[i]==')'){
				if(c != '('){
					return false;
				}
				sta.pop_back();			
			}else if(s[i]==']'){		
				if(c != '['){
					return false;
				}
				sta.pop_back();
			}else if(s[i]=='}'){
				if(c != '{'){
					return false;
				}
				sta.pop_back();
			}
		}
		if(sta.size() != 0){
			return  false;
		}
		return true;
	}
};


int main(int argc, char **argv)
{
	Solution Vaild;
	string s1 = "()(){[]}[](]";
	string s2 = "([)]";

	cout<< "s1 is " << Vaild.isValid(s1)<< endl;
	cout<< "s2 is " << Vaild.isValid(s2)<< endl;
	return 0;
}

