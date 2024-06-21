//here we will compare fraction
// the input will be in the format of "a/b, c/d"
//where a,b,c and d are variables
#include<iostream>
#include<string>
#include<regex>
using namespace std;

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
         
         int slsh1 = str.find_first_of("/");
         int slsh2 = str.find_last_of("/");
         int comma = str.find(",");
         int space = str.find(" ");
         
         string a=str.substr(0,slsh1);
         string b=str.substr(slsh1+1,comma);
         string c=str.substr(space+1,slsh2);
         string d=str.substr(slsh2+1,str.length());
         
         float A = stof(a);
         float B = stof(b);
         float C = stof(c);
         float D = stof(d);
         
         float lft,ryt;
         lft = A/B;
         ryt = C/D;

         if(lft > ryt)
         {
            return str.substr(0,comma);
         }
         else if(lft == ryt)
         {
            return "equal";
         }
         else{
            return str.substr(space+1,str.length());
         }

    }
};

int main()
{
    Solution ob;
    cout << "Enter the string" << endl;
    int t;
    cin >> t;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        string str;
        getline(cin,str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}
