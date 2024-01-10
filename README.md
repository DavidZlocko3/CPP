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

rekurzivno unosi brojeve dok se ne unese 0 i ispisuj ih
ispise od 0 do n,ispise od n do 0,ispise svaki drugi od 0 do n, vrati zbroj od 0 do n,vrati najveci znak u nizu, ispise niz




#include <iostream>

using namespace std;

void rekurzivna(int n, int a){
    cout<<a<<endl;
    a++;
    if(a==n){
        return;
    }
    rekurzivna(n, a);
}

int main() {
    int n;
    int a=0;
    cin>>n;
    rekurzivna(n, a);
}




#include <iostream>

using namespace std;

void rekurzivna(int n){
    if(n<0){
        return;
    }
    rekurzivna(n-1);
        cout<<n<<endl;
}

int main() {
    int n;
    cin>>n;
    rekurzivna(n);
}



#include <iostream>

using namespace std;

int rekurzivna(int n, int*Zb){
    if(n<0){
        return *(Zb);
    }
    rekurzivna(n-1, Zb);
    *(Zb)+=n;
}

int main() {
    int n;
    int Zb=0;
    cin>>n;
    rekurzivna(n, &Zb);
    cout<<Zb;
}


Od 7 Do n uispise.  od n do 7, 



#include <iostream>

using namespace std;

void rekurzivna(int n){
    if(n<7){
        return;
    }
    rekurzivna(n-1);
        cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    rekurzivna(n);
}



#include <iostream>

using namespace std;

void rekurzivna(int n){
    if(n<7)
        return;
    cout<<n<<endl;
    rekurzivna(n-1);
}

int main(){
    int n;
    cin>>n;
    rekurzivna(n);
}







#include <iostream>
#include <time.h>

using namespace std;

int rekurzivna(int*polje, int n){
    if(n<0)
        return 0;
    return *polje+rekurzivna(polje+1, n-1);
}

int main(){
    srand(time(0));
    int polje[100];
    for(int i=0;i<100;i++){
        polje[i]=rand()%100;
    }
    int n;
    cin>>n;
    cout<<rekurzivna(polje, n);
}

funkcija koja vrati najmanji od N elemenata polja, najveci broj u polju je 1000.
