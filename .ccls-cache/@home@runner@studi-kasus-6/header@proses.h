#include <fstream>
using namespace std;

class Proses {
public:
  void iProses();
  void hitung();
  void oProses();

private:
  int tugas[50];
  int uts, uas, rata,jml,jumlah;
  ifstream getdata;
  ofstream outdata;
};

void Proses::iProses() {
  rata = 0;
  int i = 1;
  fstream in;
  in.open("../temp/input.txt");
  while (!in.eof()) {
    if (i == 1){
      in >> jml;
    }
    else if (i > 1 && i < jml) {
      in >> tugas[i];
      jumlah += tugas[i];
    }
    else if (i == jml+1){
      in >> uts;
    }
    else if (i == jml+2){
      in >> uas;
    }
    i++;
  }
  in.close();
}

void Proses::hitung() {
  jumlah = jumlah * 20/100;
  uts = uts * 35/100;
  uas = uas * 45/100;
  rata = (jumlah + uts + uas);
}

void Proses::oProses() {
  outdata.open("../temp/temp_proses.txt");
  outdata << rata;
  outdata.close();
}