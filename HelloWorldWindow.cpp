//
// Created by jpc on 12/5/16.
//

#include "HelloWorldWindow.h"
#include <iostream>

HelloWorldWindow::HelloWorldWindow() : m_button("Hello World"), m_button2("Other") {
    set_default_size(400, 400);
    add(m_hbox);
    m_hbox.show();
    m_hbox.pack_start(m_button);
    m_button.signal_clicked().connect(sigc::bind<Glib::ustring>(sigc::mem_fun(*this, &HelloWorldWindow::on_button_clicked), "button 1"));
    m_button.show();
    m_hbox.pack_start(m_button2);
    m_button2.signal_clicked().connect(sigc::bind<Glib::ustring>(sigc::mem_fun(*this, &HelloWorldWindow::on_button_clicked), "button 2"));
    m_button2.show();
}

HelloWorldWindow::~HelloWorldWindow() {
    std::cout << "Quitting" << std::endl;
}

void HelloWorldWindow::on_button_clicked(Glib::ustring data) {
    std::cout << "Hello World" << " " << data << std::endl;
}
