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







Osoba i živi negdje, sortirano po ulicama abecedno i onda po kucnom broju ako su iste



#include <iostream>

using namespace std;

struct Osoba{
    string ime;
    string prezime;
    int godrod;
    string mjesto;
    string ulica;
    int kucni_broj;
};


int main()
{
    Osoba osoba[5];
    for(int i=0;i<5;i++){
        cin>>osoba[i].ime;
        cin>>osoba[i].prezime;
        cin>>osoba[i].godrod;
        cin>>osoba[i].mjesto;
        cin>>osoba[i].ulica;
        cin>>osoba[i].kucni_broj;
    }
    cout<<endl<<endl;
        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(osoba[j].ulica==osoba[j+1].ulica){
                if(osoba[j].kucni_broj<osoba[j+1].kucni_broj){
                    swap(osoba[j].ime, osoba[j+1].ime);
                    swap(osoba[j].prezime, osoba[j+1].prezime);
                    swap(osoba[j].godrod, osoba[j+1].godrod);
                    swap(osoba[j].mjesto, osoba[j+1].mjesto);
                    swap(osoba[j].ulica, osoba[j+1].ulica);
                    swap(osoba[j].kucni_broj, osoba[j+1].kucni_broj);
                }
            }
            else if(osoba[j].ulica<osoba[j+1].ulica){
               swap(osoba[j].ime, osoba[j+1].ime);
               swap(osoba[j].prezime, osoba[j+1].prezime);
               swap(osoba[j].godrod, osoba[j+1].godrod);
               swap(osoba[j].mjesto, osoba[j+1].mjesto);
               swap(osoba[j].ulica, osoba[j+1].ulica);
               swap(osoba[j].kucni_broj, osoba[j+1].kucni_broj);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<osoba[i].ime<<"  "<<osoba[i].prezime<<"  "<<osoba[i].godrod<<"  "<<osoba[i].mjesto<<"  "<<osoba[i].ulica<<"  "<<osoba[i].kucni_broj<<endl;
    }
}





#include <iostream>
#include <string>

using namespace std;

struct Osoba{
    string ime;
    string prezime;
    int godrod;
    string mjesto;
    string ulica;
    int kucni_broj;
};


int main()
{
    Osoba osoba[5];
    for(int i=0;i<5;i++){
        cin>>osoba[i].ime;
        cin>>osoba[i].prezime;
        cin>>osoba[i].godrod;
        cin>>osoba[i].mjesto;
        cin>>osoba[i].ulica;
        cin>>osoba[i].kucni_broj;
    }
        for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(osoba[j].ulica==osoba[j+1].ulica){
                if(osoba[j].kucni_broj<osoba[j+1].kucni_broj){
                    swap(osoba[j].ime, osoba[j+1].ime);
                    swap(osoba[j].prezime, osoba[j+1].prezime);
                    swap(osoba[j].godrod, osoba[j+1].godrod);
                    swap(osoba[j].mjesto, osoba[j+1].mjesto);
                    swap(osoba[j].ulica, osoba[j+1].ulica);
                    swap(osoba[j].kucni_broj, osoba[j+1].kucni_broj);
                }
            }
            else if(osoba[j].ulica<osoba[j+1].ulica){
               swap(osoba[j].ime, osoba[j+1].ime);
               swap(osoba[j].prezime, osoba[j+1].prezime);
               swap(osoba[j].godrod, osoba[j+1].godrod);
               swap(osoba[j].mjesto, osoba[j+1].mjesto);
               swap(osoba[j].ulica, osoba[j+1].ulica);
               swap(osoba[j].kucni_broj, osoba[j+1].kucni_broj);
            }
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<osoba[i].ime<<"  "<<osoba[i].prezime<<"  "<<osoba[i].godrod<<"  "<<osoba[i].mjesto<<"  "<<osoba[i].ulica<<"  "<<osoba[i].kucni_broj<<endl;
    }
    cout<<endl<<endl;
    while(1){
        string unos;
        cin>>unos;
        for(int i=0;i<5;i++){
            if(((osoba[i].ulica).find(unos))!= std::string::npos){
                cout<<osoba[i].ime<<"  "<<osoba[i].prezime<<"  "<<osoba[i].godrod<<"  "<<osoba[i].mjesto<<"  "<<osoba[i].ulica<<"  "<<osoba[i].kucni_broj<<endl;
            }
        }
        if(unos=="izlaz"){
            break;
        }
    }


}


Struktura Vozilo(Proizvođačm, Model, Godina Proizvodnje, Snaga) Funkcija Lijepo ispiše sve parametre nekog vozuila
Smanji snagu nekog vozila za 1, ako se može smanjiti vrati 1 inače vrati 0, Varijabla koja predstavlja vozilo je deklarirana u mainu
Napisi program koji od korisnika trazi unos vozila. Unesena vozila spremamo u polje, nećebiti više od 10 vozila
napiši strukturu koja predstavlja čvor koji potencijalno ima 3 podčvpra. Napiši funkciju koja vrati koliko ima čvorova u nekom stable. Čvorovi mogu prikazivati na prijašnje čvorove

Struktura Osobe(Naselje, Ulica Kucni broj) Lijepo ispiši sve podatke neke osobe
Napiši funkciju koja neku osobu preseli na X kućnih brojeva bliže- Vrati 1 ako je uspješno, inače vrati 0
Napiši funkciju koja od korisnika tražio unos osobei adrese. Unesene osobe se spremaju u polje od najviše 10 osoba
Kreiraj strukturu koja predstavlja čvor koji potencijalno ima 100 podčvorova. Napiši funkciju koja vrati koliko čvorova ima u cijelom stablu






#include <iostream>
#include <string>

using namespace std;

struct vozilo{
    string proizvodac;
    string model;
    int god_proizvodnje;
    int snaga;
};

vozilo ispise(char trazeni, vozilo ){
    cout<<"Proizvodac je: "<<trazeni.proizvodac<<endl;
    cout<<"Model vozila je: "<<trazeni.model<<endl;
    cout<<"Godina proizvodnje vozila je: "<<trazeni.god_proizvodnje<<endl;
    cout<<"Snaga je: "<<trazeni.snaga<<endl;
}

int main(){
    vozilo a;
    cin>>a.proizvodac>>a.model>>a.god_proizvodnje>>a.snaga;
    ispise(trazeni);

}
