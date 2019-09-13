#include<iostream>
using namespace std;

struct Nodo{
int valor;
Nodo *ptr;
Nodo(int dato1){
	 valor= dato1;
	 ptr=NULL;    
     }
};
Nodo A1(10), A2(25), A3(30), A4(15), A5(2);
int main (int argc, char** argv){
	 cout<<A1.valor<<endl;
	 cout<<endl;
	 cout<<A2.valor<<endl;
	 cout<<endl;
	 cout<<A3.valor<<endl;
      
     A1.ptr=&A2;
     A2.ptr=&A3;
     A3.ptr=&A4;
     A4.ptr=&A5;
     
     cout<<"el valor del puntero es: "<<endl ;
     cout<<A1.valor<<endl;
     cout<<(A1.ptr)->valor<<endl;
     cout<<(A1.ptr)->ptr->valor<<endl;
     cout<<(A1.ptr)->ptr->ptr->valor<<endl;
     cout<<(A1.ptr)->ptr->ptr->ptr->valor<<endl;
     cout<<(A1.ptr)->ptr->ptr->ptr->ptr->valor<<endl;
      return 0;



}
