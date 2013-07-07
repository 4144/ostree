/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2013 Colin Walters <walters@verbum.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the licence or (at
 * your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __OT_PRUNE_H__
#define __OT_PRUNE_H__

#include "ostree.h"

G_BEGIN_DECLS

typedef enum {
  OSTREE_PRUNE_FLAGS_NONE,
  OSTREE_PRUNE_FLAGS_NO_PRUNE,
  OSTREE_PRUNE_FLAGS_REFS_ONLY
} OstreePruneFlags;

gboolean ostree_prune (OstreeRepo        *repo,
                       OstreePruneFlags   flags,
                       gint               depth,
                       gint              *out_objects_total,
                       gint              *out_objects_pruned,
                       guint64           *out_pruned_object_size_total,
                       GCancellable      *cancellable,
                       GError           **error);

G_END_DECLS

#endif /* __OT_PRUNE_H__ */