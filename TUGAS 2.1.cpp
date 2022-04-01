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
