/*
Programmer name: Lorena Arias Batista 
CIS 165
project name: Payroll
Due date: 11/4/20
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	 // declaration section
	  
	  
	  		// Constants 
	const float STATE_TAX=.07,
	 			 FEDERAL_TAX=.15,
				 SS_TAX =0.17,
				MEDICAL_TAX=.03;
	float bonus,   // floats variables for deductions'calcultions 
		  payRate,
		  grossPay,
		  netPay,
		  pay_Rate,
		  bonusAmount, 
	      hour_pay,
		  StateTax,
		  FederalTax,
		  SSTax,
		  medical,
		  totaltax;
	string first_name,
	 		WorkShift; 
	 int hour_worked;
	 char option; // Since option wont be used for calculations. I chose char type
	 
	
	// Input section
	 cout<<"Introduce your name: ";
	 cin>>first_name;
	 cout<<"Introduce hours worked: ";
	 cin>>hour_worked;
	 cout<<"Pay rate: ";
	 cin>>payRate;
	 cout<<"\t \t Shift and bonus"<<endl;
	 cout <<"Shift \t \t \t Bonus"<<endl;
	 cout <<"1.First  \t \t \t 0%"<<endl;
	 cout <<"2.Second  \t \t \t 10%"<<endl;
	 cout <<"3.Third \t \t \t 20%"<<endl;
	 cout<<"Select one shift:"<<endl;
	 cin>>option;
	 
	//Process 
	 	
	  // Menu of options 
	if (option=='1'){
	 		bonus=0.00;
	 		WorkShift="First";
	}
	 else if (option=='2'){
	 		bonus=.10;
	 		WorkShift="Second";
	}
	 else if (option=='3'){
	 		bonus=.20;
	 		WorkShift="Third";
	}
	 
	 //condition for overtime 
	if (hour_worked>40){
	 	grossPay =(hour_worked*payRate)+(( hour_worked - 40) * payRate * 1.5 );
	}
	else{ // Hours worked without overtime 
	 	grossPay=hour_worked*payRate;
	}
	 
	// Calculation of the deductions 
		StateTax=grossPay*STATE_TAX; // State tax .07
	 	FederalTax=grossPay*FEDERAL_TAX; // Federal Tax .15
	 	SSTax=grossPay*SS_TAX; // Social Security Tax 0.17
	 	medical=grossPay*MEDICAL_TAX; // medical tax .03
	 	totaltax=StateTax+FederalTax+SSTax+medical; // total of deductions for later use on netPay 
		bonusAmount=bonus*grossPay;
	
		grossPay+=bonusAmount; // The bonus is added to the grosspay
	 	netPay=grossPay-totaltax;
	 
	 	
	 	
	 
	//Output 
	
	cout<<setiosflags(ios::fixed | ios::showpoint);
    cout<<setprecision(2);
	cout<<"\t \t \t  \t Kulite Company"<<endl;
	cout <<"Employee Name            Hours Worked	 Pay Rate	 Gross Pay	  Net Pay"<<endl;
	cout <<"-----------------	 ------------	-----------	-----------	----------"<<endl;
	cout<<left<<setw(15)<<first_name<<right<<setw(17)<<hour_worked;
	cout<<setw(17)<<payRate<<setw(17)<<grossPay<<setw(15)<<netPay<<endl;
	
	cout<<"Deductions:"<<endl;
	cout<<"Deduction Type    Deduction Rate   Deduction Amount"<<endl;
	cout<<"==============   ===============    ==============="<<endl;
	cout<<left<<setw(15)<<"State Taxes"<<right<<setw(17)<<STATE_TAX<<setw(17)<<StateTax<<endl;
	cout<<left<<setw(15)<<"Federal Taxes"<<right<<setw(17)<<FEDERAL_TAX<<setw(17)<<FederalTax<<endl;
	cout<<left<<setw(15)<<"Social Security"<<right<<setw(17)<<SS_TAX<<setw(17)<<SSTax<<endl;
	cout<<left<<setw(15)<<"Medical Taxes"<<right<<setw(17)<<MEDICAL_TAX<<setw(17)<<medical<<endl;
	
	cout<<"Shift Bonus"<<endl;
	cout<<"Work Shift :"<<WorkShift<<endl;
	cout<<"Bonus Amount :"<<bonusAmount<<endl;
	 
	return 0; 
}
