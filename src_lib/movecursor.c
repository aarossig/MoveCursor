#include <X11/Xlib.h>

void movecursor(int x, int y) {
        Display *myDisplay = XOpenDisplay(NULL); // Pass NULL to open $DISPLAY
        Window myWindow = XRootWindow(myDisplay, 0);

        // Move to the destination window at absolute coordinates.
        XWarpPointer(myDisplay, 0, myWindow, 0, 0, 0, 0, x, y);
        XFlush(myDisplay);
}
