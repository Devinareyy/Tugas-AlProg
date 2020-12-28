#include <iostream>
using namespace std;
int main ()
{
    int i,a,maksimum,minimum,jumlah,rata,selisih,y;
    cout<<"Masukkan banyak angka : "; cin>>a;

    int x[a];

    for (i=0;i<a;i++){
        cout<<"Angka ke-"<<i+1<<" : "; cin>>x[i];
    }
    cout<<endl;
    cout<<endl;
    cout<<"===========Hasil==========="<<endl;
    cout<<"Deret        :";
    for (i=0;i<a;i++){
        cout<<" "<<x[i];
    }
    cout<<endl;
    maksimum=x[0];
    minimum=x[0];
    for(i=0;i<a;i++){
        if (x[i]>maksimum) {
            maksimum=x[i];
        } else if (x[i]<minimum){
            minimum=x[i];
        }
    }

    jumlah=0;
    for (i=0;i<a;i++){
        jumlah=jumlah+x[i];
    }
    rata=jumlah/a;

    cout<<"Maksimum     : "<<maksimum<<endl;
    cout<<"Minimum      : "<<minimum<<endl;
    cout<<"Rata-rata    : "<<rata<<endl;

    selisih=0;
    y=0;
    for (i=0;i<a;i++){
        y=x[i]-x[i+1];
        if (i==a-1){
            y=x[i]-x[i-1];
        }
        if(y<0){
            y=y*-1;
        }
        if (y>=selisih){
            selisih=y;
        }
    }
    cout<<"Selisih Max  : "<<selisih<<endl;
    }



