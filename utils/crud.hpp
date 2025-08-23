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
    cout << "HEllo";
    // 2. Assign it a unique ID from 'nextId', then increase 'nextId' by 1.
    // 3. Ask for the product's name. Use `cin.getline(newProduct.name, 50)` to read it.
    // 4. Ask for quantity and price.
    // 5. Add the new product to the 'products' vector.
    cout << "addProduct function is not implemented yet." << endl;
}

void displayAllProducts(const vector<Product>& products) {
    // INSTRUCTION:
    // 1. Check if the 'products' vector is empty.
    // 2. If it is, print "Inventory is empty."
    // 3. If not, loop through and print each product's details in a clean table format.
    cout << "displayAllProducts function is not implemented yet." << endl;
}

void searchProduct(const vector<Product>& products) {
    // INSTRUCTION:
    // 1. Ask the user to search by ID.
    // 2. Find the product with that ID and print its details.
    // 3. If not found, print a "Product not found" message.
    cout << "searchProduct function is not implemented yet." << endl;
}

void updateProduct(vector<Product>& products) {
    // INSTRUCTION:
    // 1. Ask for the ID of the product to update.
    // 2. Find the product. If not found, print an error.
    // 3. If found, ask for the new quantity and price and update the product in the vector.
    cout << "updateProduct function is not implemented yet." << endl;
}

void deleteProduct(vector<Product>& products) {
    // INSTRUCTION:
    // 1. Ask for the ID of the product to delete.
    // 2. Find and remove it from the vector. (Hint: use `products.erase()`).
    // 3. If not found, print an error message.
    cout << "deleteProduct function is not implemented yet." << endl;
}

void saveToFile(const vector<Product>& products, const string& filename) {
    // INSTRUCTION FOR BINARY FILE:
    // 1. Open the file for writing in binary mode. Example: `ofstream outFile(filename, ios::binary);`
    // 2. If the file fails to open, print an error and return.
    // 3. Loop through each product in the 'products' vector.
    // 4. For each product, write the entire object directly to the file.
    //    Hint: `outFile.write(reinterpret_cast<const char*>(&product), sizeof(Product));`
    // 5. Close the file.
    cout << "saveToFile function is not implemented yet." << endl;
}

void loadFromFile(vector<Product>& products, int& nextId, const string& filename) {
    // INSTRUCTION FOR BINARY FILE:
    // 1. Open the file for reading in binary mode. Example: `ifstream inFile(filename, ios::binary);`
    // 2. If the file doesn't open, just return (it might be the first time running).
    // 3. Create a temporary 'Product' object to read data into.
    // 4. Use a while loop to read one Product object at a time from the file until you reach the end.
    //    Hint: `while (inFile.read(reinterpret_cast<char*>(&tempProduct), sizeof(Product)))`
    // 5. Inside the loop, add the loaded product to the 'products' vector.
    // 6. Keep track of the highest ID you find.
    // 7. After the loop, set 'nextId' to be (the highest ID + 1).
    // 8. Close the file.
}