// ProgrammingAssignment.cpp
// Personal Planner program - Callum Wykes

#include "pch.h"
#include <iostream>//required to use cout and cin
#include <string>//required to use strings
#include <fstream>//required to use use exterior files
#include <vector>//required to use vactors
#include "get_file_name.h"//calls the .h file called get_file_name.h
using namespace std;

//class contains members and functions to get, show and validate the deatils for plans
class plan
{
private:
	string PlanTitle;
	int D, M, Y; // split up into day month and year to validate
	string PlanDate;
	int hour, min; // split up into hour and min  to validate 
	string PlanTime;
	string PlanLocation;
public:
	//date validation
	bool check_date(int day, int month, int year) //function to return true if the date is valid and false if the date is invalid
	{
		if (day <= 31 && day >= 1 && month <= 12 && month >=1 && year >= 2000 && year <=2050)//a day can only be 01 - 31, month 01 - 12, year set from 2000 to 2050 to aviod out of reach dates
		{
			if (day == 30)// if statement to make sure the number of days matches with the month, e.g. the month February cannot have 31 days 
			{
				if (month == 1, 2, 3, 5, 7, 8, 10, 12)
				{
					return false;
				}
			}
			else if (day == 31)
			{
				if (month == 2, 4, 6, 9, 11)
				{
					return false;
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}
	string vali_date(int day, int month, int year)// when called and made equal to the PlanDate variable this function checks the date is valid using the check date function and repeates that until the date entered is valid, the function then turns the entered day month and year into a string value in a date format
	{

		while (check_date(day, month, year) == false)
		{
			if (cin.fail())// If the user entered a non-int value
			{
				while (cin.fail())//while the value is a non-int value
				{
					cout << "INVALID DATE!\nPlase enter a valid date in the format DD MM YYYY :" << endl;
					cin.clear();//clears the input so that the user can type their input again, otherwise they would not be able to
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignores how many invalid inputs the user puts in, stops it from repeating itself
					cin >> day >> month >> year;
				}
			}
			cout << "INVALID DATE!\nPlase enter a valid date in the format DD MM YYYY" << endl;
			cin >> day >> month >> year;
		}
		//stars putting the date into string format
		string valid_date, valid_day, valid_month, valid_year;
		if (day <= 9)//if statement to make sure that a day returns two digits e.g. 4/12/2018 will be 04/12/2018
		{
			valid_day = "0" + to_string(day);// to_string function turns an int value into a string value
		}
		else
		{
			valid_day = to_string(day);
		}
		if (month <= 9)//if statement to make sure that a month returns two digits e.g. 20/6/2016 will be 20/06/2016
		{
			valid_month = "0" + to_string(month);// to_string function turns an int value into a string value
		}
		else
		{
			valid_month = to_string(month);
		}
		valid_year = to_string(year);// to_string function turns an int value into a string value
		valid_date = valid_day + "/" + valid_month + "/" + valid_year;// creates the date by putting the strings of the date values together with / between
		return valid_date;//returns this created valid date value 
	}
	//time validation
	bool check_time(int our, int min)// function returns true if the time is valid and flase if not
	{
		if (our <= 23 && our >= 00 && min <= 59 && min >= 00)// 24 hour clock can only be 00 - 23, min can only be 00 - 59
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string valid_time(int our, int min)//function finds if the time is valid using the check_time function
	{
		while (check_time(our, min) == false)
		{
			if (cin.fail())// If the user entered a non-int value
			{
				while (cin.fail())
				{
					cout << "INVALID DATE!\nPlase enter a valid date in the format HH MM :" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cin >> our >> min;
				}
			}
			cout << "INVALID TIME!\nPlase enter a valid date in the format HH MM" << endl;
			cin >> our >> min;
		}
		//turning the hour and min values into a string
		string valid_time, valid_our, valid_min;
		if (our <= 9)//makes sure that the time returns 03:00 not 3:0
		{
			valid_our = "0" + to_string(our);
		}
		else
		{
			valid_our = to_string(our);
		}
		if (min <= 9)
		{
			valid_min = "0" + to_string(min);
		}
		else
		{
			valid_min = to_string(min);
		}
		valid_time = valid_our + ":" + valid_min;
		return valid_time;
	}
	void getdata()//function to get the users input for the plan values
	{
		cout << "\nEnter the name/topic of the plan: " << endl;
		cin >> PlanTitle;
		cout << "\nEnter the date of the plan in the form DD MM YYYY :" << endl;
		cin >> D >> M >> Y;
		PlanDate = vali_date(D, M, Y);
		cout << "\nEnter the time of the plan in the form HH MM :" << endl;
		cin >> hour >> min;
		PlanTime = valid_time(hour, min);
		cout << "\nEnter the location of the plan: " << endl;
		cin >> PlanLocation;
	}

	void showdata(string PlanTitle, string PlanDate, string PlanTime, string PlanLocation)//function to show the users plan
	{
		system("CLS");//clears the screen
		cout << "\nYour Plan is" << endl;
		cout << "Plan Title: " << PlanTitle << endl;
		cout << "Plan Date: " << PlanDate << endl;
		cout << "Plan Time: " << PlanTime << endl;
		cout << "Plan Location: " << PlanLocation << endl;
		cin.ignore();//ingnores the users input
		cout << "Press enter to continue";
		cin.get();//get() makes sure the users input is not stored or used at all

	}
	//these functions individualy return the current values of the Plans 
	string getTitle()
	{
		return PlanTitle;
	}
	string getDate()
	{
		return PlanDate;
	}
	string getTime()
	{
		return PlanTime;
	}
	string getLocation()
	{
		return PlanLocation;
	}
};
// Plan object created 
plan planObject;

void create_plan()//function to create a plan and add it to a file
{
	string pfile = get_filename();//calls function to get the users name


	ofstream userplanner;//opens to file into userplanner to be inputed into
	userplanner.open(pfile, ios_base::app);//ios_base::app makes sure that the file is not written over by the new plan, if a file is not present it creates it

	planObject.getdata();//calls the getdata function
	userplanner << planObject.getTitle();
	userplanner << "\n";//skips a line in the file
	userplanner << planObject.getDate();
	userplanner << "\n";
	userplanner << planObject.getTime();
	userplanner << "\n";
	userplanner << planObject.getLocation();
	userplanner << "\n\n";

	userplanner.close();//closes the file
	cout << "\nNew plan has been created\n";
	cin.ignore();
	cout << "Press enter to continue";
	cin.get();

}

void view_plan()//function to view a specific plan
{
	string pfile = get_filename();

	ifstream userplanner;//ifstream opens the file to be outputted from
	userplanner.open(pfile);


	string usein;
	cout << "Enter the title of the plan you want to view" << endl;
	cin >> usein;
	string ptitle, pdate, ptime, plocation;
	string line;
	vector<string> planvec;// creates a vector called planvec for the file to be stored into
	while (getline(userplanner, line))
	{
		planvec.push_back(line);//moves("pushes") all of the lines from the file into the vector in order from the top going down
	}
	for (int i = 0; i < planvec.size(); i++)//loop to search the vector for the users input
	{
		if (usein == planvec[i])
		{
			ptitle = planvec[i];//saves the values of the found plan in the vector to variables
			pdate = planvec[i + 1];
			ptime = planvec[i + 2];
			plocation = planvec[i + 3];
			planObject.showdata(ptitle, pdate, ptime, plocation);//shows the plan the user requested
			break;
		}
		else if (i == planvec.size() - 1)//if the plan title not found
		{
			cout << "Plan not found\nReturning to menu" << endl;
			cin.ignore();
			cout << "Press enter to continue";
			cin.get();

		}
	}
	

	userplanner.close();
}

void view_all()//function to view all of the plans in the file
{

	string pfile = get_filename();


	ifstream userplanner;
	userplanner.open(pfile);
	system("CLS");
	string ptitle, pdate, ptime, plocation;
	string line;
	vector<string> planvec;
	while (getline(userplanner, line))
	{
		planvec.push_back(line);
	}
	for (int i = 0; i < planvec.size(); i++)//displays all of the lines in the vector
	{
		cout << planvec[i] << endl;
	}
	cin.ignore();
	cout << "Press enter to continue...";
	cin.get();
}

void edit_plan()//function to find and edit a plan in the file
{
	string pfile = get_filename();


	ifstream userplanner;
	userplanner.open(pfile);


	string usein;
	cout << "Enter the title/topic of the plan you want to edit" << endl;
	cin >> usein;
	string ptitle, pdate, ptime, plocation;
	string line;
	vector<string> planvec;
	while (getline(userplanner, line))
	{
		planvec.push_back(line);
	}

	for (int i = 0; i < planvec.size(); i++)
	{
		if (usein == planvec[i])
		{
			ptitle = planvec[i];
			pdate = planvec[i + 1];
			ptime = planvec[i + 2];
			plocation = planvec[i + 3];
			planObject.showdata(ptitle, pdate, ptime, plocation);
			cout << "Enter the values for the new plan" << endl;
			userplanner.close();

			//reopens the file to be edited into, saved into userplanner2
			ofstream userplanner2;
			userplanner2.open(pfile);

			planObject.getdata();//allows the user to enter the values that they want to edit 
			planvec[i] = planObject.getTitle();
			planvec[i + 1] = planObject.getDate();
			planvec[i + 2] = planObject.getTime();
			planvec[i + 3] = planObject.getLocation();
			
			for (int p = 0; p < planvec.size(); p++)//writes the vector back into the file
			{
				userplanner2 << planvec[p];
				userplanner2 << "\n";
			}
			userplanner2.close();
			cout << "\nThe plan has been editied\n";
			cin.ignore();
			cout << "Press enter to continue";
			cin.get();
			break;
		}
		else if (i == planvec.size() - 1)//if the plan title not found
		{
			cout << "Plan not found\nReturning to menu" << endl;
			cin.ignore();
			cout << "Press enter to continue";
			cin.get();

		}
	}
}

void today()//founction to find out what plans the user has on todays date or any date they enter
{
	string pfile = get_filename();


	ifstream userplanner;

	userplanner.open(pfile);



	string usein;
	int ud, um, uy;
	cout << "What is the date today? Please write in the format DD MM YYYY" << endl;
	cin >> ud >> um >> uy;
	usein = planObject.vali_date(ud, um, uy);
	string ptitle, pdate, ptime, plocation;
	string line;
	vector<string> planvec;
	while (getline(userplanner, line))
	{
		planvec.push_back(line);
	}
	for (int i = 0; i < planvec.size(); i++)
	{
		if (usein == planvec[i])
		{
			ptitle = planvec[i - 1];//finding the title that is after the date in the vector
			pdate = planvec[i];
			ptime = planvec[i + 1];
			plocation = planvec[i + 2];
			planObject.showdata(ptitle, pdate, ptime, plocation);
			break;
		}
		else if (i == planvec.size() - 1)//if the plan date not found
		{
			cout << "Plan not found\nReturning to menu" << endl;
			cin.ignore();
			cout << "Press enter to continue";
			cin.get();
		}
	}

	userplanner.close();

}

void entry_menu()//menue that the user will use to navigate the program
{
	system("CLS");
	char ch1;
	cout << "\nENTRY MENU";
	cout << "\n\n1.CREATE A PLAN";
	cout << "\n\n2.VIEW ALL PLANS";
	cout << "\n\n3.VIEW A PLAN";
	cout << "\n\n4.EDIT A PLAN";
	cout << "\n\n5.WHAT'S ON TODAY?";
	cout << "\n\n6.EXIT";
	cout << "\n\nPlease Enter Your Choice (1-6) ";
	cin >> ch1;
	switch (ch1)//switch statement to get the user input
	{
	case '1':
		system("CLS");
		create_plan();
		entry_menu();
		break;
	case '2':
		system("CLS");
		view_all();
		entry_menu();
		break;
	case '3':
		system("CLS");
		view_plan();
		entry_menu();
		break;
	case '4':
		system("CLS");
		edit_plan();
		entry_menu();
		break;
	case '5':
		system("CLS");
		today();
		entry_menu();
	case '6'://exits the program
		break;
	default:
		cout << "\a";
		entry_menu();
	}
}

int main()//main function simply calls the entry menu to begin the program
{
	entry_menu();
}