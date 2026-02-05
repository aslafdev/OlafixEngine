
#include <Olafix.h>



class Sandbox: public ox::Application {
public :
    Sandbox() = default;
    ~Sandbox() = default;


};


ox::Application* ox::CreateApplication() {
    return new Sandbox();
}





