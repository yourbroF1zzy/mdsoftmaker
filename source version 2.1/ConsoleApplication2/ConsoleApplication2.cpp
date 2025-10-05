#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include <http.h>
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
		string l11;
		string l12;
		string l13;
		string l14;
		string l15;
		string l16;
		string l17;
		string l18;
		string l19;
		string l20;
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
		getline(file, l11);
		getline(file, l12);
		getline(file, l13);
		getline(file, l14);
		getline(file, l15);
		getline(file, l16);
		getline(file, l17);
		getline(file, l18);
		getline(file, l19);
		getline(file, l20);

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

		if (l1 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l1 == "clear") {
			system("cls");
		}

		if (l1 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l1 == "start") {
			system(l2.c_str());
		}

		// new line
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

		if (l2 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l2 == "clear") {
			system("cls");
		}

		if (l2 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l2 == "start") {
			system(l3.c_str());
		}

		// new line
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

		if (l3 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l3 == "clear") {
			system("cls");
		}

		if (l3 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l3 == "start") {
			system(l4.c_str());
		}

		// new line
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

		if (l4 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l4 == "clear") {
			system("cls");
		}

		if (l4 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l4 == "start") {
			system(l5.c_str());
		}

		// new line
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

		if (l5 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l5 == "clear") {
			system("cls");
		}

		if (l5 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l5 == "start") {
			system(l6.c_str());
		}

		// new line
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

		if (l6 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l6 == "clear") {
			system("cls");
		}

		if (l6 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l6 == "start") {
			system(l7.c_str());
		}

		// new line
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

		if (l7 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l7 == "clear") {
			system("cls");
		}

		if (l7 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l7 == "start") {
			system(l8.c_str());
		}

		// new line
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

		if (l8 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l8 == "clear") {
			system("cls");
		}

		if (l8 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l8 == "start") {
			system(l9.c_str());
		}

		// new line
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

		if (l9 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l9 == "clear") {
			system("cls");
		}

		if (l9 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l9 == "start") {
			system(l10.c_str());
		}

		// new line
		if (l10 == "print") {
			cout << l11 << endl;
		}

		if (l10 == "string") {
			s1 = l11;
		}

		if (l10 == "prints") {
			cout << s1 << endl;
		}

		if (l10 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l10 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l10 == "clear") {
			system("cls");
		}

		if (l10 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l10 == "start") {
			system(l11.c_str());
		}

		// new line
		if (l11 == "print") {
			cout << l12 << endl;
		}

		if (l11 == "string") {
			s1 = l12;
		}

		if (l11 == "prints") {
			cout << s1 << endl;
		}

		if (l11 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l11 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l11 == "clear") {
			system("cls");
		}

		if (l11 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l11 == "start") {
			system(l12.c_str());
		}

		// new line
		if (l12 == "print") {
			cout << l13 << endl;
		}

		if (l12 == "string") {
			s1 = l13;
		}

		if (l12 == "prints") {
			cout << s1 << endl;
		}

		if (l12 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l12 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l12 == "clear") {
			system("cls");
		}

		if (l12 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l12 == "start") {
			system(l13.c_str());
		}

		// new line
		if (l13 == "print") {
			cout << l14 << endl;
		}

		if (l13 == "string") {
			s1 = l14;
		}

		if (l13 == "prints") {
			cout << s1 << endl;
		}

		if (l13 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l13 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l13 == "clear") {
			system("cls");
		}

		if (l13 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l13 == "start") {
			system(l14.c_str());
		}

		// new line
		if (l14 == "print") {
			cout << l15 << endl;
		}

		if (l14 == "string") {
			s1 = l15;
		}

		if (l14 == "prints") {
			cout << s1 << endl;
		}

		if (l14 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l14 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l14 == "clear") {
			system("cls");
		}

		if (l14 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l14 == "start") {
			system(l15.c_str());
		}

		// new line
		if (l15 == "print") {
			cout << l16 << endl;
		}

		if (l15 == "string") {
			s1 = l16;
		}

		if (l15 == "prints") {
			cout << s1 << endl;
		}

		if (l15 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l15 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l15 == "clear") {
			system("cls");
		}

		if (l15 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l15 == "start") {
			system(l16.c_str());
		}

		// new line
		if (l16 == "print") {
			cout << l17 << endl;
		}

		if (l16 == "string") {
			s1 = l17;
		}

		if (l16 == "prints") {
			cout << s1 << endl;
		}

		if (l6 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l6 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l16 == "clear") {
			system("cls");
		}

		if (l16 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l16 == "start") {
			system(l17.c_str());
		}

		// new line
		if (l17 == "print") {
			cout << l18 << endl;
		}

		if (l17 == "string") {
			s1 = l18;
		}

		if (l17 == "prints") {
			cout << s1 << endl;
		}

		if (l17 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l17 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l17 == "clear") {
			system("cls");
		}

		if (l17 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l17 == "start") {
			system(l18.c_str());
		}

		// new line
		if (l18 == "print") {
			cout << l19 << endl;
		}

		if (l18 == "string") {
			s1 = l19;
		}

		if (l18 == "prints") {
			cout << s1 << endl;
		}

		if (l18 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l18 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l18 == "clear") {
			system("cls");
		}

		if (l18 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l18 == "start") {
			system(l19.c_str());
		}

		// new line
		if (l19 == "print") {
			cout << l20 << endl;
		}

		if (l19 == "string") {
			s1 = l20;
		}

		if (l19 == "prints") {
			cout << s1 << endl;
		}

		if (l19 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l19 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l19 == "clear") {
			system("cls");
		}

		if (l19 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l19 == "start") {
			system(l20.c_str());
		}

		// new line
		if (l20 == "print") {
			cout << "error 404" << endl;
		}

		if (l20 == "string") {
			// s1 = l3;
		}

		if (l20 == "prints") {
			cout << s1 << endl;
		}

		if (l20 == "input") {
			cout << "Input here>> " << endl;
			cin >> s1;
		}

		if (l20 == "clock") {
			this_thread::sleep_for(std::chrono::seconds(5));
		}

		if (l20 == "clear") {
			system("cls");
		}

		if (l20 == "http") {
			cout << "not finished, c++ sucks";
		}

		if (l20 == "start") {
			// system(l3.c_str());
		}
	}
	return 0;
}