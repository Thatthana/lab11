#include<iostream>
using namespace std;

int main(){
	int a=0, b=0, c=0, d=0, f=0, n=1;
	int count[5] = {}; 
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	char grade;
	do{
		cout << "Student [" << n <<"]: ";
		cin >> grade; 
		if(grade == 'A'){
			a++;
			count[0] = a;
		}else if(grade =='B'){
			b++;
			count[1] = b;
		}else if(grade == 'C'){
			c++;
			count[2] = c;
		}else if(grade == 'D'){
			d++;
			count[3] = d;
		}else if(grade == 'F'){
			f++;
			count[4]	= f;
		}else if (grade == '0'){
			break;
		}else{
			cout << "Wrong input. Please input again." << endl;
			n=n-1;

			}
		 		n++;
		
	}while(true);
	
	
	
	cout << "In total " << n-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
