/* player.c
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
#include <string.h> /* TODO: remove me */

#include "dungeon.h"
#include "player.h"
#include "oubliette.h"

#define HP_DIE  3
#define STR_DIE 2

const char *prog;

struct player *
pc_new (void)
{
  struct player *pc;

  pc = malloc (sizeof (struct player));

  if (pc == NULL)
    die (prog);

  strcpy (pc->name, "TEMPMAN");
  pc->hp = d6roll (HP_DIE);
  pc->str = d6roll (STR_DIE);
  pc->pos = &dungeon[0];

  return pc;
}
