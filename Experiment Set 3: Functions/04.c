// 4. Calculate Monthly Salary of an Employee

// Problem: Write a function to calculate monthly salary including HRA (15% metro, 10% non-metro) and DA (5%).

#include <stdio.h>

float calculateSalary(float basic_salary, char city_type) {
    
    float hra, da, total_salary;
   
    da = 0.05 * basic_salary;
  
    if (city_type == 'm' || city_type == 'M') {
        hra = 0.15 * basic_salary; 
    } else {
        hra = 0.10 * basic_salary; 
    }
    
   
    total_salary = basic_salary + hra + da;

    return total_salary;
}

int main() {
    
    float basic, final_salary;
    char city;
    
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    
    printf("Is the city a Metro? (Enter 'm' for metro, 'n' for non-metro): ");
    scanf(" %c", &city); 
    
    
    final_salary = calculateSalary(basic, city);
    
    printf("The total monthly salary is: %.2f\n", final_salary);
    
    return 0;
}
