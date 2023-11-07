Selection Sort, , oct u dec, dec u oct, bin u dec, dec u bin, ispise adrese polja od 10 elemenata(int, bool, double, float), ispise broj povecani za 1, ispise polje povecano za 1, parne elemente u polju pretorvori u 0, a neparne u 1... ispisi vrijednosti od svih brojeva u polju, zbroji vrijednosti svih elemenata u polju, vrati duljinu unesene recenice pomocu pointera, sva mala solva pretvori u veliku u nizu

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




ppolje=&polje[0]
ppolje=polje
cout<<*(ppolje+1)
cout<<*(ppolje)
cout<<ppolje+1
cout<<ppolje









#include <iostream>

using namespace std;

int main()
{
    int polje[10]={1,2,3,4,5,6,7,8,9,0};
    int *ppolje;
    for(int i=0;i<10;i++){
        ppolje=&polje[i];
        cout<<ppolje<<"  ";
    }
}




#include <iostream>

using namespace std;

int zbroj(int *pint){
    int n=100;
    int z=0;
    for(int i=0;i<n;i++){
        z+=*(pint+i);
        if(*(pint+i)==0){
            break;
        }
    }
    return z;
}

int main()
{
    int polje[100]={1,2,3,4,0};
    cout<<zbroj(&polje[0])<<endl;
    return 0;
}








#include <iostream>

using namespace std;

int duljina(char*ppolje){
    int brojac=0;
    int n=0;
    while((ppolje[n])!=0){
        n++;
        brojac++;
    }

    return brojac;
}

int main()
{
    char polje[100];
    gets(polje);
    cout<<duljina(&polje[0])<<endl;
    return 0;
}






#include <iostream>

using namespace std;

void duljina(char*ppolje){
    cout<<endl;
    int n=0;
    char ns;
    while((ppolje[n])!=0){
        if(ppolje[n]<='z'&&ppolje[n]>='a'){
            ns=ppolje[n]-32;
        }
        n++;
    cout<<ns;
    }
}

int main()
{
    char polje[100];
    gets(polje);
    duljina(&polje[0]);
    return 0;
}








(*(pchar+i))




















#include <iostream>

using namespace std;

void duljina(char*ppolje){
    cout<<endl;
    int n=0;
    char ns;
    while((ppolje[n])!=0){
        if(ppolje[n]>='a'&&ppolje[n]<='z'){
            ns=ppolje[n]-32;
                cout<<ns;
        }
        else{
            cout<<ppolje[n];
        }
        n++;
    }
}

int main()
{
    char polje[100];
    gets(polje);
    duljina(&polje[0]);
    return 0;
}












/view.php?id=8
esp32
