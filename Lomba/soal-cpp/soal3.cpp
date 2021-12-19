#include <iostream>
#include<cmath>
#include<vector>
using namespace std;
// JANGAN DIUBAH KODE DI ATAS


// LENGKAPI FUNGSI INI
void mencariJarakTerdekat (int x, int y, int z) {
    int selisihX, selisihY;

    // Menghtiung selisih jarak masing-masing rumah dengan titik Z.
    // selisihX = abs(abs(z) - abs(x)); harusnya gini
    // selisihY = abs(abs(z) - abs(y)); harusnya gini
    selisihX = abs(z - x);
    selisihY = abs(z - y);

    // Jika rumah A lebih dekat dari sekolah, maka selisihX < selisihY.
    // Sebaliknya, jika rumah B lebih dekat dari sekolah, maka selisihX > selisihY.
    // Sedangkan jika selisih kedua rumah sama maka, jarak kedua rumah tersebut sama.
    if (selisihX < selisihY) cout << "Rumah A\n";
    else if (selisihX > selisihY) cout << "Rumah B\n";
    else if (selisihX == selisihY) cout << "Sekolah berdekatan dengan semua rumah\n";
}


int main() {
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
  
  vector<int> test1{1, 3, 2};
  vector<int> test2{6, 3, 5};
  vector<int> test3{1, 8, 5};
  vector<vector<int>> allTest{test1, test2, test3};
  cout<<"Running test ...";
  for (int i = 0; i < allTest.size(); i++) {
    cout<<"\n\nTest "<<(i+1)<<endl;
    int posA = allTest[i][0];
    int posB = allTest[i][1];
    int posS = allTest[i][2];
    mencariJarakTerdekat(posA, posB, posS);
  }
  cout<<"\n\nFinishing test ...";

  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
}