#include<iostream>
using namespace std;//bibliotecas

int main(){
	
	int v=5;
	int* pointv;//decalracion de  variable puntero
	
	pointv =& v;//almacena la direccion de var
	
	cout<<"var = "<<v<<endl; //d� el valor de var
	cout<<"direccion de la variable (&var) = "<<&v<<endl<<endl; //d� la direccion de var
	cout<<"apuntado pointvar =  "<<pointv<<endl<<endl; //d� el puntero de pointvar
	cout<<"cambia el valor de var a 7: "<<endl<<endl;//cambia el valor de var
	
		v=7;//cambia el valor a 7
	
	cout<<"var = "<<v<<endl<<endl; //d� el valor de var
	cout<<"*pointvar = "<<*pointv<<endl<<endl;
	cout<<"cambia el valor de pointvar a 16: "<<endl;//d� el apuntador de pointvar
	
	    *pointv =16;//cambia var a 16
	
	cout<<"var = "<<v<<endl<<endl;//imprime var
	cout<<"apuntador pointvar = "<<pointv<<endl;//d� el valor pointvar
	cout<<"pointvar = "<<*pointv<<endl;//d� el contenido del apuntador
	cout<<"var = "<<v<<endl<<endl;//d� el valor de var
	
	return 0;
	
}
