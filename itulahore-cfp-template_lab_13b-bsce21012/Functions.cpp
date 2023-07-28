#include "Functions.h"
#include <math.h>
#include <iostream>
#include <math.h>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

struct product {
    char name[50];
    int wholeSale;
    float retailPrice;
    int modelNum;
    float tax;
    string customerName;
    float balance;
    int ordersPrevious;
    int quantity;
    string pass;
    string id;
    float sum;
    int price;
};

void loginSystem() {
    product p1;
    ofstream myFile;
    myFile.open("loginForAdmin.txt", ios::app);
    if (myFile.is_open()) {
        cout << "please enter the id of admin." << endl;
        cin >> p1.id;
        cout << "please enter a strong password." << endl;
        cin.get();
        getline(cin, p1.pass);
        myFile << "The id you entered is    " << p1.id << endl;
        myFile << "the pass you entered is  " << p1.pass << endl;
        cout << "YOUR ACCOUNT HAS BEEN CREATED 0_0" << endl;
    } else {
        cout << "The file you are trying to open does not exit -_-" << endl;
    }
    myFile.close();
}

void shipment() {
    int numberOfProducts;
    product p1;
    cout << "please enter the model number you want to add to the inventory." << endl;
    cin >> p1.modelNum;
    fstream fileX;
    if (p1.modelNum != 431) {
        cout << "there is no such model number,So I can't take your shipment order.";
    } else if (p1.modelNum == 431) {
        fileX.open("modelXForShipping.txt", ios::in | ios::out | ios::app);
        if (fileX.is_open()) {
            cout << ".............. FOR MODEL 431 ................." << endl;
            cout << "please enter number of products you need." << endl;
            cin >> numberOfProducts;
            for (int i = 1; i <= numberOfProducts; i++) {
                cout << "\nEnter product name." << endl;
                cin >> p1.name;
//                cout << "Enter whole sale price" << endl;
//                cin >> p1.wholeSale;
//                cout << "Enter retail price" << endl;
//                cin >> p1.retailPrice;
                cout << "\nThe name Of the Product = " << setw(15) << p1.name << setw(30) << endl;
//                "wholeSale of the product = " << setw(15) << p1.wholeSale << setw(30)
//                     << "retail price of the product = " << setw(15) << p1.retailPrice << endl;
                fileX << "\nThe name Of the Product = " << setw(15) << p1.name << setw(30) << endl;
//                << "wholeSale of the product = " << setw(15) << p1.wholeSale << setw(30)
//                     << "retail price of the product = " << setw(15) << p1.retailPrice << endl;

            }

        }
        cout << "your products have been added to the inventory..." << endl;
        fileX << "your products have been added to the inventory..." << endl;
        fileX.close();

    }
}

void shipmentModel432() {
    int numberOfProducts;
    product p1;
    cout << "please enter the model number you want to add to the inventory." << endl;
    cin >> p1.modelNum;
    fstream fileY;
    if (p1.modelNum != 432) {
        cout << "there is no such model number,so I can't take your shipment order .";
    } else if (p1.modelNum == 432) {
        fileY.open("modelYForShipping.txt", ios::in | ios::out | ios::app);
        if (fileY.is_open()) {
            cout << "================= FOR MODEL 432 =================" << endl;
            cout << "please enter number of products you need." << endl;
            cin >> numberOfProducts;
            for (int i = 1; i <= numberOfProducts; i++) {
                cout << endl;
                cout << "\nplease enter product name." << endl;
                cin >> p1.name;
//                cout << "please enter whole sale price" << endl;
//                cin >> p1.wholeSale;
//                cout << "please enter retail price" << endl;
//                cin >> p1.retailPrice;
                cout << " The name Of the Product = " << setw(15) << p1.name << setw(30) << endl;
//                << "wholeSale of the product = " << setw(15) << p1.wholeSale << setw(30)
//                     << "retail price of the product = " << setw(15) << p1.retailPrice << endl;
                fileY << " The name Of the Product = " << setw(15) << p1.name << setw(30) << endl;
//                << "wholeSale of the product = " << setw(15) << p1.wholeSale << setw(30)
//                     << "retail price of the product = " << setw(15) << p1.retailPrice << endl;
                cout << endl;
            }
            cout << "your products have been added to the inventory..." << endl;
            cout << endl;
            fileY << "your products have been added to the inventory..." << endl;
            cout << endl;
        }

        fileY.close();
    } else {
        cout << "The file you are trying to open does not exit -_-" << endl;
    }
}

