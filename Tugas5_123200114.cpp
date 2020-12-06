#include <iostream>
using namespace std;
int main ()
{
    int pilih,p,l,i,j,r,s,t;

    cout<<"===== Gambar Bangun Datar ====="<<endl;
    cout<<" 1. Kotak bolong "<<endl;
    cout<<" 2. Segitiga "<<endl;
    cout<<"Pilih : "; cin>>pilih;
    cout<<endl;

    switch (pilih){
    case 1 :
    cout<<"Panjang : "; cin>>p;
    cout<<"Lebar   : "; cin>>l;
    cout<<endl;

    if (p>2){
        for (i=1;i<=p;i++){
            for (j=1;j<=l;j++){
                if (i==1||j==1){
                    cout<<" *";
                } else if (i==p||j==l){
                    cout<<" *";
                } else {
                    cout<<"  ";
                }
            } cout<<endl;
        }
    } else {
        for (i=1;i<=p;i++){
            for (j=1;j<=l;j++){
                cout<<" *";
            } cout<<endl;
        }
    } break;

    case 2 :
    cout<<"Tinggi   : "; cin>>t;

    for (i=1;i<=t;i++){
        r=t;
        s=i;
        for (j=1;j<=i;j++){
            cout<<" "<<s;
            r=r-1;
            s=s+r;
        }cout<<endl;
    } break;
    default :S
        cout<<"Gaada bos, cuma ada 1 ama 2 doang"<<endl;
    }

}
