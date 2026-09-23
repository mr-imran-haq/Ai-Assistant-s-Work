#include <iostream>
#include <vector>
#include <string>

struct Medicine {
    int id;
    std::string name;
    int quantity;
    double price;
};

int main() {
    std::vector<Medicine> inventory;

    inventory.push_back({1, "Paracetamol", 100, 0.50});
    inventory.push_back({2, "Amoxicillin", 50, 2.00});

    for (const auto& med : inventory) {
        std::cout << "ID: " << med.id << " | Name: " << med.name 
                  << " | Qty: " << med.quantity << " | Price: $" << med.price << std::endl;
    }

    return 0;
}