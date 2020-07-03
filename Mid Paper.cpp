// STUDENT UPLOADING COURSE ASSIGNMENT

#include<iostream>
#include<conio.h>
#include <fstream>
using namespace std;
// STUDENT class
class Student 
{
	public:
		//static data member
	static	int std_id;
	        string std_name;
		
	protected:
	
		void in()
		{
			cout<<"STUDENT UPLOADING COURSE ASSIGNMENT:";
			cout<<"enter the data of STUDENT:";
		
			
		// Creating and writing data on STUDENT TEXT file
		
				ofstream file("c:\\Student.txt");
				{ 
				if(!file)
				{
					cout<<"File opening error"<<endl;
					exit(1);
				}
				file<<std_id<<std_name;
				file.close;
				}
			
		}
		
	
};
// STUDENT course class
// Inheritnce
class Course: protected Student
{
	public:
		string course_title;
		string course_code;
		string studentcourse_id;
		string sec;
		int assignment_num;
	
	protected:
	
		void input()
		{
			cout<<"enter the data of course:";
		}
		//static data member
			Student()
		{
			cout<<"Constructor called.......course"<<endl;
			
		// Creating and writing data on COURSE TEXT file
		
				ofstream file("c:\\Course.txt");
				{ 
				if(!file)
				{
					cout<<"File opening error"<<endl;
					exit(1);
				}
				file<<course_title<<course_code<<studentcourse_id<<sec<<assignment_num;
				file.close;
				}
			
		}
			cout<<"Data of student: "<<endl;
			// showing Data of student
			void output_student();
		{
			ifstream  file("c:\\Student.txt");
				{ 
				if(!file)
				{
					cout<<"File opening error"<<endl;
					exit(1);
				}
				file>>course_title>>std_name;
				cout<<"The contents of student data are as follows:"<<endl;
				cout<<course_title<<endl<<std_name;
				file.close;
	        	}	
		}
		
};
// Teacher see the whole data of student thats why I created teacher class
Class Teacher:protected Course
{
	protected:
	    cout<<"All the data of student and course:"<<endl;
		void output_AllData()
		{
			Course::output_student();
			ifstream  file("c:\\Course.txt");
				{ 
				if(!file)
				{
					cout<<"File opening error"<<endl;
					exit(1);
				}
				file>>course_title>>course_code>>studentcourse_id>>sec>>assignment_num;
				cout<<"The contents of student data are as follows:"<<endl;
				cout<<course_title<<endl<<course_code<<endl<<studentcourse_id<<endl<<sec<<endl<<assignment_num<<endl;
				file.close;
			
		}
		
}
int student::std_id=0;

int main()
{
	clrscr();
	Student S;
	
	S.in();
	Course C;
	C.input();
	cout<<"Data of student: "<<endl;
	C.output_student();
	
	//polymorphism
	Teacher T;
	cout<<"All the data of student and course:"<<endl;
    T.output_AllData();
    getch();
    return 0;	
}
