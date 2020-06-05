#include<iostream>
using namespace std;
#define PI 3.14
#define AF 0.5

int area(int A)
{
	cout<<"area of cirlcle(in cm):- "<<PI*A*A<<endl;
}
float area(float base,float hight)
{
	cout<<"area of trigle(in cm):- "<<AF*base*hight<<endl;
}
double area(double length,double breadth)
{
	cout<<"area of rectangle(in cm):- "<<length*breadth<<endl;
}
int main()
{	cout<<"\n 1.find area of cirlcle ?"<<endl;
	cout<<"\n 2.find area of trigle and, ?"<<endl;
	cout<<"\n 3.find area of rectangle ? "<<endl;


	int n;
	cout<<"\n====User choose coditions======\n"<<endl;
	cin>>n;

	switch(n)
	{	case 1:
 		int A;
		cout<<"~~~~Area of Circle~~~~:- "<<endl;///radius *r^2
		cin>>A;
		area(A);///direct accessing in functions
		break;
	case 2:
		float a,b;//=3.44,b=4.33;
		cout<<"~~~~Area of Trigle~~~~:- "<<endl;
		cin>>a;
		cin>>b;//0.5*a= base*b= hight
		area(a,b);
		break;

	case 3:
		double t,y;//=6.45,y=32.34;
		cout<<"~~~Area of Rectangle~~~~:- "<<endl;
		cin>>t>>y;
		//area = lenght*breadth
		area(t,y);
		break;

	default :
		cout<<"EXIT";
		}

	return 0;
}
