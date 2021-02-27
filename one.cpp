#include<bits/stdc++.h>
using namespace std;

string secondmost(string str[], int n)
    {
        unordered_map<string, int> m; 
    for (int i = 0; i < n; i++) 
        m[str[i]]++; 
        
        int first_max = INT_MIN, sec_max = INT_MIN; 
    for (auto it = m.begin(); it != m.end(); it++) 
    { 
        if (it->second > first_max) 
        { 
            sec_max = first_max; 
            first_max = it->second; 
        }
        else if (it->second > sec_max &&  it->second != first_max) 
            sec_max = it->second; 
    } 
   
    for (auto it = m.begin(); it != m.end(); it++)
    { 
        if (it->second == sec_max) 
            return it->first; 
    }
    return "";
    }

int main()
{
    string str[]={"geek", "for", "geek", "for", "geek", "aaa"};
    int n=sizeof(str)/sizeof(str[0]);
    cout<<secondmost(str,n);
}
