/*
CIS 165
project name: Payroll
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Functions Prototypes:

void GetInput(string &name,int &hour_worked,float &payRate);
float Calcgross(int hour_worked,float payRate);
float StateDeductions(float grossPay);
float federalDeductions(float grossPay);
float SSTaxDeductions(float grossPay);
float medicalDeductions(float grossPay);
float allDeductions(float StateDeduct,float federalTax,float SSTax,float medicalTax);
float NetPaym(float grossPay,float deductions);
void OutputDisplay(string name,int hour_worked,float payRate,float TotalGross,float StateDeduct,float federalTax,float SSTax,float medicalTax,float deductions,float NetPayment);
// Constants 
const float STATE_TAX=.07,
	 		FEDERAL_TAX=.15,
			SS_TAX =0.17,
			MEDICAL_TAX=.03;
int main (){
	
	 // declaration section
	  		
	
	float payRate,   // floats variables for deductions'calcultions 
		  StateDeduct,
		  TotalGross,
		  grossPay,
		  federalTax,
		  SSTax,
		  medicalTax,
		  deductions,NetPayment;
		   
	 int hour_worked;
	 string name;
	 
	GetInput(name,hour_worked,payRate); // call functions 
	TotalGross=Calcgross(hour_worked,payRate);
	
	StateDeduct=StateDeductions(TotalGross);
	federalTax=federalDeductions(TotalGross);
	SSTax=SSTaxDeductions(TotalGross);
	medicalTax=medicalDeductions(TotalGross);
	
	deductions=allDeductions(StateDeduct,federalTax,SSTax,medicalTax);
	NetPayment=NetPaym(TotalGross,deductions);
	
	OutputDisplay(name,hour_worked,payRate,TotalGross,StateDeduct,federalTax,SSTax,medicalTax,deductions,NetPayment);
	
	return 0;
}

void  GetInput(string &name,int &hour_worked,float &payRate){
	cout<< " Enter employee name : ";
	cin>>name;
	cout<<" Enter hours of work : ";
	cin>>hour_worked;		
	cout<< " Enter pay Rate : ";
	cin>>payRate;
}
float Calcgross(int hour_worked,float payRate){
	return hour_worked*payRate;
}
float StateDeductions(float grossPay){
	return grossPay*STATE_TAX;
}
float federalDeductions(float grossPay){
	return grossPay*FEDERAL_TAX;
}
float SSTaxDeductions(float grossPay){
	return grossPay*SS_TAX;
}
float medicalDeductions(float grossPay){
	return grossPay*MEDICAL_TAX;
}
float allDeductions(float StateDeduct,float federalTax,float SSTax,float medicalTax){
	return (StateDeduct+federalTax+SSTax+medicalTax); 
}

float NetPaym(float grossPay,float deductions){
	return (grossPay-deductions);
}
void OutputDisplay(string name,int hour_worked,float payRate,float TotalGross,float StateDeduct,float federalTax,float SSTax,float medicalTax,float deductions,float NetPayment)
	{
	
	cout<<setiosflags(ios::fixed | ios::showpoint);
    cout<<setprecision(2);
	cout<<"\t \t \t  \t Kulite Company"<<endl;
	cout <<"Employee Name            Hours Worked	 Pay Rate	 Gross Pay	  Net Pay"<<endl;
	cout <<"-----------------	 ------------	-----------	-----------	----------"<<endl;
	cout<<left<<setw(15)<<name<<right<<setw(17)<<hour_worked;
	cout<<setw(17)<<payRate<<setw(17)<<TotalGross<<setw(15)<<NetPayment<<endl;
	
	cout<<"\nDeductions:"<<endl;
	cout<<"Deduction Type    Deduction Rate   Deduction Amount"<<endl;
	cout<<"==============   ===============    ==============="<<endl;
	cout<<left<<setw(15)<<"Federal Taxes"<<right<<setw(17)<<FEDERAL_TAX<<setw(17)<<federalTax<<endl;
	cout<<left<<setw(15)<<"Social Security"<<right<<setw(17)<<SS_TAX<<setw(17)<<SSTax<<endl;
	cout<<left<<setw(15)<<"Medical Taxes"<<right<<setw(17)<<MEDICAL_TAX<<setw(17)<<medicalTax<<endl;
	cout<<left<<setw(15)<<"State Taxes"<<right<<setw(17)<<STATE_TAX<<setw(17)<<StateDeduct<<endl;

}