void shipmentModel433() {
    int numberOfProducts;
    product p1;
    cout << "please enter the model number you want to add to the inventory." << endl;
    cin >> p1.modelNum;
    fstream fileZ;
    if (p1.modelNum != 433) {
        cout << "there is no such model number,so I can't take your shipment order.";
    } else if (p1.modelNum == 433) {
        fileZ.open("modelZForShipping.txt", ios::in | ios::out | ios::app);
        if (fileZ.is_open()) {
            cout << "_________________ FOR MODEL 433 _________________" << endl;
            cout << "please enter number of products you need." << endl;
            cin >> numberOfProducts;
            for (int i = 0; i < numberOfProducts; i++) {
                cout << "\nplease enter product name." << endl;
                cin >> p1.name;
//                cout << "please enter whole sale price" << endl;
//                cin >> p1.wholeSale;
//                cout << "please enter retail price" << endl;
//                cin >> p1.retailPrice;
                cout << " The name Of the Product = " << setw(15) << p1.name << setw(30) << endl;
//                << "wholeSale of the product = " << setw(15) << p1.wholeSale << setw(30)
//                     << "retail price of the product = " << setw(15) << p1.retailPrice << endl;
                fileZ << " The name Of the Product = " << setw(15) << p1.name << setw(30) << endl;
//                "wholeSale of the product = " << setw(15) << p1.wholeSale << setw(30)
//                     << "retail price of the product = " << setw(15) << p1.retailPrice << endl;
            }

        }
        cout << "your products have been added to the inventory..." << endl;
        cout << endl;
        fileZ << "your products have been added to the inventory..." << endl;
        cout << endl;
        fileZ.close();
    } else {
        cout << "The file you are trying to open does not exit -_-" << endl;
    }
}

void menuForShipment() {
    int opt;
    do {
        cout << "---------------------- choose options for shipment ---------------------" << endl;
        cout << "1.For shipment of model 431." << endl;
        cout << "2.For shipment of model 432." << endl;
        cout << "3.For shipment of model 433." << endl;
        cout << "4.exit." << endl;
        cin >> opt;
        switch (opt) {
            case 1: {
                shipment();
                break;
            }
            case 2: {
                shipmentModel432();
                break;
            }
            case 3: {
                shipmentModel433();
                break;
            }
            case 4: {
                cout << "you choose to exit." << endl;
                exit(1);
                break;
            }
            default: {
                cout << "you have entered invalid option.";
            }
        }
    } while (opt >= 1 && opt <= 4);
}

