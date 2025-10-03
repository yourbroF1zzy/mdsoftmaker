#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout << "do you wanna load a file. y/n>> ";
	string a1;
	cin >> a1;
	if (a1 == "y") {
		system("cls");
		cout << "type path to .mds file>> ";
		string path;
		cin >> path;

		// strings for programing language
		string s1;
		string s2;
		string s3;

		// getline part
		ifstream file(path);
		string l1;
		string l2;
		string l3;
		string l4;
		string l5;
		string l6;
		string l7;
		string l8;
		string l9;
		string l10;
		getline(file, l1);
		getline(file, l2);
		getline(file, l3);
		getline(file, l4);
		getline(file, l5);
		getline(file, l6);
		getline(file, l7);
		getline(file, l8);
		getline(file, l9);
		getline(file, l10);

		// line one
		if (l1 == "print") {
			cout << l2 << endl;
		}

		if (l1 == "string") {
			s1 = l2;
		}

		if (l1 == "prints") {
			cout << s1 << endl;
		}

		if (l1 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l1 == "clocki") {
			cout << "not finished";
		}

		// line two
		if (l2 == "print") {
			cout << l3 << endl;
		}

		if (l2 == "string") {
			s1 = l3;
		}

		if (l2 == "prints") {
			cout << s1 << endl;
		}

		if (l2 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l2 == "clocki") {
			cout << "not finished";
		}
		
		// line three
		if (l3 == "print") {
			cout << l4 << endl;
		}

		if (l3 == "string") {
			s1 = l4;
		}

		if (l3 == "prints") {
			cout << s1 << endl;
		}

		if (l3 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l3 == "clocki") {
			cout << "not finished";
		}

		// line 4
		if (l4 == "print") {
			cout << l5 << endl;
		}

		if (l4 == "string") {
			s1 = l5;
		}

		if (l4 == "prints") {
			cout << s1 << endl;
		}

		if (l4 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l4 == "clocki") {
			cout << "not finished";
		}

		// line 5
		if (l5 == "print") {
			cout << l6 << endl;
		}

		if (l5 == "string") {
			s1 = l6;
		}

		if (l5 == "prints") {
			cout << s1 << endl;
		}

		if (l5 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l5 == "clocki") {
			cout << "not finished";
		}

		// line 6
		if (l6 == "print") {
			cout << l7 << endl;
		}

		if (l6 == "string") {
			s1 = l7;
		}

		if (l6 == "prints") {
			cout << s1 << endl;
		}

		if (l6 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l6 == "clocki") {
			cout << "not finished";
		}

		// line 7
		if (l7 == "print") {
			cout << l8 << endl;
		}

		if (l7 == "string") {
			s1 = l8;
		}

		if (l7 == "prints") {
			cout << s1 << endl;
		}

		if (l7 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l7 == "clocki") {
			cout << "not finished";
		}

		// line 8
		if (l8 == "print") {
			cout << l9 << endl;
		}

		if (l8 == "string") {
			s1 = l9;
		}

		if (l8 == "prints") {
			cout << s1 << endl;
		}

		if (l8 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l8 == "clocki") {
			cout << "not finished";
		}

		// line 9
		if (l9 == "print") {
			cout << l10 << endl;
		}

		if (l9 == "string") {
			s1 = l10;
		}

		if (l9 == "prints") {
			cout << s1 << endl;
		}

		if (l9 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l9 == "clocki") {
			cout << "not finished";
		}

		// line 10
	}
	return 0;
}