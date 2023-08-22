#include<iostream>
using namespace std;
class Student{     
	    private:
		string name,roll,college,branch,city;
		float per;
		public:
		Student(string n,string r,string c,string b,string cc,float p)
		{
			this->name=name;
			this->roll=roll;
			this->college=college;
			this->branch=branch;
			this->city=city;
			this->per=per;
		}
		void modify()
		{
		name="ali",roll="65",college="acoe",branch="cse",city="kkd";
		per=76;	
		}
		void display()      
		{
			cout<<name<<" "<<roll<<" "<<college<<" "<<branch<<" "<<city<<" "<<per<<" "<<endl;
		}
				
};
int main()
{
	Student s1("Sonali","jitya","yamm","cse","kkd",232); 
	s1.modify();       
	s1.display();
    s1.modify();
	return 0;
	
	
}

