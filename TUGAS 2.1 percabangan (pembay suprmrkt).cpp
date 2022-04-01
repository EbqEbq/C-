#include <iostream> 


using namespace std; 
int main (){ 

 int totbel,totbay,disc; 
 cout<<"Program Pembayaran Supermarket"<<endl; 
 cout<<"-------------------------------------------------------"<<endl; 
 cout<<"Input Total Belanja : Rp. "; 
 cin>>totbel; 
 cout<<"-------------------------------------------------------"<<endl; 
 
 if(totbel>500000){ 
 disc=0.20*totbel; 
 totbay=totbel-disc; 
 cout<<"Total Beli = Rp. "<<totbel<<endl; 
 cout<<"Diskon = Rp. "<<disc<<endl; 
 cout<<"Total Pembayaran = Rp. "<<totbay<<endl; 
 cout<<"SELAMAT ANDA MENDAPATKAN HADIAH PAYUNG"<<endl;
 
 }else if(totbel>300000){ 
 disc=0.15*totbel; 
 totbay=totbel-disc; 
 cout<<"Total Beli = Rp. "<<totbel<<endl; 
 cout<<"Diskon = Rp. "<<disc<<endl; 
 cout<<"Total Pembayaran = Rp. "<<totbay<<endl;
 cout<<"SELAMAT ANDA MENDAPATKAN HADIAH TOPI"<<endl; 
 
 }else if(totbel>100000){ 
 disc=0.10*totbel-disc; 
 totbay=disc; 
 cout<<"Total Beli = Rp. "<<totbel<<endl; 
 cout<<"Diskon = Rp. "<<disc<<endl; 
 cout<<"Total Pembayaran = Rp. "<<totbay<<endl; 
 cout<<"SELAMAT ANDA MENDAPATKAN HADIAH GELAS SYANTIK"<<endl;
 
 }else{ 
 disc=0*totbel; 
 totbay=totbel-disc; 
 cout<<"Total Beli = Rp. "<<totbel<<endl; 
 cout<<"Diskon = Rp. "<<disc<<endl; 
 cout<<"Total Pembayaran = Rp. "<<totbay<<endl; 
 cout<<"ANDA BELUM MENDAPAT HADIAH SILAHKAN BERBELANJA MINIMAL Rp. 100001"<<endl;
 
 } 
 return 0; 
} 

/*Tugas 2.1 
➢ Buatlah flowchart dan program dengan Bahasa C++ atau Bahasa C 
untuk contoh kasus dibawah ini. 

Disebuah Super Market : 
Jika Pembelian > 500000 diskon 20% 
Jika Pembelian > 300000 diskon 15% 
Jika Pembelian > 100000 diskon 10% 
Jika Pembelian <= 100000 diskon 0% 
Jumlah Bayar = Pembelian – Diskon 

Dan Hadiah yang akan di dapat oleh pembeli adalah : 
Jika  Jumlah Bayar > 500000, hadiah  “Payung” 
Jika  Jumlah Bayar > 300000, hadiah  “Topi” 
Jika  Jumlah Bayar > 100000, hadiah  “Gelas Cantik” 
Jika  Jumlah Bayar <= 100000, hadiah  “Tidak Ada” 

Buatlah Program C untuk menentukan diskon dan hadiah bagi pembeli 
disupermarket tersebut. 
Sebagai input : Total Pembelian 
Sebagai Output : Diskon, Jumlah Bayar, Hadiah.*/
