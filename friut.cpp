#include<iostream>
using namespace std;

class Fruit{
	public:
		virtual void taste(){
			cout<<"----no taste as such-----"<<endl;
		}
};

class Apple:public Fruit{
	public:
		void jam(){
			cout<<"Lets make jam of Apple..."<<endl;
		}
		void taste(){
			cout<<"Apple taste's' sweet.."<<endl;
		}
};

class Mango:public Fruit{
	public:
		void pulp(){
			cout<<"Mango Pulp get Created."<<endl;
		}
		void taste(){
			cout<<"Mango taste's' sweet.."<<endl;
		}
};

class Orange:public Fruit{
	public:
		void juice(){
			cout<<"Lets make juice of Orange..."<<endl;
		}
		void taste(){
			cout<<"Orange taste's' sweet and sour.."<<endl;
		}
};



