#pragma once




extern ox::Application* ox::CreateApplication();

int main() {
    auto app  = ox::CreateApplication();
    app->run();
    return 0;
}





