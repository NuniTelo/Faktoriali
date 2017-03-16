#include<iostream>
using namespace std;

int faktorial(int nr){
	long int prodhimi = 1;
	int i = 1;
	while (i < nr){
		prodhimi *= nr;
		nr--;
	}
	return prodhimi;
}

int main(){
	int numri;
	cin >> numri;
	cout <<"Faktoriali eshte: " <<faktorial(numri)<<endl;
	system("pause");
	return 0;
}