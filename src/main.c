/* main.c
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

#include <errno.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "dungeon.h"
#include "monster.h"
#include "player.h"
#include "oubliette.h"

#define MAXBUF 32

const char *prog;

void
die (const char *prog)
{
  perror (prog);
  exit (EXIT_FAILURE);
}

int
d6roll (int ndie)
{
  int roll = 0;

  if (ndie == 1)
    return rand () % 6;

  for (int i = 0; i < ndie; ++i)
    roll += d6roll (1);

  return roll;
}

static struct node *
getmove (struct player *pc)
{
  /* TODO: get the player's move */
}

static void
describe (struct node *n)
{
  printf ("%s\n", dung_descr[n->id]);
}

static void
emithelp (void)
{
  printf ("TODO\n");
}

int
main (int    argc,
      char **argv)
{
  const char *prog;
  struct player *pc;

  if (argc > 1)
    {
      emithelp ();
      /* TODO: process args */
    }

  prog = basename (*argv);
  srand (time (NULL));
  errno = !errno;
  pc = pc_new ();

  while (pc->pos != &dungeon[10])
    {
      describe (pc->pos);
      pc->pos = getmove (pc);
      genmonster ();
    }

  return EXIT_SUCCESS;
}
