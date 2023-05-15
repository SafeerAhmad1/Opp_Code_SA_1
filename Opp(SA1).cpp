#include<iostream>
using namespace std;


void student_info(char name[50], char section[50], char roll_no[50]);
void student_info2(char father_name[50], int father_number, char student_email[50]);

class Student {
private:
	int All_Int_1;
	char All_char_1[50];
public:
	void set_a(int All_Int)
	{
		All_Int_1 = All_Int;
	}

	int get_a()
	{
		return All_Int_1;
	}

	void set_ch(char All_Char[50])
	{
		int i = 0;
		while (All_Char[i] != '\0')
		{
			All_char_1[i] = All_Char[i];
			i++;
		}
		get_ch(i);
	}
	char get_ch(int i)
	{
		return All_char_1[i];
	}


};

Student Numbers;
void get()
{
	int Grade;
	cout << "Enter Grades: ";
	cin >> Grade;
	Numbers.set_a(Grade);
	cout << "Final Grades out of 100 are: " << Numbers.get_a();

}

int main()
{
	int  moible_number, semester, home_number, father_number;
	char name[50], section[50], student_email[50], roll_no[50], father_name[50];

	Student ID;
	ID.set_a(19456);
	cout << "Student id is : " << ID.get_a() << endl;

	Student Semester;
	Semester.set_a(6);
	cout << "Student id is : " << Semester.get_a() << endl;

	Student Mobile_Number;
	Mobile_Number.set_a(33100456);
	cout << "Student Mobile Number is : " << Mobile_Number.get_a() << endl;

	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Roll_no: ";
	cin >> roll_no;
	cout << "Enter Section: ";
	cin >> section;

	student_info(name, section, roll_no);


	cout << "Enter Father Name: ";
	cin >> father_name;
	cout << "Enter Father Number: ";
	cin >> father_number;

	cout << "Enter Student Email: ";
	cin >> student_email;

	student_info2(father_name, father_number, student_email);
	get();


}
void student_info(char name[50], char section[10], char roll_no[50])
{
	Student Name;
	cout << "Name is : ";
	Name.set_ch(name);
	int i = 0;
	while (name[i] != '\0')
	{
		cout << Name.get_ch(i);
		i++;
	}
	cout << endl;

	Student Section;
	i = 0;
	Section.set_ch(section);
	cout << "Section is : ";
	while (section[i] != '\0')
	{
		cout << Section.get_ch(i);
		i++;
	}

	cout << endl;


	Student Roll_No;
	i = 0;
	Roll_No.set_ch(roll_no);
	cout << "Roll_no is : ";
	while (roll_no[i] != '\0')
	{
		cout << Roll_No.get_ch(i);
		i++;
	}
	cout << endl;
	cout << endl;
	cout << endl;


}

void student_info2(char father_name[50], int father_number, char student_email[50])
{
	Student Father_name;

	cout << "Father_name is : ";
	Father_name.set_ch(father_name);
	int i = 0;
	while (father_name[i] != '\0')
	{
		cout << Father_name.get_ch(i);
		i++;
	}

	cout << endl;
	Student Father_number;
	i = 0;
	Father_number.set_a(father_number);
	cout << "Father Number is " << Father_number.get_a();

	cout << endl;


	Student Student_email;
	i = 0;
	Student_email.set_ch(student_email);
	cout << "Student Email is : ";
	while (student_email[i] != '\0')
	{
		cout << Student_email.get_ch(i);
		i++;
	}
	cout << endl;


}
