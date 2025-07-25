#include "../include/Store.h"
#include "../include/dotenv.h"

#include <iostream>

using std::cout;

int main()
{
    load_env();
    Store store;
    store.run();
    return 0;
}
