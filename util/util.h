#include <X11/X.h>
#include <X11/Xlib.h>

Display* dpy();
extern const Window g_root;

//listens on substructure and notify 
int listenWindowEvents(Window w);