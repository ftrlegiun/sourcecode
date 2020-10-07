

#include <iostream>
#include <conio.h>
using namespace	std;

int main(){

int nilai[3],a,max,min;


for(int a=0 ; a<3 ; a++){
	cout << "masukan tinggi badan  =" ;
	cin >> nilai[a];
}

max = nilai [0] ;
min = nilai [0] ;
for (a=0 ; a<3 ; a++)
if (nilai [a] < min )
			{min = nilai[a];
}
		else if(nilai [a] > max){max=nilai[a];
		}
	
cout << "nilai minimum adalah =" << min << endl;
cout << "nilai maximum adalah =" << max << endl;

return 0;
}
