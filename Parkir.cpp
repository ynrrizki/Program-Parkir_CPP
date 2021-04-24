#include <iostream>
using namespace std;
 
int main()
{
    // variable
    int kendaraan;

    // end variable
    puts("Program Parkir");
    puts("______________");
    cout<< "Jenis Kendaraan:"<<endl;
    cout<< "1.Motor"<<endl;
    cout<< "2.Mobil"<<endl;
    cout<< "Ketik 1 atau 2: ";
    cin>> kendaraan;

    // proccess
    float jamM, jamK;
    int bayar;
    switch(kendaraan)
    {
        case 1 :
            
            cout<< "Jam Masuk: ";
            cin>> jamM;
            cout<< "Jam Keluar:";
            cin>> jamK;
            if(jamM > jamK){
                bayar = ((jamK + 12) - jamM) * 1000;
            } else{
                bayar = (jamK - jamM) * 1000;
            }
            cout<< "Silah kan bayar Rp."<< bayar;
            break; 
        case 2 :

            cout<< "Jam Masuk: ";
            cin>> jamM;
            cout<< "Jam Keluar:";
            cin>> jamK;
            if(jamM > jamK){
                bayar = ((jamK + 12) - jamM) * 3000;
            } else{
                bayar = (jamK - jamM) * 3000;
            }
            cout<< "Silah kan bayar Rp."<< bayar;
            break;
            default:
            cout<< "value salah"; 
    }
}