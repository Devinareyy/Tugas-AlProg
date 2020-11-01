#include <iostream>
using namespace std;
int main ()
{
    string user, pw;
    int matkul;
    double harian, uts, uas, rata;

    cout<<"LOGIN AKUN ================"<<endl;
    cout<<"Username     : "; getline (cin,user);
    if (user=="admin"){
        cout<<"Password     : "; getline (cin,pw);
        if (pw=="123") {
            cout<<"================================="<<endl;
            cout<<"LOGIN BERHASIL"<<endl;
            cout<<"\nInput Nilai Mata Kuliah"<<endl;
            cout<<"1. Algoritma dan Pemrograman"<<endl;
            cout<<"2. Kalkulus"<<endl;
            cout<<"Pilih (1/2): "; cin>>matkul;

            switch (matkul){
            case 1:
                cout<<"Nilai Harian : "; cin>>harian;
                cout<<"Nilai UTS    : "; cin>>uts;
                cout<<"Nilai UAS    : "; cin>>uas;
                rata=(harian+uts+uas)/3;
                if (rata>=80){
                    cout<<"\nAnda lulus Algoritma dan Pemrograman dengan nilai "<<rata<<endl;
                }else if (rata<80){
                    cout<<"\nAnda tidak lulus Algoritma dan Pemrograman dengan nilai "<<rata<<endl;
                }
                break;
            case 2:
                cout<<"Nilai Harian : "; cin>>harian;
                cout<<"Nilai UTS    : "; cin>>uts;
                cout<<"Nilai UAS    : "; cin>>uas;
                rata=(harian+uts+uas)/3;
                if (rata>=80){
                    cout<<"\nAnda lulus Kalkulus dengan nilai "<<rata<<endl;
                }else if (rata<80){
                    cout<<"\nAnda tidak lulus Kalkulus dengan nilai "<<rata<<endl;
                }
                break;
            default :
                cout<<"\nInput anda salah!"<<endl;

            }
        }else {
            cout<<"================================="<<endl;
            cout<<"Password anda salah!"<<endl;
        }
    }else if (user!="admin") {
        cout<<"Password     : "; getline (cin,pw);
        if (pw=="123") {
            cout<<"================================="<<endl;
            cout<<"Username anda salah!"<<endl;
        }else {
            cout<<"================================="<<endl;
            cout<<"Username dan password anda salah!"<<endl;
        }
    }
    return 0;
}
