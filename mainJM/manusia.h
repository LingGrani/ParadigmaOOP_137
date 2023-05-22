#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;
class manusia
{
public:
	string nama;
	manusia(string pName):nama(pName) {
		cout << nama << " hidup\n";
	}
	~manusia() {
		cout << nama << "mati\n";
	}
};
#endif // !MANUSIA_H