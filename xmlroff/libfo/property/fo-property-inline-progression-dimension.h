/* Fo
 * fo-property-inline-progression-dimension.h: 'inline-progression-dimension' property
 *
 * Copyright (C) 2001 Sun Microsystems
 * Copyright (C) 2007-2008 Menteith Consulting Ltd
 *
 * See COPYING for the status of this software.
 */

#ifndef __FO_PROPERTY_INLINE_PROGRESSION_DIMENSION_H__
#define __FO_PROPERTY_INLINE_PROGRESSION_DIMENSION_H__

#include <libfo/fo-utils.h>
#include <libfo/property/fo-property.h>

G_BEGIN_DECLS

/* inline-progression-dimension */
/* Inherited: FALSE */
/* Shorthand: FALSE */
/* auto | <length> | <percentage> | <length-range> | inherit */
/* Initial value: auto */

#define FO_TYPE_PROPERTY_INLINE_PROGRESSION_DIMENSION              (fo_property_inline_progression_dimension_get_type ())
#define FO_PROPERTY_INLINE_PROGRESSION_DIMENSION(object)           (G_TYPE_CHECK_INSTANCE_CAST ((object), FO_TYPE_PROPERTY_INLINE_PROGRESSION_DIMENSION, FoPropertyInlineProgressionDimension))
#define FO_PROPERTY_INLINE_PROGRESSION_DIMENSION_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), FO_TYPE_PROPERTY_INLINE_PROGRESSION_DIMENSION, FoPropertyInlineProgressionDimensionClass))
#define FO_IS_PROPERTY_INLINE_PROGRESSION_DIMENSION(object)        (G_TYPE_CHECK_INSTANCE_TYPE ((object), FO_TYPE_PROPERTY_INLINE_PROGRESSION_DIMENSION))
#define FO_IS_PROPERTY_INLINE_PROGRESSION_DIMENSION_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), FO_TYPE_PROPERTY_INLINE_PROGRESSION_DIMENSION))
#define FO_PROPERTY_INLINE_PROGRESSION_DIMENSION_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), FO_TYPE_PROPERTY_INLINE_PROGRESSION_DIMENSION, FoPropertyInlineProgressionDimensionClass))


typedef struct _FoPropertyInlineProgressionDimension      FoPropertyInlineProgressionDimension;
typedef struct _FoPropertyInlineProgressionDimensionClass FoPropertyInlineProgressionDimensionClass;

GType        fo_property_inline_progression_dimension_get_type    (void) G_GNUC_CONST;
FoProperty * fo_property_inline_progression_dimension_new         (void);
FoProperty * fo_property_inline_progression_dimension_get_initial (void);

G_END_DECLS

#endif /* !__FO_PROPERTY_INLINE_PROGRESSION_DIMENSION_H__ */
