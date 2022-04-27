using namespace std;

class Input {
public:
  void inData();
  void outData();

private:
  int a[30];
  string nama;
  string mk;
  ofstream oData;
  int jml;
};

void Input::inData() {
  cout << "Masukkan Nama Mahasiswa : ";
  cin >> nama;
  cout << "Masukkan Nama Mata Kuliah : ";
  cin >> mk;
  cout << "Masukkan Jumlah Nilai yang ingin di input (tugas + uts + uas) : ";
  cin >> jml;
  int i = 0;
  if (jml <= 2) {
    cout << "Jumlah tugas tidak valid;";
  } else {
    while (i < jml - 2) {
      cout << "Masukkan nilai Tugas " << i + 1 << " : ";
      cin >> a[i];
      i++;
    }
    cout << "Masukkan nilai UTS : ";
    cin >> a[i];
    cout << "Masukkan nilai UAS : ";
    i += 1;
    cin >> a[i];
  }

  cout << nama << mk << endl;
  for (int j = 0; j < jml; j++) {
    cout << a[j] << endl;
  }
}

void Input::outData() {
  oData.open("../temp/input.txt");
  oData << jml<<endl;
  for (int i = 0; i < jml; i++) {
    oData << a[i] << endl;
  }
  oData << nama << endl;
  oData << mk;
  oData.close();
}