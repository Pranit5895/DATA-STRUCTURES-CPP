#include <iostream>

using namespace std;

class person
{
  	private:
		string Name;
		long int Phone;

  	public:
 		void read()
 		{
 			name = "Sarthak";
			phno = 971101695;
 		}

 		void show()
 		{
 			cout << "\nName = " << Name;
 			cout << "\nPhone = " << Phone;
 		}
};

class student : public person
{
  	private:
 		int rollno;
 		string course;

  	public:
 		void read()
 		{
 			person::read();
			rollno = 007;
			course = "Computer Science";
 		}

 		void show()
 		{
 			person::show();
 			cout << "\nRoll No. = " << rollno;
 			cout << "\nCourse = " << course;
 		}
};

class teacher : public person
{
  	private:
		string dept_name;
		string qual;

  	public:
		void read()
		{
			person::read();
			dept_name = "CSE";
			qual = "PhD";
		}
		void show()
		{
			person::show();
			cout << "\nDepartement = " << dept_name;
			cout << "\nQualififcation = " << qual;
		}
};

