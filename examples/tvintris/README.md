# tVintris Demo

This is a VSDL rewrite of the [V "tVintris" demo](https://github.com/nsauzede/vsdl2/tree/master/examples/tvintris).

This game is split into two main files, `game.v` and `player.v`. The Game struct manages the gameloop as well as the players, sound effects, music, etc. The Player struct manages the rendering for an individual player and the controls.

To play:

Rotate: `w` or `up`

Move down: `s`, or `down`

Move left/right: `a`/`d` or `left`/`right`

Pause/Start: `Q` and/or `L`
