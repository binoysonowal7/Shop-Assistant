#ifndef BASKET_H
#define BASKET_H

#include <vector>
#include "product.h"

namespace Shop {
    class Basket {
    private:
        std::vector<Product> m_products;
    public:
        Basket() = default;
        void addProduct(int32_t id, std::string name, double unit_price, double gst, int32_t qty);
        const double totalAmount() const;
    };
}

#endif
