#include <iostream>

#include "basket.h"
#include "product.h"

int32_t main() {
    Shop::Basket basket;
    basket.addProduct(1, "Leather wallet", 1100, 18, 1);
    basket.addProduct(2, "Umbrella", 900, 12, 4);
    basket.addProduct(3, "Cigarette", 200, 28, 3);
    basket.addProduct(4, "Honey", 100, 0, 2);

    std::cout << "Total Price = " << basket.totalAmount() << std::endl;
}