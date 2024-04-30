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






esp32



najveci od 3 broja, broj razlicitih slova u stringu





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







Koje se slovo najviše ponavlja, skokovi




ne petlje, uvijek rješenje, polje n elemenata, prvi i posljedni 0, vrati na kojem je indeksu zbroj lijevih i desnih brojeva jednak
Vrati zbrojsvih indeksi na kojima je lijevo = desno, ako vrijednosti ne postoje vrati 0, polje je ograničeno nulama






#include <iostream>

using namespace std;

int zbrojvise(int*p){
    if(*p==0){
        return 0;
    }
    return *p+zbrojvise(p+1);

}

int zbrojmanje(int*p){
    if(*p==0){
        return 0;
    }
    return *p+zbrojmanje(p-1);
}

int rekurzivna(int*p){
    if(*p==0){
        return -1;
    }
    if(zbrojvise(p)==zbrojmanje(p)){
        return 1;
    }
    int rezultat=rekurzivna(p+1);
    if(rezultat<0){
        return -1;
    }
    return 1+rezultat;

}

int main()
{
    int polje[100]={-1, 1, 2, 3, 4, 9, -7, -4};
    cout<<rekurzivna(polje);
    ime prezime, godina rođenja, 3 ossobe
}

2d polje, m*n, indeks stupca s najvecim zbrojem





napiši strukturu koja predstavlja čvor koji potencijalno ima 3 podčvpra. Napiši funkciju koja vrati koliko ima čvorova u nekom stable. Čvorovi mogu prikazivati na prijašnje čvorove

















#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    FILE*datoteka;
    datoteka = fopen("kalkulator.txt","w+");
    int a, b, c;
    cin>>a>>b>>c;
    fprintf(datoteka, "%d+%d=%d", a, b, c);
    while(fscanf(datoteka, "%d+%d=%d", &a, &b, &c)!=EOF){
        cout<<a<<" "<<b;
    }
    return 0;

}



#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    FILE*datoteka;
    datoteka = fopen("kalkulator.txt","w+");
    int a, b;
    cin>>a>>b;
    fprintf(datoteka, "%d+%d=%d", a, b, a+b);

    FILE*cita;
    cita=fopen("kalkulator.txt", "r");
    while(fscanf(datoteka, "%d+%d=%d", &a, &b, a+b)!=EOF){
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
    fclose(datoteka);
    fclose(cita);
    return 0;

}








#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    FILE*datoteka;
    datoteka = fopen("kalkulator.txt","w+");
    int a, b, c;
    cin>>a>>b;
    c=a+b;
    fprintf(datoteka, "%i + %i = %i", a, b, c);
    fclose(datoteka);
    return 0;

}









