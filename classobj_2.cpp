#include<iostream>
using namespace std;
class Student{
	    private:
		string name,roll,college,branch,city;
		float per;
		public:
		Student(string n,string r,string c,string b,string cc,float p)
		{
			this->name=n;
			this->roll=r;
			this->college=c;
			this->branch=b;
			this->city=cc;
			this->per=p;
		}
		void display()
		{
			cout<<name<<" "<<roll<<" "<<college<<" "<<branch<<" "<<city<<" "<<per<<" "<<endl;
		}		
};
int main()
{
	Student s1("ALi","123","acoe","cse","kkd",232);
	s1.display();
	Student s2("YAM","454","ace","ece","kkd",845);
	s2.display();
	return 0;
	
}

