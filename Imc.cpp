#include<iostream>
using namespace std;
int main()
{
	float EPM_imc,EPM_peso,EPM_altura;
	cout<<"ingrese el EPM_peso (kg) :"; 
	cin>>EPM_peso;
	cout<<"ingrese la EMP_altura (metros) :";
	cin>>EPM_altura;
	EPM_imc=EPM_peso/(EPM_altura*EPM_altura);
	if(EPM_imc<18.5){
		cout<<"usted tiene bajo peso "<<endl;
	}
	if(EPM_imc>=18.5 && EPM_imc<24.9){

		cout<<"usted tiene peso normal "<<endl;
	}
	if(EPM_imc>=25 && EPM_imc<26.9){
		cout<<"usted tiene sobrepeso grado I "<<endl;
	}
	if(EPM_imc>=27 && EPM_imc<29.9){
		cout<<"usted tiene sobrepeso grado II "<<endl; 
	}
	if(EPM_imc>=30 && EPM_imc<34.9){
		cout<<"usted tiene obesidad de tipo I "<<endl;
	}
	if(EPM_imc>=35 && EPM_imc<39.9){
	cout<<"usted tiene obesidad de tipo II "<<endl;
	}
	if(EPM_imc>=40 && EPM_imc<49.9){
		cout<<"usted tiene obesidad de tipo III (morbida) "<<endl;
	}

	if(EPM_imc>50){
		cout<<"usted tiene obesidad tipo iv (extrema) "<<endl;
	}
	return 0;
}
