#include "../include/mallEmployees.hpp"
#include "../include/customDataTypes.hpp"

#include <iostream>
#include <string>
using namespace std;

//function to take UAN number
void mallEmployees::setUAN() {
    cout << "Give the UAN number of the employee: ";
    cin >> UAN;
}

//Function to take Bank detals
void mallEmployees::setBankAccount() {
    cout << "Give the following Bank details: \n";
    cout << "Give Bank name: ";
    cin >> salaryAccount.bankName;
    cout << "Account number: ";
    cin >> salaryAccount.accountNumber;
    cout << "IFSC code: ";
    cin >> salaryAccount.ifsc;
}

//Function to print Details of Employee
void mallEmployees::getEmployeeDetails() {

    cout << "The below are the details of the employee\n";
    this->employee::getEmployeeDetails();             //Print data from Employee Class
    cout << "Additional Details: \n"; //Prints details from this class
    cout << "Employee Salary: " << salary;
    cout << "Employee UAN: " << UAN;
}

//Function to print Employee salary
void mallEmployees::getEmployeeSalary() {
    cout << "The Employee salary is: " << salary;
}

//Function to print Bank Details
void mallEmployees::getBankDetails() {
    cout << "The bank details of the employee are: \n";
    cout << "Bank Name: " << salaryAccount.bankName << endl;
    cout << "Account number: " << salaryAccount.accountNumber << endl;
    cout << "IFSC code: " << salaryAccount.ifsc << endl;
}

void mallEmployees::setmallEMployee() {

    cout << "Give the details as asked\n";
    this->employee::setEmployeeDetails();
    setUAN();
    setCategory();
    setBankAccount();
}

void mallEmployees::setEmployeeSalary(float Amount) {
    salary = Amount;
}