#include<iostream>//bibiotleca que inclui o cout
#include<conio.h>//inclui o getch() que faz com que, quando o programa for executado ele n feche


using namespace std;/* para usar os recursos de entrada e sa�da da biblioteca iostream em C++, � preciso incluir o comando using namespace std;
 Este comando serve para definir um "espa�o de nomes", ou namespace.*/
 
 void piscina(float &c,float &l , float p)
 {
 	float area;
 	float volume;
 	
 	area =  c * l;
 	volume = area * p;
 	
 	
 	c = area;
 	
 	l = volume ;
 	
 	
 }


int main()
{
	float C,L,P;
	
	cout<<"Digite o valor do comprimento  da piscina\n";
	cin>>C;
	
	cout<<"Digite o valor da largura da piscina\n";
	cin>>L;
	
	cout<<"Digite o valor da profundidade da piscina\n";
	cin>>P;
	
	piscina(C,L,P);
	
	cout<<"O valor da area  e equivalente a : "<<C<<"\n";
	
	cout<<"O valor do volume da piscina e equivalente a : "<<L<<"\n";
	
	getch();
	
	
	
	
	
	
}
