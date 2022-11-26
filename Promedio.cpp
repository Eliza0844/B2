#include<iostream>
using namespace std;
int main()
{
	float EPM_x,EPM_pm;
	int EPM_i=0,EPM_l;
	cout<<"Ingrese l: ";
	cin>>EPM_l;
	do{
		cout<<"Ingrese x: ";
		cin>>EPM_x;
		EPM_i=EPM_i+1;
		if(EPM_x>EPM_pm){
			EPM_pm=EPM_x;
		}
	}while(EPM_i<EPM_l);
	cout<<"El promedio maximo de el curso fue: "<<EPM_pm<<endl<<endl;
	return 0;
}
