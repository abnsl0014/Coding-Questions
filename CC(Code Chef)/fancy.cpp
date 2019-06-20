#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t,counter=0;
    char space;
    cin>>t;
    space=cin.get();
    for(int i=0; i<t; i++)
    {
        string s;
        getline(cin,s);
        int n=s.size();
         size_t found = s.find(" not ");
         size_t found2 = s.find("not ");
          size_t found3= s.rfind(" not");
          size_t found4 = s.find("not");
        if (found!= string::npos)
        {
            cout<<"Real Fancy"<<endl;
            continue;
        }
        else if(found2!=string::npos && found2==0)
        {
            cout<<"Real Fancy"<<endl;
            continue;
        }
        else if(found3!=string::npos&& found3==n-4)
        {
            cout<<"Real Fancy"<<endl;
            continue;
        }
        else if(s.size()==3&&found4!=string::npos)
        {
            cout<<"Real Fancy"<<endl;
            continue;
        }
        else{
            cout<<"regularly fancy"<<endl;
            continue;
        }
    }
}
