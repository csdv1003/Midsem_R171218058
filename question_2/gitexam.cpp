#include <iostream>
#include <math.h>

using namespace std;

class calc
{
  //Class c created to provide functions to code
	private:
		int result;
	public:
		void add(int n1,int n2)
		{
      //Basic Addition Function
			result=n1+n2;
			cout<<"Result is : "<<result;
		}
		void sub(int n1,int n2)
		{
      //Basic Subtraction function
			result=n1-n2;
			cout<<"Result is : "<<result;
		}
};

int main()
{
	int choice;
	int num1,num2;
	calc c;
  //object created
		cout<<endl<<endl<<"1.Addition"<<endl<<"2. Subtraction"<<endl;
		cout<<endl<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		cout<<endl<<endl;
		switch(choice)
		{
			case 1:
				cout<<"Enter first number : ";
        cin>>num1;
        cout<<"Enter second number : ";
        cin>>num2;
				c.add(num1,num2);
				break;
			case 2:
				cout<<"Enter first number : ";
        cin>>num1;
        cout<<"Enter second number : ";
        cin>>num2;
        c.sub(num1,num2);
				break;
		}
	return 0;
  //Program ends here
}
