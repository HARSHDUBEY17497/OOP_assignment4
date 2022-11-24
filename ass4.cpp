#include<iostream> 
using namespace std; 
class vechile 
{ 
	public: 
		  
		virtual void speed()  
		{ 
			cout<<"\nIn speed of vechile\n"; 
		} 
		virtual void maintenance() 
		{ 
			cout<<"\nIn maintenance of vechile\n"; 
		} 
		void price()  
		{ 
			cout<<"\nIn price of vechile\n"; 
		} 
}; 
 
class four_wheeler : public vechile  
{ 
	public: 
		void speed() 
		{ 
			cout<<"\nIn speed of 4-wheeler\n"; 
		} 
		void maintenance() 
		{ 
			cout<<"\nIn maintenance of 4-wheeler\n"; 
		} 
}; 
class two_wheeler : public vechile  
{ 
	public: 
		void speed() 
		{ 
			cout<<"\nIn speed of 2-wheeler\n"; 
		} 
		void maintenance() 
		{ 
			cout<<"\nIn maintenance of 2-wheeler\n"; 
		} 
		void price() 
		{ 
			cout<<endl<<"In price of 2-wheeler\n"; 
		} 
}; 
class airborne : public vechile  
{ 
	void speed() 
		{ 
			cout<<"\nIn speed of airborne\n"; 
		} 
}; 
 
int main() 
{ 
	vechile *p1,*p2,*p3,*p4; 
	vechile v; 
	four_wheeler bmw; 
	two_wheeler yamaha; 
	airborne jumbo; 
	 
	p1=&v; 
	p2=&bmw; 
	p3=&yamaha; 
	p4=&jumbo; 
 
	p1->speed(); 
	p1->maintenance(); 
	p1->price(); 
	 
	p2->speed(); 
	p2->maintenance(); 
 
	p3->speed(); 
	p3->maintenance(); 
	 
	p4->speed(); 
	p4->maintenance(); 
	 
	p2->price();
	p3->price(); 
	 
	return 0; 
} 