#include "basket.h"

namespace Shop {
    void Basket::addProduct(int32_t id, std::string name, double unit_price, double gst, int32_t qty) {
        Product product(id, name, unit_price, gst, qty);
        m_products.push_back(product);
    }

    const double Basket::totalAmount() const {
        double total_price = 0.0;
        for (int i = 0; i < m_products.size(); ++i)
        {
            total_price += m_products[i].calculatePrice();
        }

        return total_price;
    }
}