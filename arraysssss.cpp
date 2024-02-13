//#include <iostream>
//using namespace std; //arrays
//
//int main ()
//{
//	//make a feature in which all the ters get pribted turn by turn
//	
//	int fruit[5]={90,80,70,60,50};
//	int num;
//	cout<<"eter the no of fruit in whicha agaist you wants pice";
//cin>>num;
//cout<<fruit[num]<<endl;	
//
//	return 0;
//	
//}

//...................

#include <iostream>
using namespace std; //arrays

int main ()
{
//enter the name of commodities and you will get the price of it

string comod[5]={"mango,apple,banana,aloo,karalay"};

int price[5]={10,20,30,40,50};
for(int i=0;i<5;i++)
{
	
cout<<"Enter the nam of commodities";
cin>>comod[i];
cout<<"The price of"<<price[i]<<"=";
//cin>>price[];	
}

return 0;
}
