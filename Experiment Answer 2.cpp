#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){
	int arrProvA[7], arrProvB[7], arrProvC[7];
	int ctr=0;
	
	cout<<"Enter all temperature for a week of Province A, Province B and then Province C."<<endl;
	for (ctr=0; ctr<7; ctr++){
		cout<<"Province A, Day "<<ctr+1<<": ";
		cin>>arrProvA[ctr];
	}
	for (ctr=0; ctr<7; ctr++){
		cout<<"Province B, Day "<<ctr+1<<": ";
		cin>>arrProvB[ctr];
	}
	for (ctr=0; ctr<7; ctr++){
		cout<<"Province C, Day "<<ctr+1<<": ";
		cin>>arrProvC[ctr];
	}
	
	cout<<"Displaying Values: "<<endl;
	for (ctr=0; ctr<7; ctr++){
		cout<<"Province A, Day "<<ctr+1<<"="<<arrProvA[ctr]<<endl;
	}
	for (ctr=0; ctr<7; ctr++){
		cout<<"Province B, Day "<<ctr+1<<"="<<arrProvB[ctr]<<endl;
	}
	for (ctr=0; ctr<7; ctr++){
		cout<<"Province C, Day "<<ctr+1<<"="<<arrProvC[ctr]<<endl;
	}
	
	getch();
	return 0;
}
