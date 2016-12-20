//
// Created by jpc on 12/5/16.
//

#ifndef HELLO_HELLOWORLD_H
#define HELLO_HELLOWORLD_H

#include <gtkmm/window.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/button.h>

class HelloWorldWindow : public Gtk::Window {
public:
    HelloWorldWindow();

    virtual ~HelloWorldWindow();

protected:
    void on_button_clicked(Glib::ustring);

private:
    Gtk::HBox m_hbox;
    Gtk::Button m_button, m_button2;

};


#endif //HELLO_HELLOWORLD_H
