Selection Sort, , oct u dec, dec u oct, bin u dec, dec u bin, ispise adrese polja od 10 elemenata(int, bool, double, float), ispise broj povecani za 1, ispise polje povecano za 1, parne elemente u polju pretorvori u 0, a neparne u 1... 

pointeri:

void p(int*a){
    cout<<a<<endl;      //ispise adresu od t
    cout<<&a<<endl;     //pispise adresu od a
    cout<<(*a)<<endl;     //ispise vrijednost a
    *a=5;
}

int main()
{
    int t=4;
    cout<<t<<endl;
    cout<<&t<<endl;
    p(*t);  salji adresu;
    p(&t);  salji broj;
}



#include <iostream>

using namespace std;

void povecaj(int*a){
    (*a)=(*a)+1;
    cout<<(*a)<<endl;
}


int main()
{
    int a;
    cin>>a;
    povecaj(&a);
}


