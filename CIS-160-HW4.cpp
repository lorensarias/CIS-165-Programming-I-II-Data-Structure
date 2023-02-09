/*

CIS 165
project name: Cellphone Sales 

*/

#include <iostream>
#include <iomanip>

using namespace std;
// Constanst  
const float PRICE_IPHONE=675.50;
const float PRICE_SAMSUNG=650.25;
const int SIZE = 7;

int main (){
	
	
	// declaration and initialization of an array, one statement 
	 string DayWeek [SIZE ]= { "Sunday", "Monday", "Tuesday", "Wedndsay", "Thuesday","Friday","Saturday" };
	 
	 // declaration of arrays
	 int Iphone_amount[SIZE];
	 int Samsung_amount[SIZE];
	 float Iphone_sales[SIZE];
	 float Samsung_sales[SIZE];
	 float totalSales[SIZE];
	  
	int high_iphone = 0, // Variables for storing the highest numbers of iphone and samsungs sales on the week 
    	high_samsung=0;
    	
    	
	   // loop to input prices into an array
    for ( int i = 0; i < SIZE; i++ )
        { 
            cout<<"Iphone Amount Sold on "<<DayWeek[i]<<" ";
			cin>> Iphone_amount[ i ];
			cout<<"Samsung Amount Sold  on "<<DayWeek[i]<<" ";
			cin>> Samsung_amount[ i ];
        }
     // Loop for calculate price per number of items sold every day
	for (int i = 0; i < SIZE; i++){
	
		Iphone_sales[ i ]=Iphone_amount[ i ]* PRICE_IPHONE;
        Samsung_sales[ i ]=Samsung_amount[ i ]* PRICE_SAMSUNG;
	}
	 // loop to accomulate the total sales
    for ( int i = 0; i < SIZE; i++ )
    {
     	totalSales[i]=Iphone_sales[i]+Samsung_sales[i];                     
    }
    
    
    // loop to find the highest numbers of iphone and Samsung sale on the week 
    for ( int i = 0; i < SIZE; i++ )
    {
        if ( Iphone_amount[ i ]  > high_iphone) // Highest number of iphone 
            high_iphone = Iphone_amount[ i ];
         if ( Samsung_amount[ i ] > high_samsung ) // Highest number of samsung 
            high_samsung = Samsung_amount[ i ];   
    }
          
    
    // Output section 
	cout <<"\t \t \t \t \t \t Total \t \tTotal \t \tTotal "<<endl;
	cout<<"Weekday    #Iphone Sold   #Samsung Sold    IphoneSales      GalaxySales       DaySales " <<endl;
      // loop to display all prices in the array
    for ( int i = 0; i < SIZE; i++ )
    {
	cout<<setiosflags(ios::fixed | ios::showpoint);
    cout<<setprecision(2);
	cout<<left<<setw(8)<<DayWeek[i]<<right<<setw(10)<<Iphone_amount[i]<<setw(17)<<Samsung_amount[i]<<setw(18)<<Iphone_sales[i]<<setw(17)<<Samsung_sales[i]<<setw(16)<<totalSales[i]<<endl;
	}
	
	cout <<"********************************************************************************************"<<endl;
	cout<<"Highest number of IPhones sold is:"<<high_iphone<<endl;
	cout<<"Highest number of Samsung sold is:"<<high_samsung;
}


