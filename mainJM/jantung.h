#ifndef JANTUNG_H
#define JANTUNG_H
using namespace std;
class jantung
{
public:
	string nama;
	jantung(string pNama) :nama(pNama) {
		cout << " jantung dihidupkan\n";
	}
	~jantung() {
		cout << "jantung dimatikan\n";
	}
};
#endif // !JANTUNG_H