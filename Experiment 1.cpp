#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){
	int arr [10];
	int ctr=0, x=0, y=0, temp=0, sum=0, num=0;
	double ave=0;
	
	cout<<"Enter 10 numbers"<<endl;
	for (ctr=0; ctr<10; ctr++){
		cout<<"No. "<<ctr+1<<" : ";
		cin>>arr[ctr];
	}
for(ctr = 1;ctr < 10; ctr++)
    {
       if(arr[0] < arr[ctr])
           arr[0] = arr[ctr];
    }
    cout << "Largest element = " << arr[0] << endl;
 for(ctr = 1;ctr < 10; ctr++)
    {
       if(arr[0] > arr[ctr])
           arr[0] = arr[ctr];
    }
    cout << "Smallest element = " << arr[0] << endl;
	for(ctr=0; ctr<10; ctr++){
		sum+=arr[ctr];
	}
	cout<<"Sum: "<<sum<<endl;
	ave=sum/10;
	cout<<"Average: "<<setprecision(2)<<ave<<endl;
	
	getch();
	return 0;
}
