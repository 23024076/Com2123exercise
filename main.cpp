#include <iostream>

using namespace std;

int main()
{
   double merchandiseCost, employeesSalary, storeRent, electricityCost, desiredProfit;
    cout << "Enter total cost of the merchandise:";
    cin>> merchandiseCost;
    cout<<" Enter yearly salary of employee and employer:";
    cin>>employeesSalary;
    cout<<"Enter store yearly rent:";
    cin>>storeRent;
    cout<<" Enter the estimated electricity cost:";
    cin>>electricityCost;
    desiredProfit=0.1;

    double Expenses= merchandiseCost+employeesSalary+storeRent+electricityCost;
    double profit= Expenses+Expenses*0.1;
    double afterSale=profit/(0.85);
    double Markup=afterSale-Expenses;



    cout<< "Merchandise must be approximately marked up by:"<<Markup<<endl;
    return 0;
}

