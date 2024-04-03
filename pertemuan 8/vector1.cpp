#include <vector>
#include <iostream>
using namespace std;
int main() {
	vector<char> huruf = {'j','i','h','a','n'};
//	huruf.front() = 'h';
//	cout << huruf.front();
//    huruf.back() = 'h';
//    cout << huruf.back();
//cout << huruf.size();
//char a[] = {'h','a','i'};
//int len = sizeof(a) / sizeof(a[0]);
//huruf.assign(a,a+len);
//cout << huruf.assign;

huruf.insert(huruf.begin()+2,'g');
cout << huruf.insert;
}