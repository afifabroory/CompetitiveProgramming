#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
// JANGAN DIUBAH KODE DI ATAS

// LENGKAPI FUNGSI INI
void ganjilGenap(vector<int> arr) {
  vector<int>::iterator it;
  float even = 0, odd = 0, unknown = 0, size = arr.size();

  for (it = arr.begin(); it != arr.end(); it++) {

    // Jika *it adalah 0 maka  increment variable unknown.
    //
    // sedangkan jika *it modulus 2 tidak sama dengan 0 maka increment variable odd.
    //
    // jika kedua kondisi diatas tidak memunuhi maka increment variable even.

    if (*it == 0) unknown++;
    else if (*it%2 != 0) odd++;   
    else even++;
  }


  // Jumlah even, odd, dan unknown dibagi dengan banyak nya elemen untuk menghitung rasio.
  cout << setprecision(3) << even/size << '\n';
  cout << setprecision(3) << odd/size << '\n';
  cout << setprecision(3) << unknown/size << '\n';
}


int main() {
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //

  vector<int> test1{1,2,3,4};
  vector<int> test2{1,8,9,0,0,2,4};
  vector<int> test3{1,1,1};
  vector<vector<int>> allTest{test1, test2, test3};
  cout << "Running test ..." << endl;
  for (int i = 0; i < allTest.size(); i++) {
    cout<<"\nTest "<<(i+1)<<endl;
    ganjilGenap(allTest[i]);
  }
  cout << "\nFinishing test ..." << endl;
  
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
  // MOHON JANGAN DIUBAH KODE BAGIAN INI //
}