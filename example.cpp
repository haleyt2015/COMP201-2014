#include <iostream>
using namespace std;

int main()
{
	double arr[3][4]={
		{0.0,0.1,0.2,0.3},
		{1.0,1.1,1.2,1.3},
		{2.0,2.1,2.2,2.3},
	};
	
	for (int row=0,row<3;row++)
	{
		for(int col=0,rol<4;col++)
		{
			cout<<"row=="<<row;
			cout<<",col=="<<col;
			cout<<"; "<<arr[row][col];
			cout<<endl;
		}
	}


return 0;
}