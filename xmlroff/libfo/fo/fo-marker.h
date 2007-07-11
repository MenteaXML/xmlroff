/* Fo
 * fo-marker.h: Marker formatting object
 *
 * Copyright (C) 2001 Sun Microsystems
 * Copyright (C) 2007 Menteith Consulting Ltd
 *
 * See COPYING for the status of this software.
 */

#ifndef __FO_MARKER_H__
#define __FO_MARKER_H__

#include <libfo/fo-utils.h>
#include <libfo/fo-context.h>
#include <libfo/fo/fo-fo.h>

G_BEGIN_DECLS

typedef struct _FoMarker      FoMarker;
typedef struct _FoMarkerClass FoMarkerClass;

#define FO_TYPE_MARKER              (fo_marker_get_type ())
#define FO_MARKER(object)           (G_TYPE_CHECK_INSTANCE_CAST ((object), FO_TYPE_MARKER, FoMarker))
#define FO_MARKER_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), FO_TYPE_MARKER, FoMarkerClass))
#define FO_IS_MARKER(object)        (G_TYPE_CHECK_INSTANCE_TYPE ((object), FO_TYPE_MARKER))
#define FO_IS_MARKER_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), FO_TYPE_MARKER))
#define FO_MARKER_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), FO_TYPE_MARKER, FoMarkerClass))


GType         fo_marker_get_type      (void) G_GNUC_CONST;
FoFo *fo_marker_new (void);

void fo_marker_update_from_context (FoFo *fo,
				   FoContext *context);

G_END_DECLS

#endif /* !__FO_MARKER_H__ */