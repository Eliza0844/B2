#include<iostream>
using namespace std;
int main()
{
	float EPM_x,EPM_s=0,EPM_vb,EPM_piva=12,EPM_viva,EPM_pdesc=10,EPM_vdesc,EPM_vn;
	int EPM_i=0,EPM_l;
	cout<<"Ingrese l: ";
	cin>>EPM_l;
	do{
		cout<<"Ingrese x: ";
		cin>>EPM_x;
		EPM_i=EPM_i+1;
		EPM_s=EPM_s+EPM_x;
	}while(EPM_i<EPM_l);
	EPM_vb=EPM_s;
	EPM_viva=EPM_vb*EPM_piva/100;
	EPM_vdesc=EPM_vb*EPM_pdesc/100;
	EPM_vn=EPM_vb+EPM_viva-EPM_vdesc;
	cout<<"El valor a pagar es de: "<<EPM_vn<<endl;
	return 0;

}
