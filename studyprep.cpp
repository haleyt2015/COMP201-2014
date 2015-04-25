#Include <iostream>
using namespace std;

int main(){
	
	int size
	int *x
	
	cin >> size;
	
	x=new int [ size ];
	
	for(int i=0;i<size; i++)
		*(x+i)=(2*(i+1));
	
	for(int i=0, i<size, i++)
		cout<<*(x+i)<<endl;
	
	delete []x; 
		
	return 0;
}