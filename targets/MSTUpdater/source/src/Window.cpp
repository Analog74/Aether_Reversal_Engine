#include <ni/controller_editor/Window.hpp>
namespace NI::UIA::COCOA {

void Window::canBecomeKeyWindow(objc_object*, objc_selector*) {
return 1;
}

void Window::canBecomeMainWindow(objc_object*, objc_selector*) {
return 1;
}
}
