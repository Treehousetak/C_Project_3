#include<string>
#include<iomanip>
#include<iostream>
using namespace std;

//function to catch incorrect inputs
int errorinput(int choice);

	

int main()
{
	//intialization of variables
	int x;
	bool menu=true;
	int w;
	int stars;

	//prompting the user
	cout << "Welcome back, user! Please choose an option! \n" << "1:Filled Triangle  \n";
	cout << "2:A Filled Square \n" << "3:Filled Obtuse Traingle \n" << "4:Bow Tie \n";
	cout << "5:Exit \n";
	//Getting the x value
	cin >> x;
	//calling the function to catch incorrect inputs
	errorinput(x);
	
	//to make sure the input is within range
	while (x < 1 || x > 5)
	{
		cout << "Please enter your choice in the appropriate parameters (1-5). \n";
		cin >> x;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "ERROR WRONG INPUT. Please enter a number: ";
			cin >> x;
		}
	}

	//while loop to reset the switch loop. This allows it to go back to the main menu after making a choice.
	while (menu = true) {

		switch (x)
		{

		//Case 1 is a filled right triangle
		case 1: {

			//Prompt the user to find out how large the shape is going to be
			cout << "How many stars? (1-50 only) \n";
			cin >> stars;
			while (stars < 1 || stars > 50)
			{
				cout << "Please enter within the parameters (1-50) \n";
				cin >> stars;
			}

			//Add some space to make it look neat
			cout << endl << endl;

			for (int t = 0; t < stars; t++)
			{

				for (int p = 0; p <= t; p++)
				{
					cout << "*";
				}
				cout << endl;

			}
		}

				cout << endl;
				
				//Changing the control variable for the while loop to reset the switch loop
				menu = false;
				cout << "Please choose an option! \n" << "1:Filled Triangle  \n";
				cout << "2:A Filled Square \n" << "3:Filled Obtuse Traingle \n" << "4:Bow Tie \n";
				cout << "5:Exit \n";
				
				//Resseting the choice
				x = 0;
				//Control variable is switched again to start the switch loop
				menu = true;
				cin >> x; 

				//Catching wrong inputs
				errorinput(x);
				while (x < 1 || x > 5)
				{
					cout << "Please enter your choice in the appropriate parameters (1-5). \n";
					cin >> x;
					while (cin.fail())
					{
						cin.clear();
						cin.ignore();
						cout << "ERROR WRONG INPUT. Please enter a number: ";
						cin >> x;
					}
				}

				//End of case 1
				break;
		
		
		//Case 2 is filled square
		case 2: {
			cout << "How many stars? (1-50 only) \n";
			cin >> stars;
			while (stars < 1 || stars > 50)
			{
				cout << "Please enter within the parameters (1-50) \n";
				cin >> stars;
			}
			for (int s = 0; s < stars; s++)
			{

				for (int p = 0; p < stars; p++)
				{
					cout << "*";
				}
				cout << endl;
			}
		}

				cout << endl;
				menu = false;
				
				cout << "Please choose an option! \n" << "1:Filled Triangle  \n";
				cout << "2:A Filled Square \n" << "3:Filled Obtuse Traingle \n" << "4:Bow Tie \n";
				cout << "5:Exit \n";
				
				x = 0;
				menu = true;
				cin >> x;
				
				errorinput(x);
				while (x < 1 || x > 5)
				{
					cout << "Please enter your choice in the appropriate parameters (1-5). \n";
					cin >> x;
					while (cin.fail())
					{
						cin.clear();
						cin.ignore();
						cout << "ERROR WRONG INPUT. Please enter a number: ";
						cin >> x;
					}
				}
				
				//End of case 2
				break;

		//Case 3 is a filled obtuse triangle
		case 3: {
			cout << "How many stars? (1-50 only) \n";
			cin >> stars;
			while (stars < 1 || stars > 50)
			{
				cout << "Please enter within the parameters (1-50) \n";
				cin >> stars;
			}
			
			
			//Setting the w integer for the setw(w) statement
			w = 2;
			cout << endl << endl;
			
			
			for (int t = 0; t < stars; t++)
			{
				cout << setw(w);

				for (int p = 0; p <= t; p++)
				{
					cout << "*";

				}
				cout << endl;
				w++;

			}
			cout << endl;
			menu = false;
			
			cout << "Please choose an option! \n" << "1:Filled Triangle  \n";
			cout << "2:A Filled Square \n" << "3:Filled Obtuse Traingle \n" << "4:Bow Tie \n";
			cout << "5:Exit \n";
			
			x = 0;
			menu = true;
			cin >> x;
			
			
			errorinput(x);
			while (x < 1 || x > 5)
			{
				cout << "Please enter your choice in the appropriate parameters (1-5). \n";
				cin >> x;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "ERROR WRONG INPUT. Please enter a number: ";
					cin >> x;
				}
			}
			//End of case 3
			break;
		
		//Case 4 is a bow tie shape
		case 4: {
			cout << "How many stars do you want for the shape (1-50 only)? \n";
			cin >> stars;
			while (stars < 1 || stars > 50)
			{
				cout << "Please enter within the parameters (1-50) \n";
				cin >> stars;
			}
			
			cout << endl << endl;
			
			//First for loop is for the upper half of the bow tie shape
			for (int i = 1; i <= stars + 1; i++)
			{
				for (int t = i; t >= 1; t--)
				{
					cout << "*";
				}
				for (int j = stars; j > (i - 1); j--)
				{
					cout << "-";
				}
				for (int j = stars; j > i; j--)
				{
					cout << "-";
					
				}
				for (int j = i; j >= 1; j--) {
					
					//If statement to prevent an additional star
					if (i != stars + 1 || j != 1) {
						cout << "*";
					}
					}
				cout << endl;
			}

			//Second for loop is for the lower half of the bow tie shape
			for (int i = stars; i >= 1; i--) 
			{
				for (int j = i; j >= 1; j--) 
				{
					cout << "*";
				}
				for (int j = stars; j > (i - 1); j--) 
				{
					cout << "-";
				}
				for (int j = stars; j > i; j--) 
				{
					cout << "-";
				}
				for (int j = i; j >= 1; j--)
				{
					cout << "*";
				}
				cout << endl;
			}
		}
				cout << endl;
				menu = false;
				
				cout << "Please choose an option! \n" << "1:Filled Triangle  \n";
				cout << "2:A Filled Square \n" << "3:Filled Obtuse Traingle \n" << "4:Bow Tie \n";
				cout << "5:Exit \n";
				
				x = 0;
				menu = true;
				cin >> x;
				
				
				errorinput(x);
				while (x < 1 || x > 5)
				{
					cout << "Please enter your choice in the appropriate parameters (1-5). \n";
					cin >> x;
					while (cin.fail())
					{
						cin.clear();
						cin.ignore();
						cout << "ERROR WRONG INPUT. Please enter a number: ";
						cin >> x;
					}
				}
				//End of case 4
				break;
	    
		//Case 5 is the choice to exit the code
		case 5: {
			return 0;
		}
			//End of case 5
			break;
		}
		}
	}
	
	system("pause");
	return 0;
	}

	//Function to catch wrong inputs
	int errorinput(int choice) {
		
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "ERROR WRONG INPUT. \n";
			
		}
		return choice;
	}