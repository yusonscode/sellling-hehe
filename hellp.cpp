#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    
    std::cout << "========== Welcome to Chloe restaurant ========== \n";

    std::string product[6] = {"Ice cream", "spaghetti", "Burger   ", "Palabok", "Gulaman", "Malabon" };
    double price[6] = {23.00, 79.50, 59.45, 30.00, 10.00, 40.00};
    int size = sizeof(product)/sizeof(product[0]);

    for (int i = 0; i < size; i++) {
        printf("[%d] %s \t\t\t\t  \u20B1 %.2f \n", i + 1, product[i].c_str(), price[i]);
        if (i >= size - 1) {
            std::cout << "\t\tpress 0 to exit \n";
        }
    }
    
    std::vector <std::string> orderlist_product;
    std::vector <double> orderlist_price;
    double total = 0;

    do {
        int order = 0;
        std::cout << "What's your order: ";
        std::cin >> order;

        if (order > size) {
            std::cout << "your order is not in the menu list \n";
        } else if (order == 0) {
            break;
        } else {
            printf("your order is %s at price of %.2f \n", product[order - 1].c_str(), price[order - 1]);
            orderlist_product.push_back(product[order - 1]);
            orderlist_price.push_back(price[order - 1]);
            total += price[order - 1];

        }
    } while (true);
    std::cout << "================= Your bill ================= \n";
    for (int orders = 0; orders < orderlist_product.size(); orders++) {
        printf("%s \t\t\t\t%.2f \n", orderlist_product[orders].c_str(), orderlist_price[orders]);
    }
    std::cout << "--------------------------------------------- \n"
              << "Total:" << "\t\t\t\t\t" << total << "\nThank you for ordering \n";

    return 0;
}