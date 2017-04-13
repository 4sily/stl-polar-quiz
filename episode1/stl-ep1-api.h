#include <iostream>
#include <string>
#include <map>
#include <vector>

enum class ElementType
{
    Valve,
    Gauge,
    Pump,
    Controller,
    Tube
};

struct Element
{
    Element(ElementType type) : type_(type) {}
    ElementType get_type() const { return type_; }

private:
    friend std::ostream& operator<<(std::ostream&, const Element&);
    ElementType type_; 
};

template <typename TCollection>
std::map<ElementType, std::vector<Element>> split_by_type(const TCollection& collection)
{
    // TODO
    return {};
}

template <typename TCollection>
void print_elements(const std::string& collection_name, TCollection&& collection)
{
    // TODO
}
