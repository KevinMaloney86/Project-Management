/* dungeon.h
 *
 * Copyright 2020 The Oubliette authors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <stdio.h>

#define MAXPATHS           4

struct node
{
  int          id;
  struct node *paths[MAXPATHS];
};

struct node dungeon[] =
{
	{0, {&dungeon[0], &dungeon[1], NULL, NULL, NULL}, 0},
	{1, {&dungeon[1], &dungeon[8], &dungeon[2], NULL, NULL}, 0},
	{2, {&dungeon[2], NULL, &dungeon[3], NULL, &dungeon[1]}, 0},
	{3, {&dungeon[3], &dungeon[9], NULL, NULL, &dungeon[2]}, 0},
	{4, {&dungeon[4], &dungeon[14], NULL, NULL,  &dungeon[3]}, 0},
	{5, {&dungeon[5], NULL, NULL, NULL, NULL}, -1},
	{6, {&dungeon[6], &dungeon[10], &dungeon[7], NULL, NULL}, 0},
	{7, {&dungeon[7], NULL, &dungeon[8], &dungeon[5], &dungeon[6]}, 0},
	{8, {&dungeon[8], &dungeon[11], NULL, &dungeon[1], &dungeon[7]}, 0},
	{9, {&dungeon[9], &dungeon[13], NULL, &dungeon[3], NULL}, 0},
	{10, {&dungeon[10], NULL, &dungeon[11], &dungeon[10], NULL}, 0},
	{11, {&dungeon[11], NULL, &dungeon[12], &dungeon[8], NULL}, 0},
	{12, {&dungeon[12], &dungeon[16], NULL, NULL, &dungeon[11]}, 0},
	{13, {&dungeon[13], &dungeon[17], &dungeon[14], &dungeon[9], NULL}, 0},
	{14, {&dungeon[14], NULL, NULL, &dungeon[14], &dungeon[9]}, 0},
	{15, {&dungeon[15], NULL, NULL, NULL, NULL}, -1},
	{16, {&dungeon[16], NULL, &dungeon[18], &dungeon[12], &dungeon[15]}, 0},
	{17, {&dungeon[17], &dungeon[18], NULL, &dungeon[13], NULL}, 0},
	{18, {&dungeon[18], &dungeon[20], &dungeon[19], &dungeon[17], &dungeon[16]}, 0},
	{19, {&dungeon[19], NULL, NULL, NULL, NULL}, 1},
	{20, {&dungeon[20], NULL, NULL, NULL, NULL}, -1}
};

const char *descr[] =
{
  0"You awaken in a dark dusty decrepid room. As you look around this ancient looking room you notice a corridor to the north and a pile of rubble behind you.",
  1"As you enter you can tell from the state of the run down concerate room that no one has entered here for a long time. you notice a crumbled down door to the west, but lucky for you the doors to the north and south are open",
  2"You see distoured paintings on the stone walls. You feel like the people in the paintings are watching you, two of the paintings seem bar up the doors to the north and south, the only path that remains forward is to the east.",
  3"When you open the door you see white mist leaking from the cracked cobble sealing, to the south is a caved in door and to the east you can see somekind of mist shapped door far to high of the ground for you to reach, the only way to go forward from here now is north.",
  4"As you pull the granite door open you are meet with a sea of thick fog, you stumble around for awhile before you can see an area where the mist is even thicker and are reminded of the mist door from before, the only way to continue is to lower yourself through the mist door to the south.",
  5"You enter the room for it to seal behind you. Deadly poisionuos gas fills the room causing you to sufficate and slowy die from the poision",
  6"When you enter the room there are a lot of cracks beneath your feet, the cracked floor to the south and west seem to lead to nowhere, but you can carefully step over the cracks and make your way to the north",
  7"You walk into the room only to see that there is a huge amout of dead crickets and pillbugs croving the entier room, to the north the amount of cricket and pillbug bodies is so large it bl",
  8"When you enter the destroyed marble room, it has a table that had spilt in almost prefectly in half and a few rotten chairs around it.",
  9"When you enter the destroyed marble room, it has a table that had spilt in almost prefectly in half and a few rotten chairs around it.",
  10"As you enter the room, you realise there is a small echo.",
  11"As you enter you it seems to less lite then the rest of the rooms(, you also see a steep upwards ramp to the left).",
  12"When you walk into the room you smell a horribly smell that seems to cover the entier basalt room. ",
  13"When you enter the room it feels damp and musky. It almost impossible to see in.",
  14"You walk into the room only to see a large pool of mucky water in the center.",
  15"You enter the room and hear a click. The floor beneath you colapsed, as you fall you get impailed by spikes. ",
  16"You walk(fall) in to a small, putrid room, you realise the floor is made of cropses.",
  17"While you enter the room, you feel a chilling air crawl down your back",
  18"As you enter you realised this marble room is in near prefect condtion. It is somehow well lit.",
  19"You push the door open and see a beatiful crown made out of gold, filled with rare gems. As you take the crown the wall seems to open revealing the wall behind.",
  20"You push open the door only to meet a wave of emerald acid. You try to esacpe but it melts you to fast causing you to disovled."
};