void productA() {
    product p1;
    int numberOfProducts1;
    cout << "please enter the product model you want to add to the inventory 0_0.. " << endl;
    cin >> p1.modelNum;
    fstream file;
    if (p1.modelNum == 431) {
        file.open("modelA.txt", ios::in | ios::out | ios::app);
        if (file.is_open()) {
            cout << "please enter number of products you need..." << endl;
            cin >> numberOfProducts1;
            if(numberOfProducts1>10 ){
                cout<<"we cant add more than 10 items in inventory..";
            }
            else {

                for (int i = 1; i <= numberOfProducts1; i++) {
                    cout << "please enter product name." << endl;
                    cin >> p1.name;
                    cout << "please enter whole sale price" << endl;
                    cin >> p1.wholeSale;
                    cout << "please enter  price" << endl;
                    cin >> p1.price;
                    if (p1.price <= 1000 && p1.price > 0) {
                        cout << "a tax of 2% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.02));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax << endl;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 2000 && p1.price > 1000) {
                        cout << "a tax of 3% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.03));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 3000 && p1.price > 2000) {
                        cout << "a tax of 4% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.04));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 4000 && p1.price > 3000) {
                        cout << "a tax of 5% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.05));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else {
                        cout << "a tax of 10% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.1));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    }
                    cout << "name =" << setw(10) << p1.name << setw(20) << "wholeSale =" << setw(10) << p1.wholeSale
                         << setw(20) << " price =" << setw(10) << p1.price << setw(20) << "tax =" << setw(10) << p1.tax
                         << setw(20) << "retail price = " << setw(10) << p1.retailPrice << endl;
                    file << "name =" << setw(10) << p1.name << setw(20) << "wholeSale =" << setw(10) << p1.wholeSale
                         << setw(20) << " price =" << setw(10) << p1.price << setw(10) << "tax =" << setw(10) << p1.tax
                         << setw(20) << "retail price =" << setw(10) << p1.retailPrice << endl;

                }
            }
        }
        file.close();
    } else {
        cout << "you have entered invalid model number." << endl;
    }
}

void productB() {
    product p1;
    cout << "please enter the product model you want to add to the inventory 0_0.. " << endl;
    cin >> p1.modelNum;
    int numberOfProductsB;
    fstream file1;
    if (p1.modelNum == 432) {
        file1.open("modelB.txt", ios::in | ios::out | ios::app);
        if (file1.is_open()) {
            cout << "please enter number of products you need..." << endl;
            cin >> numberOfProductsB;
            if(numberOfProductsB>10 ){
                cout<<"we cant add more than 10 items in inventory.."<<endl;
            }
            else {

                for (int i = 1; i <= numberOfProductsB; i++) {
                    cout << "please enter product name." << endl;
                    cin >> p1.name;
                    cout << "please enter whole sale price" << endl;
                    cin >> p1.wholeSale;
                    cout << "please enter  price" << endl;
                    cin >> p1.price;
                    if (p1.price <= 1000 && p1.price > 0) {
                        cout << "a tax of 2% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.02));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax << endl;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 2000 && p1.price > 1000) {
                        cout << "a tax of 3% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.03));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 3000 && p1.price > 2000) {
                        cout << "a tax of 4% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.04));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 4000 && p1.price > 3000) {
                        cout << "a tax of 5% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.05));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else {
                        cout << "a tax of 10% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.1));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    }
                    cout << "name =" << setw(10) << p1.name << setw(20) << "wholeSale =" << setw(10) << p1.wholeSale
                         << setw(20) << " price =" << setw(10) << p1.price << setw(10) << "tax =" << setw(10) << p1.tax
                         << setw(20) << "retail price = " << setw(10) << p1.retailPrice << endl;
                    file1 << "name =" << setw(10) << p1.name << setw(20) << "wholeSale =" << setw(10) << p1.wholeSale
                          << setw(20) << " price =" << setw(10) << p1.price << setw(10) << "tax =" << setw(10) << p1.tax
                          << setw(20) << "retail price =" << setw(10) << p1.retailPrice << endl;

                }
            }
        }
        file1.close();
    } else {
        cout << "you have entered invalid model number." << endl;
    }

}

void productC() {
    product p1;
    int numberOfProductsC;
    cout << "please enter the product model you want to add to the inventory 0_0.. " << endl;
    cin >> p1.modelNum;
    fstream file2;
    if (p1.modelNum == 433) {
        file2.open("modelC.txt", ios::in | ios::out | ios::app);
        if (file2.is_open()) {
            cout << "please enter number of products you need..." << endl;
            cin >> numberOfProductsC;
            if(numberOfProductsC>10 ){
                cout<<"we cant add more than 10 items in inventory.."<<endl;
            }
            else {

                for (int i = 1; i <= numberOfProductsC; i++) {
                    cout << "please enter product name." << endl;
                    cin >> p1.name;
                    cout << "please enter whole sale price" << endl;
                    cin >> p1.wholeSale;
                    cout << "please enter price" << endl;
                    cin >> p1.price;
                    if (p1.price <= 1000 && p1.price > 0) {
                        cout << "a tax of 2% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.02));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax << endl;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 2000 && p1.price > 1000) {
                        cout << "a tax of 3% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.03));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 3000 && p1.price > 2000) {
                        cout << "a tax of 4% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.04));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else if (p1.price <= 4000 && p1.price > 3000) {
                        cout << "a tax of 5% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.05));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    } else {
                        cout << "a tax of 10% is applied on retail price (｡◕‿◕｡)" << endl;
                        p1.tax = ((p1.price) * (0.1));
                        p1.tax = (p1.tax / p1.wholeSale);
                        cout << "the tax applied is = " << setw(10) << p1.tax;
                        p1.retailPrice = p1.price + p1.tax;
                        cout << "the total Price is = " << p1.retailPrice;
                    }
                    cout << "name =" << setw(10) << p1.name << setw(20) << "wholeSale =" << setw(10) << p1.wholeSale
                         << setw(20) << " price =" << setw(10) << p1.price << setw(10) << "tax =" << setw(10) << p1.tax
                         << setw(20) << "retail price =" << setw(10) << p1.retailPrice << endl;
                    file2 << "name =" << setw(10) << p1.name << setw(20) << "wholeSale =" << setw(10) << p1.wholeSale
                          << setw(20) << " price =" << setw(10) << p1.price << setw(10) << "tax =" << setw(10) << p1.tax
                          << setw(20) << "retail price =" << setw(10) << p1.retailPrice << endl;

                }
            }
        }
        file2.close();
    }
}

void menuForNewProduct() {
    int opt1;
    do {
        cout << "-_-_-_-_-_-_-_-_-_-_-_-_- choose new product -_-_-_-_-_-_-_-_-_-_-_-" << endl;
        cout << "1.For product of model 431." << endl;
        cout << "2.For product of model 432." << endl;
        cout << "3.For product of model 433." << endl;
        cout << "4.exit." << endl;
        cin >> opt1;
        switch (opt1) {
            case 1: {
                productA();
                break;
            }
            case 2: {
                productB();
                break;
            }
            case 3: {
                productC();
                break;
            }
            case 4: {
                cout << "you choose to exit." << endl;
                exit(1);
                break;
            }
            default: {
                cout << "you have entered invalid option.";
            }
        }
    } while (opt1 >= 1 && opt1 <= 4);
}

void displayModelA() {
    product p1;
    fstream file;
    file.open("modelA.txt", ios::ate | ios::in);
    string data;
    if (file.is_open()) {
        if (!file.tellg() == 0) {
            file.seekg(0, ios::beg);
            while (!file.eof()) {
                getline(file, data);
                cout << data << endl;
            }
        } else {
            cout << "there is nothing in this file.-_-." << endl;
        }

    } else {
        cout << "your file isn't open -_-" << endl;
    }

    file.close();
}

void displayModelB() {
    product p1;
    fstream file1;
    file1.open("modelB.txt", ios::ate | ios::in);
    string data1;
    if (file1.is_open()) {
        if (!file1.tellg() == 0) {
            file1.seekg(0, ios::beg);

            while (!file1.eof()) {
                getline(file1, data1);
                cout << data1 << endl;
            }
        } else {
            cout << "there is nothing in this file.-_-." << endl;
        }

    } else {
        cout << "your file isn't open -_-" << endl;
    }

    file1.close();
}

void displayModelC() {
    product p1;
    fstream file2;
    file2.open("modelC.txt", ios::ate | ios::in);
    string data2;
    if (file2.is_open()) {
        if (!file2.tellg() == 0) {
            file2.seekg(0, ios::beg);

            while (!file2.eof()) {
                getline(file2, data2);
                cout << data2 << endl;
            }
        } else {
            cout << "there is nothing in this file.-_-." << endl;
        }

    } else {
        cout << "your file isn't open -_-" << endl;
    }

    file2.close();
}


void displayRecordMenu() {
    int opt2;
    do {
        cout << "================== choose options for displaying record ==================" << endl;
        cout << "1.For record of model 431." << endl;
        cout << "2.For record of model 432." << endl;
        cout << "3.For record of model 433." << endl;
        cout << "4.exit." << endl;
        cin >> opt2;
        switch (opt2) {
            case 1: {
                displayModelA();
                break;
            }
            case 2: {
                displayModelB();
                break;
            }
            case 3: {
                displayModelC();
                break;
            }
            case 4: {
                cout << "you choose to exit." << endl;
                exit(1);
                break;
            }
            default: {
                cout << "you have entered invalid option.";
            }
        }
    } while (opt2 >= 1 && opt2 <= 4);
}

void shippingModelA() {
    product p1;
    fstream fileX;
    fileX.open("modelXForShipping.txt", ios::ate | ios::in);
    string dataX;
    if (fileX.is_open()) {
        if (!fileX.tellg() == 0) {
            fileX.seekg(0, ios::beg);
            while (!fileX.eof()) {
                getline(fileX, dataX);
                cout << dataX << endl;
            }
        } else {
            cout << "there is nothing in this file.-_-." << endl;
        }

    } else {
        cout << "your file isn't open -_-" << endl;
    }

    fileX.close();
}

void shippingModelB() {
    product p1;
    fstream fileY;
    fileY.open("modelYForShipping.txt", ios::ate | ios::in);
    string dataY;
    if (fileY.is_open()) {
        if (!fileY.tellg() == 0) {
            fileY.seekg(0, ios::beg);
            while (!fileY.eof()) {
                getline(fileY, dataY);
                cout << dataY << endl;
            }
        } else {
            cout << "there is nothing in this file.-_-." << endl;
        }

    } else {
        cout << "your file isn't open -_-" << endl;
    }

    fileY.close();
}

void shippingModelC() {
    product p1;
    fstream fileZ;
    fileZ.open("modelZForShipping.txt", ios::ate | ios::in);
    string dataZ;
    if (fileZ.is_open()) {
        if (!fileZ.tellg() == 0) {
            fileZ.seekg(0, ios::beg);
            while (!fileZ.eof()) {
                getline(fileZ, dataZ);
                cout << dataZ << endl;
            }
        } else {
            cout << "there is nothing in this file.-_-." << endl;
        }

    } else {
        cout << "your file isn't open -_-" << endl;
    }

    fileZ.close();
}

void displayShippingRecordMenu() {
    int opt4;
    do {
        cout << "================== choose options for displaying record ==================" << endl;
        cout << "1.For record of shipping model 431." << endl;
        cout << "2.For record of shipping model 432." << endl;
        cout << "3.For record of shipping model 433." << endl;
        cout << "4.exit." << endl;
        cin >> opt4;
        switch (opt4) {
            case 1: {
                shippingModelA();
                break;
            }
            case 2: {
                shippingModelB();
                break;
            }
            case 3: {
                shippingModelC();
                break;
            }
            case 4: {
                cout << "you choose to exit." << endl;
                exit(1);
                break;
            }
            default: {
                cout << "you have entered invalid option.";
            }
        }
    } while (opt4 >= 1 && opt4 <= 4);
}

void adminMenu() {
    int opt3;
    do {
        cout << "--------------choose options as a admin ----------------" << endl;
        cout << "1.For shipment." << endl;
        cout << "2.For new product." << endl;
        cout << "3.For record displaying." << endl;
        cout << "4.For record displaying of shipments." << endl;
        cout << "5..exit." << endl;
        cin >> opt3;
        switch (opt3) {
            case 1: {
                menuForShipment();
                break;
            }
            case 2: {
                menuForNewProduct();
                break;
            }
            case 3: {
                displayRecordMenu();
                break;
            }
            case 4: {
                displayShippingRecordMenu();
                break;
            }
            case 5: {
                cout << "you choose to exit." << endl;
                exit(1);
            }
            default: {
                cout << "you have entered invalid option.";
            }
        }
    } while (opt3 >= 1 && opt3 <= 4);
}

void loginSystemForCustomer() {
    product p1;
    ofstream myFile1;
    myFile1.open("loginForCustomer.txt", ios::app);
    if (myFile1.is_open()) {
        cout << "please enter the id..." << endl;
        cin >> p1.id;
        cout << "please enter a strong password." << endl;
        cin.get();
        getline(cin, p1.pass);
        cout << "please enter your beautiful name •ᴥ•" << endl;
        cin.get();
        getline(cin, p1.customerName);
        cout << "please enter your account balance •ᴥ• " << endl;
        cin >> p1.balance;
        myFile1 << "The id you entered is  = " << setw(10) << p1.id << endl;
        myFile1 << "The pass you entered is=  " << setw(10) << p1.pass << endl;
        myFile1 << "Your name = " << setw(15) << p1.customerName << endl;
        myFile1 << "Current balance in account = " << setw(20) << p1.balance << endl;
        if (p1.balance < 0) {
            cout << "you can't have negative amount in balance (ง’̀-‘́)ง" << endl;
        } else {
            cout << "YOUR ACCOUNT HAS BEEN CREATED 0_0" << endl;
            cout << "Now you can explore our website and can buy anything you want..0_0" << endl;
        }
    } else {
        cout << "The file you are trying to open does not exit -_-" << endl;
    }
    myFile1.close();
}

void buyingModelA() {
    int quantity1=10;
    product p1;
    fstream file;
    cout << "please tell us the model of the product you want to buy from ten inventory products.." << endl;
    cin >> p1.modelNum;
    if (p1.modelNum == 431) {
        if (quantity1 <= 0) {
            cout << "Their is nothing in the inventory (ᵔᴥᵔ)" << endl;
            exit(1);
        }
        cout << "How much quantity of products you want to buy.." << endl;
        cin >> p1.quantity;
        if (p1.quantity <= quantity1) {
            cout << "please enter product name." << endl;
            cin >> p1.name;
            file.open("modelA.txt", ios::ate | ios::in);
            string data1;
            if (file.is_open()) {

cout<<"==============you have bought the following things============="<<endl<<endl;
if(p1.quantity==1){
    file.seekg((p1.quantity+10)*104,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==2){
    file.seekg((p1.quantity+9)*92.5,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==3){
    file.seekg((p1.quantity+8)*81,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==4){
    file.seekg((p1.quantity+7)*69.5,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==5){
    file.seekg((p1.quantity+6)*57.9,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==6){
    file.seekg((p1.quantity+5)*46.3,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==7){
    file.seekg((p1.quantity+4)*34.8,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==8){
    file.seekg((p1.quantity+3)*23.2,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==9){
    file.seekg((p1.quantity+2)*11.7,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
else if(p1.quantity==10){
    file.seekg((p1.quantity+1)*0.2,ios::beg);
    while (getline(file, data1)) {
        cout << data1 << endl;
    }
}
file.close();
            } else {
                cout << "We don't have that much products in our inventory(. ❛ ᴗ ❛.)" << endl;
            }
        } else {
            cout << "we don't have that model ,you are trying to find (. ❛ ᴗ ❛.)" << endl;
        }
    }
}
fstream file1;

void buyingModelB(){
    int quantity1=10;
    product p1;
    cout << "please tell us the model of the product you want to buy.." << endl;
    cin >> p1.modelNum;
    if (p1.modelNum == 431) {
        if (quantity1 <= 0) {
            cout << "Their is nothing in the inventory (ᵔᴥᵔ)" << endl;
            exit(1);
        }
        cout << "How much quantity of products you want to buy from ten inventory products.." << endl;
        cin >> p1.quantity;
        if (p1.quantity <= quantity1) {
            cout << "please enter product name." << endl;
            cin >> p1.name;
            file1.open("modelB.txt", ios::ate | ios::in);
            string data2;
            if (file1.is_open()) {

                cout << "==============you have bought the following things=============" << endl << endl;
                if (p1.quantity == 1) {
                    file1.seekg((p1.quantity + 10) * 104, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 2) {
                    file1.seekg((p1.quantity + 9) * 92.5, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 3) {
                    file1.seekg((p1.quantity + 8) * 81, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 4) {
                    file1.seekg((p1.quantity + 7) * 69.5, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 5) {
                    file1.seekg((p1.quantity + 6) * 57.9, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 6) {
                    file1.seekg((p1.quantity + 5) * 46.3, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 7) {
                    file1.seekg((p1.quantity + 4) * 34.8, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 8) {
                    file1.seekg((p1.quantity + 3) * 23.2, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 9) {
                    file1.seekg((p1.quantity + 2) * 11.7, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                } else if (p1.quantity == 10) {
                    file1.seekg((p1.quantity + 1) * 0.2, ios::beg);
                    while (getline(file1, data2)) {
                        cout << data2 << endl;
                    }
                }

                file1.close();

        }
            else {
                cout << "the file have nothing in it." << endl;
            }
        }
        else {
                    cout << "We don't have that much products in our inventory(. ❛ ᴗ ❛.)" << endl;
                }
            }
        else {
            cout << "we don't have that model ,you are trying to find (. ❛ ᴗ ❛.)" << endl;
        }
    }

void buyingModelC(){
    int quantity1=10;
    product p1;
    fstream file2;
    cout << "please tell us the model of the product you want to buy.." << endl;
    cin >> p1.modelNum;
    if (p1.modelNum == 431) {
        if (quantity1 <= 0) {
            cout << "Their is nothing in the inventory (ᵔᴥᵔ)" << endl;
            exit(1);
        }
        cout << "How much quantity of products you want to buy from 10 inventory products.." << endl;
        cin >> p1.quantity;
        if (p1.quantity <= quantity1) {
            cout << "please enter product name." << endl;
            cin >> p1.name;
            file2.open("modelB.txt", ios::ate | ios::in);
            string data3;
            if (file2.is_open()) {

                cout<<"==============you have bought the following things============="<<endl<<endl;
                if(p1.quantity==1){
                    file2.seekg((p1.quantity+10)*104,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==2){
                    file1.seekg((p1.quantity+9)*92.5,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==3){
                    file1.seekg((p1.quantity+8)*81,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==4){
                    file1.seekg((p1.quantity+7)*69.5,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==5){
                    file1.seekg((p1.quantity+6)*57.9,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==6){
                    file1.seekg((p1.quantity+5)*46.3,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==7){
                    file1.seekg((p1.quantity+4)*34.8,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==8){
                    file1.seekg((p1.quantity+3)*23.2,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==9){
                    file1.seekg((p1.quantity+2)*11.7,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
                else if(p1.quantity==10){
                    file1.seekg((p1.quantity+1)*0.2,ios::beg);
                    while (getline(file2, data3)) {
                        cout << data3 << endl;
                    }
                }
file2.close();
            } else {
                cout << "We don't have that much products in our inventory(. ❛ ᴗ ❛.)" << endl;
            }
        } else {
            cout << "we don't have that model ,you are trying to find (. ❛ ᴗ ❛.)" << endl;
        }
    }
}

void CustomerBuyingMenu() {
    int opt7;
    do {
        cout << "--------------choose options as a admin ----------------" << endl;
        cout << "1.For buying product of modelA(431)." << endl;
        cout << "2.For buying product of modelB(432)." << endl;
        cout << "3.For buying product of modelC(433)." << endl;
        cout << "4.exit." << endl;
        cin >> opt7;
        switch (opt7) {
            case 1: {
                buyingModelA();
                break;
            }
            case 2: {
                buyingModelB();
                break;
            }
            case 3: {
                buyingModelC();
                break;
            }
            case 4: {
                cout << "you choose to exit." << endl;
                exit(1);
            }
            default: {
                cout << "you have entered invalid option.";
            }
        }
    } while (opt7 >= 1 && opt7 <= 4);
}

int SpacesToCharacter(char arr[]) {
    int countForSpaces = 0;
    int i;
    for (i = 0; arr[i]; i++) {
        if (arr[i] == ' ') {
            countForSpaces++;
        }
    }
    while (arr[i - 1] == ' ') {
        countForSpaces--;
        i--;
    }
    int upgradedLength = ((i + (countForSpaces * 2)) + 1);
    int location = upgradedLength - 1;
    if (upgradedLength > MAX) {
        return -1;
    }
    arr[location--] = '\0';
    for (int k = i - 1; k >= 0; k--) {
        if (arr[k] == ' ') {
            arr[location] = '0';
            arr[location - 1] = '2';
            arr[location - 2] = '%';
            location = location - 3;
        } else {
            arr[location] = arr[k];
            location--;
        }
    }
    cout << "---->  ";
    return upgradedLength;
}
