//
// Created by jpc on 12/20/16.
//

#ifndef HELLO_SWITCHWINDOW_H
#define HELLO_SWITCHWINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/grid.h>
#include <gtkmm/switch.h>

class SwitchWindow: public Gtk::Window {
private:
    Gtk::Grid m_grid;
    Gtk::Switch m_switch;
public:
    SwitchWindow();
    bool switched(bool active);
};


#endif //HELLO_SWITCHWINDOW_H
