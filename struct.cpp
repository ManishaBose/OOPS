#include<iostream>
#include<cstring>
using namespace std;
struct student
{  int roll;
   char name[50];
   
   student()
   {
   	 strcpy(name,"XXXX");
   	 roll=-1;
   	 		cout<<"Enter the roll of student"<<endl;
   			cin>>roll;
   			cout<<"Enter the name of student"<<endl;
   			fflush(stdin);
   			cin.getline(name,50);
   }
   student(int r, char *n)

	{
		strcpy(name,n);
		roll=r;
	
   	}  
	   void input()
   		{
   			cout<<"Enter the roll of student"<<endl;
   			cin>>roll;
   			cout<<"Enter the name of student"<<endl;
   			fflush(stdin);
   			cin.getline(name,50);
   		}
	
	void display()
	{
		
		cout<<"Student roll:"<<roll<<endl;
		cout<<"Name:"<<name<<endl;
	}
	
	
	
};



int main()
{
	student * s = new student[2];
	int x;
	char y[50];
	
	int i;
	
	student * ptr = new student();
	ptr->input();
	ptr->display();
	cout<<"**********************"<<endl;
	 for(i=0;i<2;i++)
	 {
	 	cout<<"Enter the roll of student"<<endl;
   		cin>>x;
   		fflush(stdin);
   		cout<<"Enter the name of student"<<endl;
   		cin.getline(y,50);
	 	s[i]= student(x,y);
	 	
	 }
	for(i=0;i<2;i++)
	 {
	 	cout<<"Student roll:"<<s[i].roll<<endl;
		cout<<"Name:"<<s[i].name<<endl;
	 	
	 	
	 }
	
	return 0;
}
