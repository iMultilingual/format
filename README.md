# a utilized snprintf formatting! #
```cpp
char buffer[2048] /* our max buffer length! */
```
# how to use #
```cpp
#include "format.hpp"

void b(std::string fmt) {
    std::cout << fmt;
}

void a(format fmt) { /* format overloading! */
    printf(fmt) /* const char* overloading! */
    b(fmt) /* std::string overloading! */
}

int main() {
    format fmt("Hello %s\n", "World!");
    
    a(fmt);
    
    /*
    Hello World!
    Hello World!
    */
}
```

* not the best one but yeah it works lmao
