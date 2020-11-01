#include <iostream>
using namespace std;
main ()
{
    int umur, ayah, ibu, anak1, anak2, biaya1, biaya2, biaya3, biaya4, total;

    cout<<"Umur Ayah    : "; cin>>ayah;
    cout<<"Umur Ibu     : "; cin>>ibu;
    cout<<"Umur Anak 1  : "; cin>>anak1;
    cout<<"Umur Anak 2  : "; cin>>anak2;
    cout<<endl;

    if (ayah<=12){
            biaya1=15000;
    }else if(ayah>12 && ayah<=20){
            biaya1=20000;
    }else if(ayah>20){
            biaya1=30000;
    }
     if (ibu<=12){
            biaya2=15000;
    }else if(ibu>12 && ibu<=20){
            biaya2=20000;
    }else if(ibu>20){
            biaya2=30000;
    }
     if (anak1<=12){
            biaya3=15000;
    }else if(anak1>12 && anak1<=20){
            biaya3=20000;
    }else if(anak1>20){
            biaya3=30000;
    }
    if (anak2<=12){
            biaya4=15000;
    }else if(anak2>12 && anak2<=20){
            biaya4=20000;
    }else if(anak2>20){
            biaya4=30000;
    }
    total=30*(biaya1+biaya2+biaya3+biaya4);

    cout<<"Tagihan satu bulan adalah Rp."<<total;

}
