//Project tests

// ProgrammingAssignment.cpp
// Personal Planner program



#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;















//class plan
//{
//private:
//	string PlanTitle;
//	string PlanDate;
//	string PlanTime;
//	string PlanLocation;
//public:
//	int PlanID;
//	void getdata()
//	{
//		cout << "\nEnter the name of a plan: " << endl;
//		cin >> PlanTitle;
//		cout << "\nEnter the date of the plan: " << endl;
//		cin >> PlanDate;
//		cout << "\nEnter the time of the plan: " << endl;
//		cin >> PlanTime;
//		cout << "\nEnter the location of the plan: " << endl;
//		cin >> PlanLocation;
//	}
//
//	void showdata()
//	{
//		cout << "\nPlan Number: " << PlanID;
//		cout << "\nPlan Title: " << PlanTitle;
//		cout << "\nPlan Date: " << PlanDate;
//		cout << "\nPlan Time: " << PlanTime;
//		cout << "\nPlan Location: " << PlanLocation;
//		cout << "\nPress enter to continue";
//		cin.ignore();
//
//	}
//	int getID()
//	{
//		return PlanID;
//	}
//	string getTitle()
//	{
//		return PlanTitle;
//	}
//	string getDate()
//	{
//		return PlanDate;
//	}
//	string getTime()
//	{
//		return PlanTime;
//	}
//	string getLocation()
//	{
//		return PlanLocation;
//	}
//};
//
//plan po;
//
//string get_name()
//{
//	//Get the users name
//	string name1;
//	cout << "Enter your name: ";
//	cin >> name1;
//	return name1;
//}
//
//string open_infile()
//{
//	string name1;
//	name1 = get_name();
//	//open the file using the users name
//	string pfile = name1 + ".txt";
//	fstream userplanner;
//	userplanner.open(pfile, ios_base::app);
//	return pfile;
//}
//
//void create_plan(string pfile)
//{
//	userplanner = open_infile();
//	po.getdata();
//	userplanner << "\n";
//	userplanner << po.getTitle();
//	userplanner << "\n";
//	userplanner << po.getDate();
//	userplanner << "\n";
//	userplanner << po.getTime();
//	userplanner << "\n";
//	userplanner << po.getLocation();
//	userplanner << "\n";
//
//	userplanner.close();
//	cout << "\nNew plan has been created\n";
//}
//
//
//int main()
//{
//
//}







































































//class plan {
//public:
//	int PlanID;
//	string PlanTitle;
//	string PlanDate;
//	string PlanTime;
//	string PlanLocation;
//
//	void getdata()
//	{
//		cout << "\nEnter the name of a plan: ";
//		cin >> PlanTitle;
//		cout << "\nEnter the date of the plan: ";
//		cin >> PlanDate;
//		cout << "\nEnter the time of the plan: ";
//		cin >> PlanTime;
//		cout << "\nEnter the location of the plan: ";
//		cin >> PlanLocation;
//	}
//
//	void showdata()
//	{
//		cout << "\nPlan Title: " << PlanTitle;
//		cout << "\nPlan Date: " << PlanDate;
//		cout << "\nPlan Time: " << PlanTime;
//		cout << "\nPlan Location: " << PlanLocation;
//	}
//};
//
//plan po;
//fstream  userplanner;
//
//
////enter the users name
//string name()
//{
//	string name1;
//	cout << "Enter your name: ";
//	cin >> name1;
//	return name1;
//}
//
////opens a file
//void open_file(string file1, string fname)
//{
//	userplanner.open(file1);
//
//	userplanner << fname << "'s plans:";
//}
//
////creating a plan
//string create_plan()
//{
//	po.getdata();
//}
//
////view the plan
//void view_plan()
//{
//	po.showdata();
//}
//
//string get_date()
//{
//	string useimp;
//	cout << "What is todays date? (Day/Month/Year)" << endl;
//	cin >> useimp;
//	return useimp;
//}
//
//void new_screen(string date)
//{
//	system("CLS");
//	cout << "Today's date is : " << date << endl;
//}
//
//void login_menu()
//{
//	cout << "Welcome to the personal planner program.\nTo accsess your plans please login using your name and password." << endl;
//
//}
//
//void entry_menu(string date_today)
//{
//	char ch1;
//	cout << "\nENTRY MENU";
//	cout << "\n\n1.CREATE A PLAN";
//	cout << "\n\n2.VIEW A PLAN";
//	cout << "\n\n3.EDIT A PLAN";
//	cout << "\n\n4.WHAT'S ON TODAY?";
//	cout << "\n\n5.EXIT";
//	cout << "\n\nPlease Enter Your Choice (1-5) ";
//	cin >> ch1;
//	switch (ch1)
//	{
//	case '1':
//		new_screen(date_today);
//		create_plan();
//		new_screen(date_today);
//		entry_menu(date_today);
//		break;
//	case '2':
//		new_screen(date_today);
//		view_plan();
//		new_screen(date_today);
//		entry_menu(date_today);
//		break;
//	case '3':
//		//edit_plan();
//		break;
//	case '4':
//		//today();
//		break;
//	case '5':
//		break;
//	default:
//		cout << "\a";
//		entry_menu(date_today);
//	}
//}
//
//int main()
//{
//	//Get the date 
//	string datetoday;
//	datetoday = get_date();
//
//	new_screen(datetoday);
//	//get the users name
//	string fname;
//	fname = name();
//	//opens a txt file under the users name
//	string pfile = fname + ".txt";
//
//	cout << pfile << " has been created" << endl;
//
//	open_file(pfile, fname);
//
//
//	new_screen(datetoday);
//	//display the entry menu
//	entry_menu(datetoday);
//
//
//
//	return 0;
//}