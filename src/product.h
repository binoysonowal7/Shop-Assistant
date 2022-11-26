#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

namespace Shop {

    class Product {
    private:
        int32_t m_id;
        std::string m_name;
        double m_unit_price;
        double m_gst;
        int32_t m_qty;
    public:
        Product(int32_t id, std::string name, double unit_price, double gst, int32_t qty);
        const double calculatePrice() const;
    };
}

#endif
