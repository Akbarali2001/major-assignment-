#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int choice;
	float num1, num2;
	cout<<" Name: AKBAR ALI \t\t Program: BS-SE";
	cout<<"\n ID: 11701 \t\t Section: E\n\n";
	
	cout<<"\t -----------------------------------";
	cout<<"\n\t\tScintific Calculator";
	cout<<"\n\t -----------------------------------";
	cout<<"\n Press the Following Numbers for different operation";
	cout<<"\n\n\t 1: Addition \t\t\t 9: Sin";
	cout<<"\n\t 2: Subtraction \t\t 10: Tan";
	cout<<"\n\t 3: Multiplication \t\t 11: Cos";
	cout<<"\n\t 4: Division \t\t\t 12: InverseCos";
	cout<<"\n\t 5: Squre Root \t\t\t 13: InverseTan";
	cout<<"\n\t 6: Percentage \t\t\t 14: InverseSin";
	cout<<"\n\t 7: Average \t\t\t 15: Logrithem";
	cout<<"\n\t 8: Cube \t\t\t 16: Power ";
	cout<<"\n 17: Exit";
	do{
		cout<<"\n Enter Your Choice: ";
		cin>>choice;	
		
	switch(choice)
	{
		case 1:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 + num2;
			break;
		case 2:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 - num2;
			break;
		case 3:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 * num2;
			break;
		case 4:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<num1 / num2;
			break;
		case 5:
			cout<<"\n Enter Any Number to find Squre Root : ";
			cin>>num1;
			cout<<"\n The Result is = "<<sqrt(num1);
			break;
		case 6:
			float obt, total;
			cout<<"\n Enter Obtained Mark's' : ";
			cin>>obt;
			cout<<"\n Enter Total Mark's' : ";
			cin>>total;
			cout<<"\n The Result is = "<<(obt/total)*100;
			break;
		case 7:
			cout<<"\n Enter 1st Number : ";
			cin>>num1;
			cout<<"\n Enter 2nd Number : ";
			cin>>num2;
			cout<<"\n The Result is = "<<(num1 + num2)/2;
			break;
		case 8:
			cout<<"\n Enter Any Number to find Cube : ";
			cin>>num1;
			cout<<"\n The Result is = "<<num1 * num1 * num1;
			break;
		case 9:
			cout<<"\n Enter A Number to find sin: ";
			cin>>num1;
			cout<<"\n The Result is = "<<sin(num1);
			break;
		case 10:
			cout<<"\n Enter A Number to find Tan: ";
			cin>>num1;
			cout<<"\n The Result is = "<<tan(num1);
			break;
		case 11:
			cout<<"\n Enter A Number to find Cos: ";
			cin>>num1;
			cout<<"\n The Result is = "<<cos(num1);
			break;
		case 12:
			cout<<"\n Enter A Number to find inverse of cos in Degree: ";
			cin>>num1;
			cout<<"\n The Result is = "<<acos(num1);
			break;
		case 13:
			cout<<"\n Enter A Number to find inverse of tan in Degree: ";
			cin>>num1;
			cout<<"\n The Result is = "<<atan(num1);
			break;
		case 14:
			cout<<"\n Enter A Number to find inverse of sin in Degree: ";
			cin>>num1;
			cout<<"\n The Result is = "<<asin(num1);
			break;
		case 15:
			cout<<"\n Enter A Number to find Logrithem: ";
			cin>>num1;
			cout<<"\n The Result is = "<<log10(num1);
			break;
		case 16:
			cout<<"\n Enter Any Number :  ";
			cin>>num1;
			cout<<"\n Enter Exponent : ";
			cin>>num2;
			cout<<"\n The Result is = "<<pow(num1,num2);
			break;
		case 17:
			exit(0);
			break;
		default:
			cout<<"\n Wrong Input !!!!";
			break;
	}                             
	}
	while(choice != 16);
}