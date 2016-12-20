#include <iostream>
#include <gtkmm/application.h>
#include "HelloWorldWindow.h"
#include "SwitchWindow.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.hello");
    SwitchWindow mainWindow;
    mainWindow.set_position(Gtk::WindowPosition::WIN_POS_CENTER);
    mainWindow.show_all();
    return app->run(mainWindow);
}