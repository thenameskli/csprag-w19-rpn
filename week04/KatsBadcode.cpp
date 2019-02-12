// Kat                                                               

#include <iostream>
using namespace std;

int main()
{
	char mlevel;              // this is a valid char                   
	bool chalmers;
	string name;
	double r, g, c, peoplewhoareadults;                                            
	cout << "Hi" << endl;
	cin >> name >> endl;
	cin >> r >> endl;                                            
	cin >> g >> endl;
	cin >> c >> endl;
	cin >> peoplewhoareadults >> endl;
	cin >> chalmers >> endl;
	cout << "What is your motivation?\n"
		<< " a. Amazingly Motivated\n"
		<< " b. Basicly a good worker\n"
		<< " c. Can't get good help no more\n"
		<< " d. Don't plan on work from me\n"
		<< " e. Elevated Slothfullness \n\n"
		<< "Enter the letter of your choice: ";
	cin >> mlevel;

	if(mlevel=='a')   // this is an if statement
	{
		if(r>=0.5)
		{
			if(g<=5)    // checks if g <= 5
			{
				cout << "burn books" << endl;
			}
			else
			{
				cout << "clean the bathroom" << endl;
			}
		}
		else
		{
			if(g<=5)
			{
				cout << "Go get more g" << endl;
			}
			else if(g>=5 && g<10)
			{
				cout << "Mow grass" << endl;
			}
			else
				cout << "Do laps in the tractor" << endl;
		}
		// This is a comment right in the middle that says I stayed up too late and didn't do my homework
		// and now my code looks horrible. Large paragraphs of comments makes your code harder to read
		// try using short statements to briefly explain what a block of code is actually doing instead
		// of paragraphs that state nothing really important.
	}
	else if(mlevel=='b')
	{
		if(chalmers==1||peoplewhoareadults>c)
		{
			cout << "Scrub floors on hands and knees" << endl;
		}
		else
		{
			cout << "Mop the floor." << endl;
		}
	}
	else if(mlevel=='c')
	{
		if(r<=1.5)
		{
			cout << "Lean on rake." << endl;
		}
		else
			cout << "Lean on broom inside" << end;
	}
	else if(mlevel=='e')
	{
		cout << "Stay in bed" << endl;
	}

	return 0;
}

