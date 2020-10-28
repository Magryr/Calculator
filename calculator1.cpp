#include<iostream>
#include<conio.h>
using namespace std; 
int main()

{
	int option;
	system("cls");
	cout<<"[1]MULTIPLICATION"<<endl;
	cout<<"[2]DIVISION"<<endl;
	cout<<"[3]ADDITION"<<endl;
	cout<<"[4]SUBTRACTION"<<endl;
	cout<<"[5]EXIT"<<endl;
	cout<<"CHOOSE METHOD:";
	cin>>option;
	switch(option){
	
		case 1:
			int m,m1,total;
			system("cls");
			cout<<"Input First Number:"<<endl;
			cin>>m;
			cout<<"Input Second Number"<<endl;
			cin>>m1;
			total=m*m1;
			cout<<"Total:"<<total<<endl;
			main();
			break;
				case 2:
					system("cls");
					int d,d1,total1;
					cout<<"Input First Number"<<endl;
					cin>>d;
					cout<<"Input Second Number";
					cin>>d1;
					total1=d/d1;
					cout<<"Total:"<<total1<<endl;
					system("pause");
					main();
					break;
						case 3:
							system("cls");
							int a,a1,total2;
							cout<<"Input First Number"<<endl;
							cin>>a;
							cout<<"Input Second Number"<<endl;
							cin>>a1;
							total2=a+a1;
							cout<<"Total:"<<total2<<endl;
							system("pause");
					main();
					break;
						case 4:
							system("cls");
							int s,s1,total3;
							cout<<"Input First Number";
							cin>>s;
							cout<<"Input Second Number";
							cin>>s1;
							total3=s-s1;
							cout<<"Total:"<<total3<<endl;
							system("pause");
					main();
					break;
						case 5:
							system("cls");
							return 0;
					break;
					default:
						cout<<"invalid";
						break;
			
	}
	return 0;
}