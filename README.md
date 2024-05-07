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







#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int brojac=0;
    FILE*datoteka;
    datoteka = fopen("dokument.txt", "r");
    int a;
    int b;
    int c;
    while(fscanf(datoteka, "%d %d %d", &a, &b, &c) !=EOF){
        if(a+b==c){
            brojac++;
        }
    }
    cout<<brojac;
}





fcl




#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int brojac=0;
    FILE*datoteka;
    datoteka = fopen("dokument.txt", "r");
    int a;
    int b;
    int c;
    int i=0;
    int brojevi[500][3];
    char istina[500];
    while(fscanf(datoteka, "%d %d %d", &a, &b, &c) !=EOF){
        if(a+b==c){
            brojac++;
            istina[i]='T';

        }
        else{
            istina[i]='N';
        }
        brojevi[i][0]=a;
        brojevi[i][1]=b;
        brojevi[i][2]=c;

        i++;
    }
    cout<<brojac;
    fclose(datoteka);
    FILE*datoteka2;
    datoteka2 = fopen("dokument.txt", "w+");
    for(int i=0;i<500;i++){
        fprintf(datoteka, "%d %d %d %c \n", brojevi[i][0], brojevi[i][1], brojevi[i][2], istina[i]);
    }
    fclose(datoteka2);
}







#include <iostream>
#include <time.h>

using namespace std;

struct redak{
    int prvi;
    int drugi;
    int rjesenje;
    char znak;
};

int main()
{
    FILE*datoteka;
    datoteka = fopen("dokument.txt", "r");
    redak redak[10];
    for(int i=0;i<10;i++){
        fscanf(datoteka, "%d %c %d", &redak[i].prvi, &redak[i].znak , &redak[i].drugi);
        if(redak[i].znak=='-'){
            redak[i].rjesenje=redak[i].prvi-redak[i].drugi;
        }
        else if(redak[i].znak=='+'){
            redak[i].rjesenje=redak[i].prvi+redak[i].drugi;
        }
        else if(redak[i].znak=='*'){
            redak[i].rjesenje=redak[i].prvi*redak[i].drugi;
        }
        else if(redak[i].znak=='/'){
            redak[i].rjesenje=redak[i].prvi/redak[i].drugi;
        }
    }
    fclose(datoteka);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(redak[j].rjesenje<redak[j+1].rjesenje){
                swap(redak[j].prvi, redak[j+1].prvi);
                swap(redak[j].drugi, redak[j+1].drugi);
                swap(redak[j].znak, redak[j+1].znak);
                swap(redak[j].rjesenje, redak[j+1].rjesenje);
            }
        }
    }


    FILE*datoteka2;
    datoteka2 = fopen("dokument.txt", "w+");
        for(int i=0;i<10;i++){
        fprintf(datoteka2, "%d %c %d = %d \n", redak[i].prvi, redak[i].znak , redak[i].drugi, redak[i].rjesenje);
        }
}




