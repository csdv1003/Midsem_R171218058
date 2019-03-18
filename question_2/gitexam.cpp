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
    void mul(int n1,int n2)
		{
      //Multiplication function added in second commit
			result=n1*n2;
			cout<<"Result is : "<<result;
		}
		void div(int n1,int n2)
		{
      //Division function added in second commit
			result=n1/n2;
			cout<<"Result is : "<<result;
		}
    void pwr(int n1,int n2)
		{
      //Power function added in calculator in third commit
			result=pow(n1,n2);
			cout<<"Result is : "<<result;
		}
};

int main()
{
	int choice;
	int num1,num2;
	calc c;
  //object created
  while(1)
	{
    //Infinite loop added to terminate the program according to user will in commit 3
		cout<<endl<<endl<<"1.Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Power"<<endl<<endl<<"0.Exit"<<endl;
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
      case 3:
  			cout<<"Enter first number : ";
        cin>>num1;
        cout<<"Enter second number : ";
        cin>>num2;
        c.mul(num1,num2);
  			break;
  		case 4:
  			cout<<"Enter first number : ";
        cin>>num1;
        cout<<"Enter second number : ";
        cin>>num2;
  			c.div(num1,num2);
  			break;
        //Switch case extended in commit 2 to call * and / functions.
      case 5:
  			cout<<"Enter base : ";
  			cin>>num1;
  			cout<<"Enter exponent : ";
  			cin>>num2;
  			c.pwr(num1,num2);
  			break;
  		case 0:
  			return 0;
  			break;
        //Exit case provided in third commit
  		default:
  			cout<<"Wrong input";
  			break;
        //Default case provided in third commit
		}
  }
	return 0;
  //Program ends here
}
