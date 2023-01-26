#include <iostream>
using namespace std;

int main()
{
   cout.setf(ios::fixed);
   cout.precision(2);
   string grad;
   cin>>grad;
   double sales;
   cin>>sales;
   double comision;
   if(sales >= 0 && sales <= 500)
   {
       if(grad == "Sofia")
       {
           comision = 0.05;
       }
       else if(grad == "Varna")
       {
           comision = 0.045;
       }
       else if(grad == "Plovdiv")
       {
           comision = 0.055;
       }
        else
       {
           cout<<"error";
       }          
   }
   else if(sales >500 && sales <= 1000)
   {
       if(grad == "Sofia")
       {
           comision = 0.07;
       }
       else if(grad == "Varna")
       {
           comision = 0.075;
       }
       else if(grad == "Plovdiv")
       {
           comision = 0.08;
       }
        else
       {
           cout<<"error";
       }
   }
   else if(sales >1000 && sales <= 10000)
   {
       if(grad == "Sofia")
       {
           comision = 0.08;
       }
       else if(grad == "Varna")
       {
           comision = 0.1;
       }
       else if(grad == "Plovdiv")
       {
           comision = 0.12;
       }
        else
       {
           cout<<"error";
       }
   }
   else if(sales < 10000)
   {
       if(grad == "Sofia")
       {
           comision = 0.12;
       }
       else if(grad == "Varna")
       {
           comision = 0.13;
       }
       else if(grad == "Plovdiv")
       {
           comision = 0.145;
       }
       else
       {
           cout<<"error";
       }       
   }
   
   double total = comision * sales;
   cout<<total;

    return 0;
}
