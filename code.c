#include <stdio.h>

int main() 
{
    float t1 = 0.02 ,t2 = 0.04 ,t3 = 0.06, t4 = 0.08, t5 = 0.10, t6 = 0.12,
        txg1 = 0.05, txg2 = 0.10, txg3 = 0.12, txg4 = 0.13 , txg5 = 0.14, 
        txg6 = 0.15, other_tax1 = 0.03, income_ini, income_tax, monthly_salary, 
        govern_tax, income_left, other_tax;
    char name[40], occupation[40], date[40]; 
    int age;
    FILE *fp;
    fp = fopen("data.txt", "a");
    printf("Please enter the following:\n\n");
    printf("Date : ");
    fgets(date,   sizeof(date), stdin);
    fprintf(fp, "==============================\nDate : %s", date);
    fflush(stdin);  
    printf("Name : ");
    fgets(name, sizeof(name), stdin);
    fprintf(fp, "Name : %s", name);
    fflush(stdin);
    printf("Occupation : ");
    fgets(occupation, sizeof(occupation), stdin);
    fprintf(fp, "Occupation : %s", occupation);
    fflush(stdin);
    printf("Age : ");
    scanf("%d", &age);
    fprintf(fp, "Age : %d\n", age);
    printf("Monthly Salary : ");
    scanf("%f", &monthly_salary);
    fprintf(fp, "Monthly Salary : %f\n", monthly_salary);
    if (monthly_salary <= 10000){
        income_tax = (monthly_salary * t1);
        income_ini = monthly_salary - (monthly_salary * t1);
        govern_tax = (income_ini * txg1);
        other_tax = (income_ini * other_tax1 );
        income_left = income_ini - (govern_tax + other_tax);
        }
        else if (monthly_salary >= 10001 && monthly_salary <= 50000){
        income_tax = (monthly_salary * t2);
        income_ini = monthly_salary - (monthly_salary * t2);
        govern_tax = (income_ini * txg2);
        other_tax = (income_ini * other_tax1 );
        income_left = income_ini - (govern_tax + other_tax);
        }
        else if (monthly_salary >= 50001 && monthly_salary <= 100000){
        income_tax = (monthly_salary * t3);
        income_ini = monthly_salary - (monthly_salary * t3);
        govern_tax = (income_ini * txg3);
        other_tax = (income_ini * other_tax1 );
        income_left = income_ini - (govern_tax + other_tax);
        }
        else if (monthly_salary >= 100001 && monthly_salary <= 150000){
        income_tax = (monthly_salary * t4);
        income_ini = monthly_salary - (monthly_salary * t4);
        govern_tax = (income_ini * txg4);
        other_tax = (income_ini * other_tax1 );
        income_left = income_ini - (govern_tax + other_tax);
        } 
        else if (monthly_salary >= 150001 && monthly_salary <= 200000){
        income_tax = (monthly_salary * t5);
        income_ini = monthly_salary - (monthly_salary * t5);
        govern_tax = (income_ini * txg5);
        other_tax = (income_ini * other_tax1 );
        income_left = income_ini - (govern_tax + other_tax);
        }
        else if (monthly_salary > 200000){
        income_tax = (monthly_salary * t6);
        income_ini = monthly_salary - (monthly_salary * t6);
        govern_tax = (income_ini * txg6);
        other_tax = (income_ini * other_tax1 );
        income_left = income_ini - (govern_tax + other_tax);
        } 
        printf("Income Tax : %f pesos \n", income_tax);
        printf("Government Tax : %f pesos \n", govern_tax);
        printf("Other Tax : %f pesos \n", other_tax);
        printf("Income Left : %f pesos\n", income_left);

        fprintf(fp, "Income Tax : %f pesos\n", income_tax);
        fprintf(fp, "Government Tax : %f pesos\n", govern_tax);
        fprintf(fp, "Other Taxes : %f pesos\n", other_tax);
        fprintf(fp, "Income Left : %f pesos\n", income_left);
        fclose(fp);
        printf("\n\nTHANK YOU FOR USING THE PROGRAM!!\n");
        return 0;
        // Members : Alminaza, Cosio, Flores, Landa //
}
