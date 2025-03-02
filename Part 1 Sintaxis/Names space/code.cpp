#include <iostream>

namespace first{
    int x = 0;
}
namespace second{
    int x = 1;
}

namespace lol{
    int x = 1000;
}
int main(){

    using namespace first;
    
    std::cout << x;

    return 0;

    //Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //              A namespace allows for identically named entities ( variables)
    //              as long as the namespaces are different.
    //namespace = se utilizan para guardar una misma variable con el mismo nombre pero
                // con un diferente valor, como el scope de javascript. En este creas
                // un namespace, en donde puedes crear una variable con un valor
                // y puedes crear otro namespace con el mismo nombre de la variable pero con
                // otro valor.
                // En realidad se crean diferentes variables con el mismo nombre y puedes utilizar varias variables con el mismo nombre.
}