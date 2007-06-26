/* GNOME Automation Library
 * Copyright (C) 2006 The GNOME Foundation
 *
 * Authors:
 *	 Rodrigo Moya (rodrigo@gnome-db.org)
 *
 * This Library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This Library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this Library; see the file COPYING.LIB.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __ATOMATO_H__
#define __ATOMATO_H__

#include <glib-object.h>

G_BEGIN_DECLS

typedef struct {
	char *name;
	char *direction;
	char *type;
} AtomatoActionArgument;

typedef enum {
	ATOMATO_METHOD_UNKNOWN = -1,
	ATOMATO_METHOD_DBUS,
	ATOMATO_METHOD_SHELL
} AtomatoMethod;

typedef struct {
	char *section;
	char *name;
	AtomatoMethod method;
	GList *args;
} AtomatoAction;

GSList *atomato_list_methods (void);
GSList *atomato_list_actions (void);

G_END_DECLS

#endif
