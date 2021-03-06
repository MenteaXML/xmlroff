/* Fo
 * fo-property-font-family.h: 'font-family' property
 *
 * Copyright (C) 2001 Sun Microsystems
 * Copyright (C) 2007-2008 Menteith Consulting Ltd
 *
 * See COPYING for the status of this software.
 */

#ifndef __FO_PROPERTY_FONT_FAMILY_H__
#define __FO_PROPERTY_FONT_FAMILY_H__

#include <libfo/fo-utils.h>
#include <libfo/property/fo-property.h>

G_BEGIN_DECLS

/* font-family */
/* Inherited: TRUE */
/* Shorthand: FALSE */
/* [[ <family-name> | <generic-family> ],]* [<family-name> | <generic-family>] | inherit */
/* Initial value: depends on user agent */

#define FO_TYPE_PROPERTY_FONT_FAMILY              (fo_property_font_family_get_type ())
#define FO_PROPERTY_FONT_FAMILY(object)           (G_TYPE_CHECK_INSTANCE_CAST ((object), FO_TYPE_PROPERTY_FONT_FAMILY, FoPropertyFontFamily))
#define FO_PROPERTY_FONT_FAMILY_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), FO_TYPE_PROPERTY_FONT_FAMILY, FoPropertyFontFamilyClass))
#define FO_IS_PROPERTY_FONT_FAMILY(object)        (G_TYPE_CHECK_INSTANCE_TYPE ((object), FO_TYPE_PROPERTY_FONT_FAMILY))
#define FO_IS_PROPERTY_FONT_FAMILY_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), FO_TYPE_PROPERTY_FONT_FAMILY))
#define FO_PROPERTY_FONT_FAMILY_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), FO_TYPE_PROPERTY_FONT_FAMILY, FoPropertyFontFamilyClass))


typedef struct _FoPropertyFontFamily      FoPropertyFontFamily;
typedef struct _FoPropertyFontFamilyClass FoPropertyFontFamilyClass;

GType        fo_property_font_family_get_type    (void) G_GNUC_CONST;
FoProperty * fo_property_font_family_new         (void);
FoProperty * fo_property_font_family_get_initial (void);

G_END_DECLS

#endif /* !__FO_PROPERTY_FONT_FAMILY_H__ */
