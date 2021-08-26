
Debian
====================
This directory contains files used to package t_notesd/t_notes-qt
for Debian-based Linux systems. If you compile t_notesd/t_notes-qt yourself, there are some useful files here.

## t_notes: URI support ##


t_notes-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install t_notes-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your t_notes-qt binary to `/usr/bin`
and the `../../share/pixmaps/t_notes128.png` to `/usr/share/pixmaps`

t_notes-qt.protocol (KDE)

