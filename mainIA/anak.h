#ifndef ANAK_H
#define ANAK_H
class anak
{
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}
	~anak() {
		cout << "Ibu \"" << nama << "\" tidak ada\n";
	}
};
#endif // !ANAK_H