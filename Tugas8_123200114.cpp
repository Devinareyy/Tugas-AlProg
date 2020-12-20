#include <iostream>
#define phi 3.14
using namespace std;

int r,t;
string ulang;
double luaslingkaran(){
    double luas;
    luas=phi*r*r;
    return luas;
}
double kelilinglingkaran (){
    double keliling;
    keliling=2*phi*r;
    return keliling;
}
double volumetabung (){
    double volume;
    volume=phi*r*r*t;
    return volume;
}
int main()
{
    int menu;

    cout<<"======= HITUNG LINGKARAN ======="<<endl;
    cout<<" 1. Luas Lingkaran"<<endl;
    cout<<" 2. Keliling Lingkaran"<<endl;
    cout<<" 3. Volume Tabung"<<endl;
    cout<<"Pilih        : "; cin>>menu;

    switch (menu) {
    case 1 :
        cout<<"Jari-jari    : "; cin>>r;
        cout<<"Luas Lingkaran adalah "<<luaslingkaran();
        cout<<endl;
        cout<<"Ulangi Program ? (y/n) : "; cin>>ulang;
        cout<<endl;
        if (ulang=="y"){
            return main ();
        } else {
            cout<<endl;
            cout<<"Program selesai, Terima Kasih :D";
        }
        break;

    case 2 :
        cout<<"Jari-jari    : "; cin>>r;
        cout<<"Keliling Lingkaran adalah "<<kelilinglingkaran();
        cout<<endl;
        cout<<"Ulangi Program ? (y/n) : "; cin>>ulang;
        cout<<endl;
        if (ulang=="y"){
            return main ();
        } else {
            cout<<endl;
            cout<<"Program selesai, Terima Kasih :D";
        }
        break;

    case 3 :
        cout<<"Jari-jari    : "; cin>>r;
        cout<<"Tinggi       : "; cin>>t;
        cout<<"Volume Tabung adalah "<<volumetabung ();
        cout<<endl;
        cout<<"Ulangi Program ? (y/n) : "; cin>>ulang;
        cout<<endl;
        if (ulang=="y"){
            return main ();
        } else {
            cout<<endl;
            cout<<"Program selesai, Terima Kasih :D";
        }
        break;
    default:
        cout<<"Gaada bos, cuma ada 1,2,3 doang :D"<<endl;
        cout<<"Ulangi Program ? (y/n) : "; cin>>ulang;
        cout<<endl;
        if (ulang=="y"){
            return main ();
        } else {
            cout<<endl;
            cout<<"Program selesai, Terima Kasih :D";
        }
    }

    return 0;
}
