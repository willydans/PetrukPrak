#include <iostream>
using namespace std;

class mahasiswa{
	public:
	string nama, npm;
	
	void perkenalan(){
		cout << "Nama: " << nama << endl;
		cout << "Npm: " << npm;
	}
};

int main() {
	Mahasiswa Mhs;
	
	cin >> Mhs.nama >> Mhs.npm;
	
	
	Mhs.perkenalan();
	
}