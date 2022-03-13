#include <iostream>
using namespace std;
struct hitnilai
{
  /* data */
  float absensi;
  float tugas;
  float UTS;
  float UAS;
  float akhir;
}nilai;

void mulai()
{
  cout << "-------------------------------------------"<<endl;
  cout << "MASUKAN NILAI ABSENSI : ";cin >> nilai.absensi;
  cout << "MASUKAN NILAI TUGAS   : ";cin >> nilai.tugas;
  cout << "MASUKAN NILAI U.T.S   : ";cin >> nilai.UTS;
  cout << "MASUKAN NILAI U.A.S   : ";cin >> nilai.UAS;
  cout << "-------------------------------------------"<<endl;
  nilai.absensi = (nilai.absensi/100) * 10;
  nilai.tugas   = (nilai.tugas/100) * 20;
  nilai.UTS     = (nilai.UTS/100) * 30;
  nilai.UAS     = (nilai.UAS/100) * 40;
  nilai.akhir   = nilai.absensi + nilai.tugas + nilai.UTS + nilai.UAS;
  cout << "-------------------------------------------"<<endl;
  cout << "Nilai Murni Absensi : " ; cout << nilai.absensi << endl;
  cout << "Nilai Murni Tugas   : " ; cout << nilai.tugas << endl;
  cout << "Nilai Murni U.T.S   : " ; cout << nilai.UTS << endl;
  cout << "Nilai Murni U.A.S   : " ; cout << nilai.UAS << endl;
  cout << "Nilai Akhir yang diperoleh sebesar : " ; cout << nilai.akhir<<endl;
  cout << "-------------------------------------------"<<endl;
}