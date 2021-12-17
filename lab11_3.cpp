#include <iostream>
#include <fstream>
#include <iomanip>  
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

    int main(){
        ifstream source;
        source.open("score.txt");

        int i=0;
        string text;
        double sum =0, xbar=0, n;
        
        
        while(getline(source,text)){
            n = atof(text.c_str());
            sum += n;
            xbar += pow(n,2);
            i++;
        }
        double mean = sum/i,deviation;
        deviation = sqrt((xbar/i)-pow(mean,2));
        cout << "Number of data = " << i << endl;
        cout << setprecision(3);
        cout << "Mean = "<< mean << endl;
        cout << "Standard deviation = "<< deviation;

         source.close();



    }