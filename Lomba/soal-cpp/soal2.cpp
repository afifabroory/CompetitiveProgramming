#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
// JANGAN DIUBAH KODE DI ATAS


// LENGKAPI FUNGSI INI
void perbandinganNilai(vector<int> a, vector<int> b) {
  
  unsigned budi = 0, mawar = 0;
  for (int i = 0; i < 3; i++) {

    // Jika elemen ke i array Budi lebih besar dari elemen ke i array Mawar,
    // maka Budi mendapatkan poin.
    //
    // Sedangkan jika elemen ke i pada array Mawar lebih besar dari elemen ke i array Budi,
    // maka Mawar mendapatkan poin.
    //
    // Jika elemen ke i Budi dan Mawar sama, maka tidak satupun mendapatkan poin.
    
    if (a[i] > b[i]) budi++;
    else if (a[i] < b[i]) mawar++;
  }

  if (budi > mawar) {
    cout << "Budi [" << budi << ", " << mawar << "]\n";
  } else if (budi < mawar) {
    cout << "Mawar [" << budi << ", " << mawar << "]\n";
  } else {
    cout << "Nilai sama [" << budi << ", " << mawar << "]\n";
  }
}


int main() {
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //

  vector<vector<int>> test1{{25, 50, 30}, {20, 55, 10}};
  vector<vector<int>> test2{{50, 70, 85}, {50, 90, 95}};
  vector<vector<int>> test3{{75, 55, 74}, {75, 55, 74}};
  vector<vector<vector<int>>> allTest{test1, test2, test3};
  cout << "Running test ...";
  for (int i = 0; i < allTest.size(); i++) {
    cout<<"\n\nTest "<<(i+1)<<endl;
    perbandinganNilai(allTest[i][0], allTest[i][1]);
  }
  cout<<"\n\nFinishing test ...";
  
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
}