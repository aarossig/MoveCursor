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

    Usage: movecursor x y
    x and y must be integers

## Compiling

Compiling should be as easy as running 'make'. In the event that you are running
a 64-bit operating system and desire a 32-bit binary execute 'make FLAGS=-m32'
and a 32-bit so file will be created.
