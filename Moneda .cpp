#include<iostream>
using namespace std;
int main()
{
	
	float EPM_x,EPM_s=0,EPM_s1=0,EPM_s5=0;
	int EPM_i=0,EPM_l,EPM_i1=0,EPM_i5=0;
	cout<<" ingrese EPM_l :"; 
	cin>>EPM_l;
	do{
		
		cout<<" ingrese EPM_x :";
		cin>>EPM_x;
		EPM_i=EPM_i+1;
		EPM_s=EPM_s+EPM_x;
		if(EPM_x==1){

			EPM_i1=EPM_i1+1;
			EPM_s1=EPM_s1+EPM_x;
	

		}else{
		EPM_i5=EPM_i5+1;
		EPM_s5=EPM_s5+EPM_x;
	}
}while(EPM_i<EPM_l)
cout<<" la cantidad de monedas fue :"<<EPM_i<<endl;
cout<<"el valor en monedas fue :"<<EPM_s<<endl;
es el flujo de salida estándar que por lo general es la pantalla.
cout<<"la cantidad de monedas ($1) fue :"<<EPM_i1<<endl;
cout<<"el valor fue :"<<EPM_s1<<endl;
cout<<"la cantidad de monedas .50 fue :"<<EPM_i5<<endl;
cout<<"el valor fue :"<<EPM_s5<<endl;

return 0;
}
