#include <Primis.hpp>

class Sandbox : public Primis::Application{
    public:
};

Primis::Application* Primis::CreateApplication(){
    return new Sandbox;
};

// int main(){
//     Sandbox* sandbox = new Sandbox;
//     sandbox->Run();
//     delete sandbox;
//     return 0;
// };