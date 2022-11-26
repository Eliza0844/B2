#include<iostream>
using namespace std;
int main()
{
	int EPM_aa,EPM_ma,EPM_da,EPM_an,EPM_mn,EPM_dn,EPM_a,EPM_m,EPM_d;
cout<<"ingrese la fecha actual :";
	cin>>EPM_aa>>EPM_ma>>EPM_da;
	cout<<"ingrese la fecha de nacimiento :";
	cin>>EPM_an>>EPM_mn>>EPM_dn;
	if(EPM_da>EPM_dn){
		EPM_d=EPM_da-EMP_dn;
	}else{
		EPM_da=EPM_da+30;
		EPM_ma=EPM_ma-1;
		EPM_d=EPM_da-EPM_dn;
	}
 if(EPM_ma>EPM_mn){
		EPM_m=EPM_ma-EPM_mn;
	}else{
		EPM_ma=EPM_ma+12;
		EPM_aa=EPM_aa-1;
		EPM_m=EPM_ma-EPM_mn;
	}
	EPM_a=EPM_aa-EPM_an;
	cout<<"usted tiene "<<EPM_a<<" años, "<<EPM_m<<" meses, "<<EPM_d<<" dias "<< endl;
	
	return 0;
}
