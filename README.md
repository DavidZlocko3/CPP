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




#include <iostream>

using namespace std;

struct Osoba{
    string ime;
    string prezime;
    int godrodenja;
};

int main()
{
    Osoba miska, patrik, eugen;
    miska.ime="miska";
    miska.prezime="stipic";
    miska.godrodenja=2001;
    patrik.ime="patrik";
    patrik.prezime="pica";
    patrik.godrodenja=2003;
    eugen.ime="eugen";
    eugen.prezime="eugenican";
    eugen.godrodenja=1991;
    cout<<miska.ime<<" "<<miska.prezime<<" "<<miska.godrodenja<<endl;
    cout<<patrik.ime<<" "<<patrik.prezime<<" "<<patrik.godrodenja<<endl;
    cout<<eugen.ime<<" "<<eugen.prezime<<" "<<eugen.godrodenja<<endl;
}






#include <iostream>

using namespace std;

struct Osoba{
    string ime;
    int broj;
};

int main()
{
    int brojac=0;
    int broj;
    string ime;
    while(1){
        int a;
        cout<<"Za izlaz, pritisnite 0"<<endl;
        cout<<"Za unos nove osobe, pritisnite 1"<<endl;
        cout<<"Za trazenje imena osobe prema broju, pritisnite 2"<<endl;
        cout<<"Za ispis svih imena i brojeva, pritisnite 3"<<endl;
        cin>>a;
    if(a==0){
        break;
    }
    else if(a==1){
         brojac++;
         cout<<"Unesite ime: "<<endl;
         cin>>Osoba[brojac].ime;
         cout<<"Unesite broj: "<<endl;
         cin>>Osoba[brojac].broj;

    }
    else if(a==2){
        int n;
        cout<<"Unesi broj osobe: "<<endl;
        cin>>n;
        bool postoji=0;
        for(int i=0;i<brojac;i++){
            if(Osoba[i].broj==n){
                postoji=1;
                cout<<Osoba.ime[i]<<endl;
                break;
            }
            if(postoji==0){
                cout<<"Osoba ne postoji"<<endl;
            }
        }
    }
    else if(a==3){
        for(int i=0;i<brojac;i++){
            cout<<Osoba[i].ime<<"  "<<Osoba[i].broj<<endl;
        }

    }

    }
}


