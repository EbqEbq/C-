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
   gaji=((48*4000)+(lembur*4000));
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
