#include<string>
#include<iostream>
#include<fstream>
using namespace std;

class output{
public:
  void cetak(){
	cout<<"Masukkan nama  : "<<data_file[0];
	cout<<"Masukkan nim   : "<<data_file[1];
	cout<<"Masukkan daftar nilai : "data_file[2];
	for(int i=0;  i<30;  i++){
    	cout<<"Nilai tugas : "<i+1<<tugas[30]<<endl;
    	
	}
    cout<<"Nilai uts   : "i+1<<uts[30]<<endl;
    cout<<"Nilai uas   : "i+1<<uas[30]<<endl;
	  cout<<"Masukkan nilai akhir " << nilaiakhir;
void getData(){
    ambil_data.open("../temp/input.txt");
    while (!ambil_data.eof()){
      ambil_data>>data_file[index];
      index +=1;
    }
    ambil_data.close();

    ambil_data.ope"../temp/temp_proses.txt");
    while(!ambil_data.eof()){
      ambil_data>>nilaiakhir;
    }
  }

private:
  int tugas[30],uts[30],uas[30];
  fstream ambil_data;
  fstream ambil_total;
  string data_file[30];
  int index = 0;
};
 