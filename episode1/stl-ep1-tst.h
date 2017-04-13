#include "stl-ep1-api.h"

template <typename TElementCollection>
void test(const TElementCollection& all_elements)
{
	print_elements("All elements", all_elements);

	for (const auto& [type, elements] : split_by_type(all_elements)) {
		print_elements(to_string(type) + "s", elements);
	}
}

auto generate_sample_collection()
{
	return std::vector<Element>{
		ElementType::Gauge,
		ElementType::Valve,
		ElementType::Pump,
		ElementType::Valve,
		ElementType::Valve,
		ElementType::Gauge,
		ElementType::Pump,
		ElementType::Controller,
		ElementType::Pump,
		ElementType::Pump
	};
}