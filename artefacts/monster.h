/* monster.h
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

struct monster
{
  char *type;
  char *descr;
  int   hp;
  int   str;
};

struct monster monsters[] =
{
  {"Husk", "You see a corspe samble towards you. It seems that the skin of its face was been pulled back like a hoidie. It seems to be made of 10% maggots.", 8, 2},
  {"Zombie Nutria", "A far larger than normal corpse of a rat appears runs towards you. It flesh is green and rotten to the core.", 11, 1},
  {"Hell Hound",  "A bight oragne flame runs towards you.When it get close to you it you tell it some srout of flaming k - 9", 10, 4},
  {"Gorgon", "A queit 'hisssss' is heard in fornt of you. Appearing from all most nowhere a femine, humoind sanke creature with dark green scales croving its body. It reminds you of Medusa", 14, 3};
  {"Owlbear" "You hear 'hoot hoot' in behind you. You look behind only to see the head of an owl but it seems to be foalting. The", 16, 3}
  {"Ogre","While walking you see a large obese green person? No, it a monster with large sharp primal teeth.", 21, 4}
  {"Wraith", "What seems to be foalting humanoid that seems to be draped in black cloth appoach you with meridous inent.", 1, 12}
  {"Golem", "You see a stoney humoind slowy appoach you.It eyes glow grow red and peice your soul.", 34, 2}
};
