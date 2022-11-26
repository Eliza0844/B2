#include<iostream>
using namespace std;
int main()
{
	float EPM_x,EPM_s=0;
	int EPM_i=0,EPM_l;
	cout<<"Ingrese cantidad de egrasos (1) : ";
	cin>>EPM_l;
	cout<<"Ingrese el saldo inicial (s) : ";
	cin>>EPM_s;
	do{
		cout<<"Ingrese egreso (x) : ";
		cin>>EPM_x;
		EPM_i=EPM_i+1;
		EPM_s=EPM_s+EPM_x;
	}while(EPM_i<EPM_l);
	cout<<"El saldo final es: "<<EPM_s<<endl;
	return 0;

}
