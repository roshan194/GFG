#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)
{
	if(n==0)
	   return 1;
		
	return n * fact(n-1);
}
int main() {
    
    	int number;
        cout<<"Enter a number"<<endl;
        cin>>number;
    	
    	cout<<"Factorial of" <<' ' <<number <<" " <<"is"<< ' ' <<fact(number);
    	
    	return 0;
}