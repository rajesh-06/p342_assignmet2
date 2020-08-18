#include<iostream>
#include<fstream>
using namespace std;

int main(){
//Define M , N , M*N = P, M*A = Q
int M[3][3], N[3][3], p1[3][3], p2[3][1];

//Reading M.txt and printing
cout<<"M = "<<endl;
ifstream fm("M.txt");
for (int i = 0; i < 3; i++){
	for (int j = 0; j < 3; j++){
		fm >> M[i][j];
		cout<<M[i][j]<<" ";
	}cout<<endl;
}cout<<endl;

//Reading N.txt and printing
cout<<"N = "<<endl;
ifstream n("N.txt");
for (int i = 0; i < 3; i++){
	for (int j = 0; j < 3; j++){
		n >> N[i][j];
		cout<<N[i][j]<<" ";
	}cout<<endl;
}cout<<endl;

//Defing  vector A and printing
int A[3][1] = {2,3,5};
cout<<"A = "<<endl;
for(int i =0; i<3; i++){
	cout<<A[i][0]<<endl;
}cout<<endl;

//for M*N
cout<<"M*N = "<<endl;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		for(int k=0; k<3; k++){
			p1[i][j]+=M[i][k]*N[k][j];
		}
	cout<<p1[i][j]<<" ";
	}
	cout<<endl;
}cout<<endl;

//for M*A
cout<<"M*A = "<<endl;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		p2[i][0]+=M[i][j]*A[j][0];
	}cout<<p2[i][0]<<endl;
}
return 0;	
}