#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string t;
	dest << "-------------------- BOOM ---------------------" << endl;
		while(getline(source,t)){

		dest << t << endl;
		}
	dest << "-------------------- HA!! ---------------------";


    source.close();
    dest.close();
	return 0;
}
