#include <iostream>
using namespace std;

struct mahasiswa{
	string nama, npm;
};

int main() {
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " " << Mhs.npm;
	
}