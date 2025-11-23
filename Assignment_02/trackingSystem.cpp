#include <iostream>
using namespace std;

int main() {
    // Declaring Productis innto varibales
    //Product_1
    int firstProductId = 101;
    char firstProductName = 'A';
    double firstProductPrice = 2500;
    int firstProductQuantity = 7;

    //Product_2
    int secondProductId = 102;
    char secondProductName = 'B';
    double secondProductPrice = 3000;
    int secondProductQuantity = 10;

    //Product_3
    int thirdProductId = 103;
    char thirdProductName = 'C';
    double thirdProductPrice = 2000;
    int thirdProductQuantity = 7;


    // Variables Ddclaration
    char CustomerType,confirm;
    int orderId, orderQty;
   

    //subtotal Variables
    double subtotal = 0.0,
           discount = 0.0,
           fee = 0.0,
           total = 0.0;

    //Display Product Data
    cout << "=======================================" << endl;
    cout << "    SMART INVENTORY & ORDER ASSISTANT  " << endl;
    cout << "=======================================" << endl;
    cout << "ID\tInitial\tPrice\tStock" << endl;
    cout << firstProductId << "\t" << firstProductName << "\tRs" << firstProductPrice << "\t" << firstProductQuantity << endl;
    cout << secondProductId << "\t" << secondProductName << "\tRs" << secondProductPrice << "\t" << secondProductQuantity << endl;
    cout << thirdProductId << "\t" << thirdProductName << "\tRs" << thirdProductPrice << "\t" << thirdProductQuantity << endl;
    cout << "---------------------------------------" << endl;


customer_type:
    //Customer Input
    cout << "Enter Customer Type (R for Regular / P for Prime) : ";
    cin >> CustomerType;


    //validate
    if(CustomerType!= 'R' && CustomerType != 'r' && CustomerType!= 'P' && CustomerType != 'p'){
        cout << "Invalid Customer Type Please Select 'P/p' for Prime and 'R or r' for Regular Customer" << endl;
        goto customer_type;
    } 

