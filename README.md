This is a simple Arduino-based piano made using 4 push buttons and a passive buzzer.

This code basically makes Arduino act like a tiny piano.
I’ve connected four buttons, and each one is linked to a specific note; C, D, E, and F. When I press a button, the Arduino sends out a sound signal to the buzzer at the right frequency for that note.

The code keeps looping. It constantly checks if any button pressed or not. If yes, it plays the sound; if not, it stays silent.
