/*
CIS 165
project name: Snack Shopping 

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // local declaration section
    
    string item1,item2,item3,item4,item5;
	float price_1,price_2,price_3,price_4,price_5;
	float Sub_total,total,average;
	const float TAX = .07;
    
    // input section
    cout <<"Introduce item 1"<<endl;
	cin >>item1;
	cout <<"Introduce Price of item 1"<<endl;
	cin >>price_1;
	cout <<"Introduce item 2"<<endl;
	cin >>item2;
	cout <<"Introduce Price of item 2"<<endl;
	cin >>price_2;
	cout <<"Introduce item 3"<<endl;
	cin >>item3;
	cout <<"Introduce Price of item 3"<<endl;
	cin >>price_3;
	cout <<"Introduce item 4"<<endl;
	cin >>item4;
	cout <<"Introduce Price of item 4"<<endl;
	cin >>price_4;
	cout <<"Introduce item 5"<<endl;
	cin >>item5;
	cout <<"Introduce Price of item 5"<<endl;
	cin >>price_5;
    
    // process section
    
    
    Sub_total=price_1+price_2+price_3+price_4+price_5;
    average=Sub_total/5; 
    total=(Sub_total*TAX)+Sub_total;
    
    
    // Output section
    
    cout<<endl<<"Name of Snack     	Price"<<endl;
    cout<<"============================"<<endl;
    
    cout<<setiosflags(ios::fixed | ios::showpoint);
    cout<<setprecision(2);
    
    cout<<left<<setw(13)<<item1<<right<<setw(15)<<price_1<<endl;
    cout<<left<<setw(13)<<item2<<right<<setw(15)<<price_2<<endl;
    cout<<left<<setw(13)<<item3<<right<<setw(15)<<price_3<<endl;
    cout<<left<<setw(13)<<item4<<right<<setw(15)<<price_4<<endl;
    cout<<left<<setw(13)<<item5<<right<<setw(15)<<price_5<<endl;
    cout<<"============================"<<endl;
    cout<<left<<setw(13)<<"Total"<<right<<setw(15)<<Sub_total<<endl;
 	cout<<left<<setw(13)<<"Tax"<<right<<setw(15)<<TAX<<endl;
 	cout<<left<<setw(13)<<"Average"<<right<<setw(15)<<average<<endl;
 	cout<<left<<setw(13)<<"Total"<<right<<setw(15)<<total<<endl;
 	return 0; 
}

