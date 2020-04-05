#! /bin/sh
#
# c - Replace the current terminal with a "standard" one
#     in the top-right corner. Typically used first thing
#     after logging in to a Gnome session.
#

self=$(xdotool getactivewindow)  
gnome-terminal -q --geometry=120x100-0+0 --window --tab
while [[ $self = $(xdotool getactivewindow) ]]; do sleep 0.1; done
xdotool windowclose $self >/dev/null 2>&1
