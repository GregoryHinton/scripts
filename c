#! /bin/sh
#
# c - Replace current terminal with a large on in the top-right corner
#

self=$(xdotool getactivewindow)  
gnome-terminal -q --geometry=120x100-0+0 --window --tab
while [[ $self = $(xdotool getactivewindow) ]]; do sleep 0.1; done
xdotool windowclose $self >/dev/null 2>&1
