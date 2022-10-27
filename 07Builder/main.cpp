#include "Director.h"
#include "TextBuilder.h"
#include <iostream>

int main() {
    TextBuilder *builder = new TextBuilder;
    Director director(builder);
    director.Construct();
    std::string result = builder->GetResult();
    std::cout << result << std::endl;
    delete builder;
    return 0;
}
