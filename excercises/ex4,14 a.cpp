#include <iostream>
using namespace std;
int main ()
{
	char standing;
	
	cout<<" enter your standing : ";
	cin>>standing;
	
	if(standing=='F')
	cout<<" First year" ;
	if(standing=='S')
    cout<<" Sophomore";
   else if ((standing >= 'A' && standing <= 'E') || (standing >= 'G' && standing <= 'R') || (standing >= 'T' && standing <= 'Z'))
    cout<< "Junior or Senior" << endl;
    return 0;
}
