#include <iostream>
using namespace std;
main ()
{
   string nama;
   string nim;
   int uts,uas;

   cout<<"Nama          : "; getline (cin,nama);
   cout<<"NIM           : "; cin>>nim;
   cout<<"Nilai UTS     : "; cin>>uts;
   cout<<"NIlai UAS     : "; cin>>uas;

   cout<<endl;
   cout<<"Hai nama saya "<<nama<<",";
   cout<<"NIM "<<nim<<endl;
   cout<<"Nilai akhir saya "<<(uts+uas)/2<<endl;

}
