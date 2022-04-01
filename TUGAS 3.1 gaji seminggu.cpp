#include <iostream>

using namespace std;
int main (){
int jam,gaji,lembur,totalgaji;
string nama;
	cout<<"Program Penghitung Gaji Mingguan Karyawan PT. XXX"<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	
	cout << "Nama anda: ";
 	getline(cin,nama);
 	cout << "Masukkan jam kerja anda: ";cin>>jam;
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	
if (jam>=48)
  {
   lembur= jam-48   ;
   gaji=((48*4000)+(lembur*5000));
   cout<<"Jam kerja anda : 48 Jam";
   cout<<"\nJam lembur anda : "<<lembur<<" jam";
   cout<<"\nGaji anda adalah : Rp. "<<gaji;
   }

   else   
  {
   totalgaji=jam*4000   ;
   cout<<"Jam kerja anda : "<<jam<<" jam";
   cout<<"\nJam lembur anda : 0 Jam";
   cout<<"\nGaji anda adalah : Rp. "<<totalgaji;
   }


return 0;
}

/*Tugas 3.1 
➢ Buatlah flowchart dan program dengan Bahasa C++ atau Bahasa C 
untuk contoh kasus dibawah ini. 

Di perusahaan PT. XXX tiap Karyawan dibayar Mingguan. Upah Karyawan 
dihitung dari jumlah jam kerja selama seminggu. Upah Karyawan 4000/jam. 
Jumlah jam kerja normal selama seminggu 48 jam. Kelebihan jam kerja 
dianggap lembur, dengan upah lembur 5000/jam. 
Buatlah Program C/C++ untuk menghitung upah yang diterima oleh seorang 
karyawan pada akhir minggu. 
Sebagai Input : Nama Karyawan, Jumlah jam kerja selama seminggu, 
Perulangan jika masih ada data. 
Sebagai Output : Total gaji selama seminggu.*/
