/* Fo
 * fo-table-row-private.h: Structures private to 'table-row' formatting object
 *
 * Copyright (C) 2001-2006 Sun Microsystems
 * Copyright (C) 2007-2009 Menteith Consulting Ltd
 *
 * See COPYING for the status of this software.
 */

#ifndef __FO_TABLE_ROW_PRIVATE_H__
#define __FO_TABLE_ROW_PRIVATE_H__

#include "fo/fo-marker-parent-private.h"
#include "fo/fo-table-row.h"

G_BEGIN_DECLS

struct _FoTableRow
{
  FoMarkerParent parent_instance;

  FoProperty *background_color;
  FoProperty *background_image;
  FoProperty *block_progression_dimension;
  FoProperty *border_after_color;
  FoProperty *border_after_precedence;
  FoProperty *border_after_style;
  FoProperty *border_after_width;
  FoProperty *border_before_color;
  FoProperty *border_before_precedence;
  FoProperty *border_before_style;
  FoProperty *border_before_width;
  FoProperty *border_bottom_color;
  FoProperty *border_bottom_style;
  FoProperty *border_bottom_width;
  FoProperty *border_end_color;
  FoProperty *border_end_precedence;
  FoProperty *border_end_style;
  FoProperty *border_end_width;
  FoProperty *border_left_color;
  FoProperty *border_left_style;
  FoProperty *border_left_width;
  FoProperty *border_right_color;
  FoProperty *border_right_style;
  FoProperty *border_right_width;
  FoProperty *border_start_color;
  FoProperty *border_start_precedence;
  FoProperty *border_start_style;
  FoProperty *border_start_width;
  FoProperty *border_top_color;
  FoProperty *border_top_style;
  FoProperty *border_top_width;
  FoProperty *break_after;
  FoProperty *break_before;
  FoProperty *height;
  FoProperty *id;
  FoProperty *keep_together;
  FoProperty *keep_together_within_column;
  FoProperty *keep_together_within_line;
  FoProperty *keep_together_within_page;
  FoProperty *keep_with_next;
  FoProperty *keep_with_next_within_column;
  FoProperty *keep_with_next_within_line;
  FoProperty *keep_with_next_within_page;
  FoProperty *keep_with_previous;
  FoProperty *keep_with_previous_within_column;
  FoProperty *keep_with_previous_within_line;
  FoProperty *keep_with_previous_within_page;
  FoProperty *padding_after;
  FoProperty *padding_before;
  FoProperty *padding_bottom;
  FoProperty *padding_end;
  FoProperty *padding_left;
  FoProperty *padding_right;
  FoProperty *padding_start;
  FoProperty *padding_top;
  FoProperty *role;
  FoProperty *source_document;
};

struct _FoTableRowClass
{
  FoMarkerParentClass parent_class;
};

G_END_DECLS

#endif /* !__FO_TABLE_ROW_PRIVATE_H__ */
