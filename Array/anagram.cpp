#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> count(26);
    string s1 = "apple";
    string s2 = "pplea";
    for (int i = 0; i < s1.size(); i++)
    {
        count[s1[i]-'a']++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        count[s2[i]-'a']--;
    }
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (count[i]!=0)
        {
            flag=0;
            cout<<"not anagram"<<endl;
            break;
        }
        
    }
    if (flag)
    {
        cout<<"anagram"<<endl;
    }
    
    
    
    

    return 0;
}