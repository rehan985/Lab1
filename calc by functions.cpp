//Design a calcultor that takes two values from the user and print their mult and div accordingly.
#include <iostream>
using namespace std;

int multiply(int value1, int value2){
	int	mult;
	mult=value1*value2 ;
		return mult;
		}
	int divide(int value1,int value2){
		int div=value1/value2;
		return div;
	}	
		
		
		
int main ()
{
	
	int value1, mult,value2, answerD,answerM,div;
	cout<<"ENter the values=";
	cin>>value1;
	cin>>value2;
	
	answerM= multiply(value1,value2);
	cout<< answerM<<endl;
	
	answerD= divide(value1,value2);
	cout<< answerD<<endl;
	

    
	
	
	
	
	return 0;
}


