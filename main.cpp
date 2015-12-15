#include <iostream>
#include <zmq.hpp>
#include "connection_panel_ui.h"

using namespace std;

int main() {
    connection_panel_ui conpan;
    conpan.show();
    return Fl::run();
}