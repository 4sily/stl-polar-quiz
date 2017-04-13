Assume we're writing software for a vacuum system. Such system consists of a number of elements, such as:

* Pumps
* Gauges
* Valves
* Tubes
* a controller board

Assume we have a collection of such elements,
    
```
const auto all_elements[] = {
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
```

As a customer, I want the program to print the formatted output, which will include:
1) information about all of the elements in one line
2) information about all elements of a given type.

So the client expects to be able to write code like this (in C++17)

```
    print_elements("All elements", all_elements);

    for (const auto& [type, elements] : split_by_type(all_elements)) {
        print_elements(to_string(type), elements);
    }
```

Expected output for the collection provided above will be:

```
All elements of collection 'All elements': | Gauge | Valve | Pump | Valve | Valve | Gauge | Pump | Controller | Pump | Pump | 
All elements of collection 'Valves': | Valve | Valve | Valve | 
All elements of collection 'Gauges': | Gauge | Gauge | 
All elements of collection 'Pumps': | Pump | Pump | Pump | Pump | 
All elements of collection 'Controllers': | Controller | 
```

Implement this API provided in the source files.
Write implementation in a clear and easy-to-understand modern C++.
You are allowed to use STL, boost and ranges v3 library.

Time to solve: 40 minutes.