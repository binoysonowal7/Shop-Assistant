#include "product.h"

namespace Shop {
    Product::Product(int32_t id, std::string name, double unit_price, double gst, int32_t qty) 
        : m_id(id), m_name(name), m_unit_price(unit_price), m_gst(gst), m_qty(qty)
    {
        if(unit_price >= 500.0) {
            m_unit_price = unit_price - ((5.0 / 100.0) * unit_price);
        }
    }

    const double Product::calculatePrice() const {
        double price = m_unit_price + ((m_gst / 100.0) * m_unit_price);
        price = m_qty * price;
        return price;
    }
}