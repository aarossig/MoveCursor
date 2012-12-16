# Move Cursor

## Overview

This program moves the X11 cursor to absolute coordinates on the display defined
in $DISPLAY.

This is implemented as a shared object so that it can be accessed from LabVIEW
(or other high level languages) which allow calls to native code. This avoids the high level language from having to manually open the display, window and work
with complex datatypes.

## Test Program

A simple program movecursor has been created to test this shared object from the
command line.

Usage: movecursor
x and y must be integers
