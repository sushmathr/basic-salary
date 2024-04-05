#include <stdio.h>


flot calculate_gross_salary(foat basic_salary)
{
    
  float ta = 0.10 * basic_salary;
  
  
 float da = 0.12 * basic_salary;
  
  
 
 float gross_salary = basic_salary + ta + da;
   
 
   
 return gross_salary;

}


int main() 
{
 
   float basic_salary, gross_salary;
 
  
 
     printf("Enter the basic salary: ");
    
      scanf("%f", &basic_salary);
 

      gross_salary = calculate_gross_salary(basic_salary);
     
  

      printf("Gross Salary: %.2f\n", gross_salary);
    
   

      return 0;

}