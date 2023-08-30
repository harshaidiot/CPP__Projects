#include <bits/stdc++.h>
using namespace std;
// Inheritence can access public and protected only not private.
// Single Inheritence
class Car{
	protected:   
		string name;
		int speed;
	public:
		void setdata(string a, int b){
			name = a;
			speed = b;
		}
};

class prop : public Car{
	public:
		string color;

		void setcolor(string a){
			color = a;
		}

		void print(){
			cout <<" Car name : "<< name << endl<<"speed of car is : "<< speed << "km/ph "<<endl <<"car color is :"<< color << endl;
		}
};

int main(){
	prop s;
	s.setdata("FORD MUSTANG", 395);
	s.setcolor("BLUE");

	s.print();
}
 
