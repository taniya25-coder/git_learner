#include<iostream.h>
#include<conio.h>
 class student{
 public:
 char name[20];
 int roll;
 float marks;
 void input();
 void display();
 };
 void student::input(){
 cout<<"enter name";
 cin>>name;
 cout<<"enter roll no.";
 cin>>roll;
 cout<<"enter marks";
 cin>>marks;
 }
 void student::display(){
 cout<<"name="<<name<<endl;
 cout<<"roll no.="<<roll<<endl;
 cout<<"marks="<<marks<<endl;
 }
 void main(){
 clrscr();
 student s[3];
 int i;
 for(i=0;i<3;i++){
 s[i].input();
 }
 for(i=0;i<3;i++){
 s[i].display();
 }
 getch();
 }