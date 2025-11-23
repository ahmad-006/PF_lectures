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

    input_order:

        cout << "Please Enter Order Id: ";
        cin >> orderId;

        cout << "Please enter Order Quantity:";
        cin >> orderQty;


        //validate orderId and quantity
        if(orderId != firstProductId && orderId != thirdProductId && orderId != secondProductId ){
            cout << "Order Id wrong please Enter correct Order Id" << endl;
            goto input_order;
        };

        if(orderId == firstProductId && firstProductQuantity < orderQty){
            cout << "Out of Stock...... Product " << firstProductId << " only has " << firstProductQuantity << " items in stock" << endl;
            goto input_order;
        }else if(orderId == secondProductId && secondProductQuantity < orderQty){
            cout << "Out of Stock...... Product " << secondProductId << " only has " << secondProductQuantity << " items in stock" << endl;
            goto input_order;
        }
        else if (orderId == thirdProductId && thirdProductQuantity < orderQty)
        {
            cout << "Out of Stock...... Product " << thirdProductId << " only has " << thirdProductQuantity << " items in stock" << endl;
            goto input_order;
        }

        //? calculating order 
        //subtotal 
        if(orderId == firstProductId)
            subtotal = firstProductPrice * orderQty ;
        else if(orderId == secondProductId)
            subtotal = secondProductPrice * orderQty;
        else if(orderId == thirdProductId)
            subtotal = thirdProductPrice * orderQty;


        // discount for Prime customers
        if(CustomerType == 'P' || CustomerType == 'p'){
            discount = subtotal *  0.10;
        } 
        
        
        //fees if order less than Rs 5000
        if(subtotal < 5000){
            fee = 200;
        }
        
        //getting total
        total = subtotal - discount + fee;
  

        //confirm order
        cout << "Confirm Order? (Y to Confirm / N to change): ";
        cin >> confirm;

        if(confirm == 'N' || confirm == 'n'){
            cout << "Order Not Confirmed Going to Start.....!" << endl;
            goto customer_type;
        }


        cout << "\n--------- ORDER SUMMARY ---------" << endl;
        cout << "Subtotal: Rs" << subtotal << endl;
        cout << "Discount: -Rs" << discount << endl;
        cout << "Fee:      +Rs" << fee << endl;
        cout << "Total:    Rs" << total << endl;
        cout << "---------------------------------" << endl;



        return 0;
}
