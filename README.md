ispise polje povecano za 1, parne elemente u polju pretorvori u 0, a neparne u 1... ispisi vrijednosti od svih brojeva u polju, zbroji vrijednosti svih elemenata u polju, vrati duljinu unesene recenice pomocu pointera, sva mala solva pretvori u veliku u nizu

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





broj rijeci u renecici, koliko puta se slovo ponavlja u stringu, najveci od 3 broja, broj razlicitih slova u stringu





#include <iostream>

using namespace std;

int rijeci(char polje[100]){
    int i=0;
    int brojac=0;
    while(polje[i]!='\0'){
        if(polje[i]<'!'){
            brojac++;
        }
        i++;
    }
    return brojac;
}

int main()
{
    char polje[100];
    gets(polje);
    cout<<polje;
    cout<<rijeci(polje);
}












#include <iostream>

using namespace std;

int rijeci(char polje[100], char trazeni){
    int i=0;
    int brojac=0;
    while(polje[i]!='\0'){
        if(polje[i]==trazeni){
            brojac++;
        }
        i++;
    }
    return brojac;
}

int main()
{
    char polje[100];
    gets(polje);
    cout<<"unesite trazeno slovo:"<<endl;
    char trazeni;
    cin>>trazeni;
    cout<<rijeci(polje, trazeni);
}





#include <iostream>

using namespace std;

int rijeci(char polje[100]){
    int brojac=0;
    int i=0;
    for(char t='a';t<='z';t++){
    while(polje[i]!='\0'){
        if(polje[i]==t){
            brojac++;
            break;
        }
    i++;
    }
}
    return brojac;
}

int main(){
    char polje[100];
    gets(polje);
    cout<<rijeci(polje);
}




Vrati broj ponavljanja slova koje se najviše ponavlja
mala i velika slova su isto slovo




S kojeg polja n elemenata, zavrsava s -1, funkcija, skokovi, najbolje ponavljanje






#include <iostream>

using namespace std;

void dodavanje(int*p, int*r){
    bool a=0;
    int i=5;
    int b=1;
    int j=2;
    int k=0;
    while(b==1){
        if(a==0){
            cout<<*(p+k);
            *(r+j)=*(p+k);
            j++;
            a=1;
        }
        else if(a==1){
            cout<<*(r+k);
            *(p+i)=*(r+k);
            i++;
            a=0;
            k++;
        }
        if(k==5){
            b=0;
        }
    }
}

int main()
{
    int polje1[100]={1, 2, 3, 4, 5};
    int polje2[100]={6, 7};
    dodavanje(polje1, polje2);
}






makne zadnju rijec, dupla zadfnju rijec
