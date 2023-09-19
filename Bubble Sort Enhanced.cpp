#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int polje[10];
    int Sortirano=0;
    int z;
    for(int i=0;i<10;i++){
        polje[i]=rand()%100;
    }
        for(int i=0;i<10;i++){
        cout<<polje[i]<<"  ";
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<9-i;j++){
            if(polje[j+1]<polje[j]){
            z=polje[j];
            polje[j]=polje[j+1];
            polje[j+1]=z;
            int Sortirano=1;
            }
            if(Sortirano==0)
                break;
        }
        Sortirano=0;
    }
    cout<<endl;

    for(int i=0;i<10;i++){
        cout<<polje[i]<<"  ";
    }
}
