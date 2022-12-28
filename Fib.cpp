#include<iostream>
using namespace std;
int main(){
	int v1=0, v2=1, v3=0;
	int i;
	int pom;
	int ciag;
	cout<<"Fibonacci"<<endl;
	cout<<"gr.1.2"<<endl;
	cout<<"Marek Cichon"<<endl;
	
	cout<<"Podaj numer ciagu"<<endl;
	cin>>ciag;
	for(i=2;i<=ciag;i++){
		v3=v1+v2;
		v1=v2;
		v2=v3;
	}
	if(ciag == 0) {
            cout<<"Wartosc to: 0"<<endl;
        }
    if(ciag == 1) {
            cout<<"Wartosc to: 1"<<endl;
        }
	cout<<"Wartosc to: "<<v3<<endl;
}
