//
// Created by jpc on 12/20/16.
//

#include "SwitchWindow.h"
#include <iostream>

SwitchWindow::SwitchWindow() {
    set_title("Switch");
    m_switch.set_state(FALSE);
    m_switch.signal_state_set().connect(sigc::mem_fun(*this, &SwitchWindow::switched), false);
    m_grid.attach(m_switch, 0, 0, 1, 1);
    add(m_grid);
}

bool SwitchWindow::switched(bool active) {
    if (active){
        std::cout << "on";
    } else {
        std::cout << "off";
    }
    std::cout << std::endl;
    return false;
}
