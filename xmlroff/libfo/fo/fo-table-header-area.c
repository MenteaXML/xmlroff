/* Fo
 * fo-table-header-area.c: Generate area for 'table-header' formatting object
 *
 * Copyright (C) 2001 Sun Microsystems
 * Copyright (C) 2007-2009 Menteith Consulting Ltd
 *
 * See COPYING for the status of this software.
 */

#include <area/fo-area-table-header.h>
#include <fo-table-header-private.h>

/**
 * fo_table_header_area_new2:
 * @fo:      #FoTableHeader
 * @context: #FoFoAreaNew2Context
 * @error:   #GError
 * 
 * Create a new area for @fo and add it to the parent area.
 *
 * A pointer to the parent area is in @context.
 **/
void
fo_table_header_area_new2 (FoFo                *fo,
			 FoFoAreaNew2Context *context,
			 GError             **error)
{
  FoTableHeader *table_header = (FoTableHeader *) fo;
  FoArea *use_parent_area;
  FoArea *new_area;

  g_return_if_fail (table_header != NULL);
  g_return_if_fail (FO_IS_TABLE_HEADER (table_header));
  g_return_if_fail (context != NULL);
  g_return_if_fail (error == NULL || *error == NULL);

  new_area = fo_area_table_header_new ();
  use_parent_area = context->parent_area;

#if defined(LIBFO_DEBUG) && 0
  g_warning ("*** table-header parent before new area:");
  fo_object_debug_dump (parent_area, 0);
  g_warning ("*** end table-header parent");
#endif

  fo_area_set_generated_by (new_area,
			    fo);
  fo_fo_area_list_append (fo,
			  new_area);
  fo_area_add_child (use_parent_area, new_area);
  new_area = fo_area_size_request (new_area);
  fo_area_area_set_width (new_area, fo_area_get_available_width (new_area));

#if defined(LIBFO_DEBUG) && 0
  g_warning ("*** table-header parent after new area:");
  fo_object_debug_dump (parent_area, 0);
  g_warning ("*** end table-header parent");
#endif

  *(context->new_area) = new_area;
}
