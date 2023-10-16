#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

bool manjiveci(string veci, string manji){
    if(veci.find(manji)!=std::string::npos){
        return 1;
    }
    else
        return 0;
}

int main()
{
    string veci;
    cout<<"Unesite veci: ";
    cin>>veci;
    cout<<"Unesite manji ";
    string manji;
    cin>>manji;
    cout<<manjiveci(veci, manji);
}
