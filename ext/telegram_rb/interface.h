/*
    This file is part of telegram-client.

    Telegram-client is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    Telegram-client is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this telegram-client.  If not, see <http://www.gnu.org/licenses/>.

    Copyright Vitaly Valtman 2013
*/
#ifndef __INTERFACE_H__
#define __INTERFACE_H__
#include "structures.h"

char *get_default_prompt (void);
char *complete_none (const char *text, int state);
char **complete_text (char *text, int start, int end);
void interpreter (char *line);

void rprintf (const char *format, ...) __attribute__ ((format (printf, 1, 2)));
void logprintf (const char *format, ...) __attribute__ ((format (printf, 1, 2)));
void hexdump (int *in_ptr, int *in_end);

struct message;
union peer;
void print_message (struct message *M);
void print_chat_name (peer_id_t id, union peer *C);
void print_user_name (peer_id_t id, union peer *U);
void print_encr_chat_name_full (peer_id_t id, peer_t *C);
void print_encr_chat_name (peer_id_t id, peer_t *C);
//void print_media (struct message_media *M);
void print_date_full (long t);
void print_date (long t);

void play_sound (void);
void set_interface_callbacks (void);
#endif
