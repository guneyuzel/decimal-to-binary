#include <iostream>
#include <math.h>

using namespace std;
int main (){
	int k=0, i, iv, a[10], s;
	double n, na, h=0, x;
	
	cout << "Enter The Integer Part (Ex: 5) : "; cin >> s;
	cout << "Enter the Decimal Part (Ex: 0.4) : "; cin >> n; x=n;
	cout << "The Number In Binary : ";

	for(i=0; s>0; i++){    
     a[i]=s%2;    
     s=s/2;  
     }   

     for(i=i-1 ;i>=0 ;i--){    
     cout << a[i];    
     }     
    cout << ".";


	while (k < 8) {

		na=n*2;
		iv= int(na);
		cout << iv;
		k++;
		h=h+iv*pow(2,-k);
		n=na-iv;
		}
 
	cout << "\nError Rate= : " << x-h << endl;



	system("pause");
	return 0;			
}