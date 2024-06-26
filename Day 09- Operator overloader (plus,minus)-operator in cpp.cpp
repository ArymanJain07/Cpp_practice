/// operator overloading program operator+

#include<iostream>

using namespace std;

class Complex{
	int real, img,temp;
	public:
		Complex();
		Complex(int, int);
		
		Complex operator+(Complex &);
		Complex operator-(Complex &);
		void display();
		
	
	
};

Complex::Complex(){
	real=img=0;

}

Complex::Complex(int real,int img){
	this->real = real;
	this->img = img;
}

void Complex::display(){
	if(img>0){
		cout<<"Complex number is : "<<real<<" "<<img<<"i"<<endl;
	}
	else{
		cout<<"Complex number is : "<<real<<" "<<img<<"i"<<endl;
	}
	
}

Complex Complex::operator+(Complex& c){
	Complex temp;
	
	temp.real = this->real + c.real;
	temp.img = this->img + c.img;
	return temp;
	
}

Complex Complex::operator-(Complex& c){
	Complex temp;
	
	temp.real = this->real - c.real;
	temp.img = this->img - c.img;
	return temp;
	
}


int main(){
	Complex c1(1,2);
	Complex c2(2,3);
	Complex c3 = c1.operator+(c2);
	c3.display();
    c3 = c1.operator-(c2);
    c3.display();
//	c3 = c1+c2;
//	c3.display();
	
	
	
	
}
