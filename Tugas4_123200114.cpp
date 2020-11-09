#include <iostream>
using namespace std;
int main ()
{
    int jenis, i;
    double M,N,hasil;

    cout<<"=====Perkalian Dan Perpangkatan====="<<endl;
    cout<<"1. Perkalian "<<endl;
    cout<<"2. Perpangkatan "<<endl;
    cout<<"Pilih (1/2) : "; cin>>jenis;

    switch (jenis) {
    case 1:
        cout<<endl;
        cout<<"Input angka N : "; cin>>N;
        cout<<"Input angka M : "; cin>>M;
        cout<<"\nHasil "<<N<<" x "<<M;

        cout<<endl;

        for (i=0;i<N;i++){
            cout<<M<<" + ";
            hasil=hasil+M;
        }
        cout<<" = "<<hasil;
        break;

    case 2:
        cout<<endl;
        cout<<"Input angka N : "; cin>>N;
        cout<<"Input angka M : "; cin>>M;
        cout<<"\nHasil "<<N<<" ^ "<<M;

        cout<<endl;
        hasil=N;
        for(i=1;i<M;i++){
            cout<<N<<" x ";
            hasil=hasil*N;
        }


        cout<<N<<" = "<<hasil;
        break;

    default:
        cout<<endl;
        cout<<"Gaada bos, cuma ada 1 ama 2 doang"<<endl;
    }
    cout<<endl;
    cout<<"\nTerimikiciii";
    cout<<endl;

    return 0;
}
