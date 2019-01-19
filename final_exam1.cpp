#include<iostream>
#include<cmath>
#include<iomanip>
#include <bits/stdc++.h> 
//calculation of PMT//
using namespace std;

int main()
{
    double  YearlyInt = -1, present_value = -1, Payment = -1, AmountPaid = -1, MonthlyInt = -1;

    int NumPayments;
//user inputs for variables calculating PMT

    cout << "Enter the loan amount (present_value) --> ";
    cin >> present_value;
			while (present_value <= 0) {
     cout << "Enter valid  loan amount (greater than 0) : \n";
     cin >> present_value;
};
				
//here I did not put upper bound, due to the rare but possibility of really high amounts of interest
    cout << "Enter the MONTHLY interest rate as a positive decimal number (e.g. 3.25% as .0325) --> ";
    cin >> MonthlyInt;
    	while (MonthlyInt <= 0) {
     cout << "Enter valid MONTHLY interest rate (greater than 0) : \n";
     cin >> MonthlyInt;
};

    cout << "Enter number of payments --> ";
    cin >> NumPayments;
    	while (NumPayments <= 0) {
     cout << "Enter valid payment plan (greater than 0) : \n";
     cin >> NumPayments;
};

    cout << "present_value: $"  << setprecision(2) << fixed << present_value << endl;
    cout << "Monthly Interest Rate: "  << setprecision(3) << MonthlyInt * 100 << "%" << endl;
    cout << "Number of Payments: " << NumPayments << endl;

    //MonthlyInt = pow ( (1.0 + YearlyInt) , (1.0/NumPayments) ) - 1.0;

    //cout << "MonthlyInt: " << MonthlyInt*100 << "%" << endl;

    Payment = MonthlyInt * pow (( 1 + MonthlyInt ), NumPayments) /  (pow(( 1 + MonthlyInt), NumPayments) -1)  * present_value;
    cout << "Monthly Payment:  $"  << setprecision(2) << Payment << endl;

    AmountPaid = Payment * NumPayments;
    cout << "Amount Paid Back: $" << AmountPaid << endl;
    cout << "Interest Paid:  $" << (AmountPaid - present_value) << endl;


    cout << "Program Over" << endl << endl << endl << endl;

    cout << "Press Enter to end -->" << endl;
    
//calculating present value
   
	double PMT_value= -1,present_value2 = -1;


    cout << "Enter the installment amount (PMT_value) --> ";
    cin >> PMT_value;
    	while (PMT_value <= 0) {
     cout << "Enter valid installment amount (greater than 0) : \n";
     cin >> PMT_value;
};

    cout << "Enter the MONTHLY interest rate as a decimal number (e.g. 3.25% as .0325) --> ";
    cin >> MonthlyInt;
    	while (MonthlyInt <= 0) {
     cout << "Enter valid MONTHLY interest amount (greater than 0) : \n";
     cin >> MonthlyInt;
};

    cout << "Enter number of payments --> ";
    cin >> NumPayments;
    	while (NumPayments <= 0) {
     cout << "Enter valid payment plan (greater than 0) : \n";
     cin >> NumPayments;
};

    cout << "PMT_value: $"  << setprecision(2) << fixed << PMT_value << endl;
    cout << "Monthly Interest Rate: "  << setprecision(3) << MonthlyInt * 100 << "%" << endl;
    cout << "Number of Payments: " << NumPayments << endl;

    //MonthlyInt = pow ( (1.0 + YearlyInt) , (1.0/NumPayments) ) - 1.0;

    //cout << "MonthlyInt: " << MonthlyInt*100 << "%" << endl;

    present_value2= PMT_value/(MonthlyInt * (pow (( 1 + MonthlyInt ), NumPayments) /  (pow(( 1 + MonthlyInt), NumPayments) -1)));
    cout << "present_value:  $"  << setprecision(2) << present_value2 << endl;

    AmountPaid = PMT_value * NumPayments;
    cout << "Amount Paid Back: $" << AmountPaid << endl;
    cout << "Interest Paid:  $" << (AmountPaid - present_value2) << endl;


    cout << "Program Over" << endl << endl << endl << endl;

    cout << "Press Enter to end -->" << endl;
    
//calculating the number of payments

	double NumPayments2=-1, present_value3 = -1;
	
 	cout << "Enter the loan amount (present_value3) --> ";
    cin >> present_value3;
    	while (present_value3 <= 0) {
     cout << "Enter valid loan amount (greater than 0) : \n";
     cin >> present_value3;
};
	
	cout << "Enter the installment amount (PMT_value) --> ";
    cin >> PMT_value;
    	while (PMT_value <= 0) {
     cout << "Enter valid installment amount (greater than 0) : \n";
     cin >> PMT_value;
};

    cout << "Enter the MONTHLY interest rate as a decimal number (e.g. 3.25% as .0325) --> ";
    cin >> MonthlyInt;
    	while (MonthlyInt <= 0) {
     cout << "Enter valid MONTHLY interest rate amount (greater than 0) : \n";
     cin >> MonthlyInt;
};

    
 	cout << "present_value3: " << present_value3 << endl;
    cout << "PMT_value: $"  << setprecision(2) << fixed << PMT_value << endl;
    cout << "Monthly Interest Rate: "  << setprecision(3) << MonthlyInt * 100 << "%" << endl;
   
    //MonthlyInt = pow ( (1.0 + YearlyInt) , (1.0/NumPayments) ) - 1.0;

    //cout << "MonthlyInt: " << MonthlyInt*100 << "%" << endl;

    NumPayments2= (log(PMT_value)-log(PMT_value-present_value3*MonthlyInt))/log(1+MonthlyInt);
    cout << "NumPayments:"  << setprecision(2) << NumPayments2 << endl;

    AmountPaid = PMT_value * NumPayments2;
    cout << "Amount Paid Back: $" << AmountPaid << endl;
    cout << "Interest Paid:  $" << (AmountPaid - present_value3) << endl;


    cout << "Program Over" << endl << endl << endl << endl;

    cout << "Press Enter to end -->" << endl;
	  
//Finding Interest rate	  

	
 	cout << "Enter the loan amount (present_value3) --> ";
    cin >> present_value3;
    	while (present_value3 <= 0) {
     cout << "Enter valid loan amount (greater than 0) : \n";
     cin >> present_value3;
};
	
	cout << "Enter the installment amount (PMT_value) --> ";
    cin >> PMT_value;
    	while (PMT_value <= 0) {
     cout << "Enter valid installment amount (greater than 0) : \n";
     cin >> PMT_value;
};

    cout << "Enter number of payments --> ";
    cin >> NumPayments;
    	while (NumPayments <= 0) {
     cout << "Enter valid payment plan (greater than 0) : \n";
     cin >> NumPayments;
};

double f(double MonthlyInt );

double f(double MonthlyInt){

	double PMT_Value=PMT_Value+2PMT_Value*MonthlyInt+(MonthlyInt)^2*PMT_Value-MonthlyInt*present_value3-2(MonthlyInt)^2*present_value3-(MonthlyInt)^3*present_value3
	return PMT_Value;
}

cout.precision(4);
cout.setf(fixed);        //set the precision of the output
double b,c,e;
cout<<"Enter the initial guess\na=";
cin>>b;
cout<<"b=\n";                //take an intial guess
cin>>c;
cout<<"Enter the degree of accuracy\n";
cin>>e;                    //take the desired accuracy
		do
{    
    PMT_Value=b;                
    b=c;                //make b equal to the last calculated value of c
    c=b-(b-PMT_Value)/(f(b)-f(PMT_Value))*f(b);    //calculate c
    if (f(c)==0)
    {
        cout<<"\nThe root of the equation is "<<c;    //print the root
        return 0;
    }
}while(abs(c-b)>=e);            //check if the error is greater than the desired accuracy
cout<<"\nThe root of the equation is "<<c;    //print the root

 return 0;
}

