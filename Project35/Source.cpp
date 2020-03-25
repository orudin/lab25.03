#include <iostream>
#include <fstream>
#include <string>

using namespace std;

nazva* vi;
int a = 0;


struct test {
	string zapytinia;
	string vidpovid;
};

struct nazva {
	string name;
	test* zapu;

};


void addvictorina()
{
	const int h = 5;
	int s = 0;
	fstream in;
	in.open("in.txt", fstream::in | fstream::out | fstream::app);
	bool isOpen = in.is_open();
	if (isOpen == true) {
		nazva* temp = new nazva[a + 1];
		for (int i = 0; i < a; i++) {
			temp[i] = vi[i];
		}

		cout << "Enter nazva victoriny";
		cin >> temp[a].name;
		cout << "Enter zaputanya";
		for (int i = 0; i < h; i++)
		{
			cout << "Enter zapunanya" << i + 1 << endl;
			getline(cin, temp[a].zapu[i].zapytinia);
			cout << "Enter vidpovid" << i + 1 << endl;
			cin >> temp[a].zapu[i].vidpovid;

		}
		in << temp[a].name << endl;
		for (int i = 0; i < h; i++)
		{
			in << temp[a].zapu[i].zapytinia << endl;
			in << temp[a].zapu[i].vidpovid << endl;

		}
		in.close();
		delete vi;
		vi = temp;
		a++;



	}
	else {
		cout << "Error: file not opened!" << endl;

	}



}

void vuvid() {

}



int main() {

	




	system("pause");
	return 0;
}