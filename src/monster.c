/* monster.c
 *
 * Copyright 2020 Starship Troopers
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

#include <stdlib.h>

#include "monster.h"
#include "oubliette.h"

#define NO_ENC_CHANCE 0.40f

struct monster monsters[] =
{
  {"Bat", 4, 2, "A large, vicious bat."},
  {"Goblin", 8, 3, "A warty green creature."},
  {"Skeleton", 12, 4, "A spooky scary skeleton"}
};

struct monster *
genmonster (void)
{
  size_t x;

  x = rand () % LEN (monsters) + (LEN (monsters) * NO_ENC_CHANCE);

  if (x > LEN (monsters))
    return NULL;

  return &monsters[x];
}
