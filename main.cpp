#include <iostream>
using namespace std;

int main() {
    int Nlistelli, i, j, t, coppie, cornici;
    bool scambi;
    cout<<"Quanti listelli ci sono?"<<endl;
    cin>>Nlistelli;
    int Llistelli[Nlistelli];
    i=0;
    while(i<=Nlistelli-1)
    {
        cout<<"Quant'è la lungezza del "<<i+1<<"° listello?"<<endl;
        Llistelli[i]=(random()%7)+4;
        cout<<Llistelli[i]<<endl;
        i=i+1;
    }
    i=0;
    scambi=true;
    while(i<=Nlistelli-1 and scambi==true)
    {
        scambi=false;
        j=0;
        while(j<=Nlistelli-2)
        {
            if(Llistelli[j]>Llistelli[j+1])
            {
                t=Llistelli[j];
                Llistelli[j]=Llistelli[j+1];
                Llistelli[j+1]=t;
                scambi=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<=Nlistelli-1)
    {
        cout<<"Il "<<i+1<<"° listello è lungo "<<Llistelli[i]<<"cm"<<endl;
        i=i+1;
    }
    coppie=0;
    i=0;
    j=0;
    while(i<=Nlistelli-2)
    {
        j=i+1;
        while(j<=Nlistelli-1 and Llistelli[i]!=0)
        {
            if(Llistelli[i]==Llistelli[j])
            {
                coppie=coppie+1;
                cout<<"Ci sono due listelli di lunghezza "<<Llistelli[i]<<"cm"<<endl;
                Llistelli==0;
                Llistelli[j]==0;
            }
            j=j+1;
        }
        i=i+1;
    }
    cornici=coppie/2;
    cout<<"Si possono creare "<<cornici<<" cornici";
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
