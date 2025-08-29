#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <vector>
#include "../model/Product.hpp"


// Use the standard namespace for cout, cin, vector, string, etc.
using namespace std;

// STUDENT INSTRUCTIONS:
// Your task is to fill in the logic for each function below.
// Read the comments in each function to know what it should do.

void addProduct(vector<Product>& products, int& nextId) {
    // INSTRUCTION:
    // 1. Create a new 'Product' object.
    Product newProduct;
    // 2. Assign it a unique ID from 'nextId', then increase 'nextId' by 1.
    newProduct.id = nextId++;
    // 3. Ask for the product's name. Use `cin.getline(newProduct.name, 50)` to read it.
    getline( cin, newProduct.name);
    // 4. Ask for quantity and price.
    cout << "What is the quantity?: ";
    cin >> newProduct.quantity;
    cout << "What is the price?: ";
    cin >> newProduct.price;
    // 5. Add the new product to the 'products' vector.
    cout << "addProduct function is not implemented yet." << endl;
} //FINISH

void displayAllProducts(const vector<Product>& products) {
    // INSTRUCTION:
    // 1. Check if the 'products' vector is empty.
    // 2. If it is, print "Inventory is empty."
    // 3. If not, loop through and print each product's details in a clean table format.
    cout << "displayAllProducts function is not implemented yet." << endl;
    //NOT FINISHED
}

void searchProduct(const vector<Product>& products) {
    // INSTRUCTION:
    // 1. Ask the user to search by ID.
      cout << "What is your ID?: ";
//     // 2. Find the product with that ID and print its details.
     for (int i = 0; i < products.size(); i++){
         cin >> products[i].id;
         if(products[i].id){
         cout << "Product can't find.";
     }else{
     cout << "searchProduct function is not implemented yet." << endl;
     }
 }
    }
    // 3. If not found, print a "Product not found" message.
    //NOT FINISHED


void updateProduct(vector<Product>& products) {
    // INSTRUCTION:
    // 1. Ask for the ID of the product to update.
    cout << "What is the ID of the product?: ";
    // 2. Find the product. If not found, print an error.
    for (int i = 0; i < products.size(); i++){
        if(products[i].id){
            cout << "What is the quantity?: ";
            cin >> products[i].quantity;
            cout << "what isthr price?: ";
            cin >> products[i].price;
        } else{
            cout << "Sorry, We can't find the product.";
        }
    }
    // 3. If found, ask for the new quantity and price and update the product in the vector.
    cout << "updateProduct function is not implemented yet." << endl;
}

void deleteProduct(vector<Product>& products) {
    // INSTRUCTION:
    // 1. Ask for the ID of the product to delete.
    cout << "What is the ID of the product you want to delete?: ";
    for (int i = 0; i < products.size(); i++){
        if(products[i].id){
        // products[i].erase();
        } else{
            cout << "Error product is not found.";
        }
    }
    // 2. Find and remove it from the vector. (Hint: use `products.erase()`).
    // 3. If not found, print an error message.
    cout << "deleteProduct function is not implemented yet." << endl;
}

void saveToFile(const vector<Product>& products, const string& filename) {
    // INSTRUCTION FOR BINARY FILE:
    // 1. Open the file for writing in binary mode. Example: `ofstream outFile(filename, ios::binary);`
    ofstream outFile(filename, ios::binary);
    // 2. If the file fails to open, print an error and return.
    if (outFile.is_open()){
        outFile.write(reinterpret_cast<const char*>(&products), sizeof(Product));
    }else{
        cout << "File is failed to open.";
    }
    // 3. Loop through each product in the 'products' vector.
    // 4. For each product, write the entire object directly to the file.
    //    Hint: `outFile.write(reinterpret_cast<const char*>(&product), sizeof(Product));`
    // 5. Close the file.
    outFile.close();
    cout << "saveToFile function is not implemented yet." << endl;
}

void loadFromFile(vector<Product>& products, int& nextId, const string& filename) {
    // INSTRUCTION FOR BINARY FILE:
    // 1. Open the file for reading in binary mode. Example: `ifstream inFile(filename, ios::binary);`
    ifstream inFile(filename, ios::binary);
    // 2. If the file doesn't open, just return (it might be the first time running).
    if(!inFile.is_open()){
        return;
    }
    // 3. Create a temporary 'Product' object to read data into.
    Product tempProduct;
    // 4. Use a while loop to read one Product object at a time from the file until you reach the end.
    while(inFile.read(reinterpret_cast<char*>(&tempProduct), sizeof(Product))){
        products loadedProduct;

        if(loadedProduct.id > products.id){
            products.id = loadedProduct.id;
        } else
    }
    nextId = products.id++;
    // //    Hint: `while (inFile.read(reinterpret_cast<char*>(&tempProduct), sizeof(Product)))`
    // // 5. Inside the loop, add the loaded product to the 'products' vector.
    // // 6. Keep track of the highest ID you find.
    // // 7. After the loop, set 'nextId' to be (the highest ID + 1).
    // // 8. Close the file.
    inFile.close(); 
    //NOT FINISHED
}