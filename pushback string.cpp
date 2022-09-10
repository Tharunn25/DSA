// push back function implementation using string

#include <iostream>
#include <string>

using namespace std;

void pushback(string s1,string s2){
    
    for(int i=0;s2[i] != 0;i++){
        s1.push_back(s2[i]);
    }
    cout<<"After push backing the strings : "<<s1;
}

int main()
{
   string s1("Tharunn");
   string s2("Elumalai");
   
   pushback(s1,s2);

    return 0;
}
