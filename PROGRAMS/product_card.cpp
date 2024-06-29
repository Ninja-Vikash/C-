#include <iostream>
using namespace std;

enum status {
    pending,
    cancelled,
    delivered
};

class Product {
    public:
        string UserName;
        string ProductName;
        float Price;
        string isAvailable;
        string ProductStatus;

        // Constructor
        Product(string USERNAME, string PRODUCT, float PRICE,
                string STOCK, string STATUS)
        {
            UserName = USERNAME;
            ProductName = PRODUCT;
            Price = PRICE;
            isAvailable = STOCK;
            ProductStatus = STATUS;
        }

        // Method to print the data
        void details(){
            cout << "---------PRODUCT DETAILS---------\n";
            cout << "CUSTOMER NAME : " << UserName << "\n";
            cout << "PRODUCT NAME : " << ProductName << "\n";
            cout << "PRODUCT PRICE : " << Price << "\n";
            cout << "STOCK : " << isAvailable << "\n";
            cout << "STATUS : " << ProductStatus << "\n";
        }
};

int main (){
    string username;
    string productName;
    float price;
    bool isAvailable;
    enum status productStatus;

    // Data Entry Part
    username = "Vikash Kumar";
    productName = "macOS";
    price = 457888;
    isAvailable = true;
    productStatus = pending;

    // Logic for StockMessage
    string stockMsg = (isAvailable == true) ? "YES"  : "NO";
    
    // Logic for StatusMessage
    string statusMsg;
    switch (productStatus)
    {
    case 0:
        statusMsg = "PENDING";
        break;
    case 1:
        statusMsg = "CANCELLED";
        break;
    case 2:
        statusMsg = "DELIVERED";
        break;
    default:
        break;
    }

    // Class formation
    Product macOS(username, productName, price, stockMsg, statusMsg);
    macOS.details();
    
    return 0;
}