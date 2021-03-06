/* Fo
 * fo-property-column-number.h: 'column-number' property
 *
 * Copyright (C) 2001 Sun Microsystems
 * Copyright (C) 2007-2008 Menteith Consulting Ltd
 *
 * See COPYING for the status of this software.
 */

#ifndef __FO_PROPERTY_COLUMN_NUMBER_H__
#define __FO_PROPERTY_COLUMN_NUMBER_H__

#include <libfo/fo-utils.h>
#include <libfo/property/fo-property.h>

G_BEGIN_DECLS

/* column-number */
/* Inherited: FALSE */
/* Shorthand: FALSE */
/* <number> */
/* Initial value: see prose */

#define FO_TYPE_PROPERTY_COLUMN_NUMBER              (fo_property_column_number_get_type ())
#define FO_PROPERTY_COLUMN_NUMBER(object)           (G_TYPE_CHECK_INSTANCE_CAST ((object), FO_TYPE_PROPERTY_COLUMN_NUMBER, FoPropertyColumnNumber))
#define FO_PROPERTY_COLUMN_NUMBER_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), FO_TYPE_PROPERTY_COLUMN_NUMBER, FoPropertyColumnNumberClass))
#define FO_IS_PROPERTY_COLUMN_NUMBER(object)        (G_TYPE_CHECK_INSTANCE_TYPE ((object), FO_TYPE_PROPERTY_COLUMN_NUMBER))
#define FO_IS_PROPERTY_COLUMN_NUMBER_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), FO_TYPE_PROPERTY_COLUMN_NUMBER))
#define FO_PROPERTY_COLUMN_NUMBER_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), FO_TYPE_PROPERTY_COLUMN_NUMBER, FoPropertyColumnNumberClass))


typedef struct _FoPropertyColumnNumber      FoPropertyColumnNumber;
typedef struct _FoPropertyColumnNumberClass FoPropertyColumnNumberClass;

GType        fo_property_column_number_get_type    (void) G_GNUC_CONST;
FoProperty * fo_property_column_number_new         (void);
FoProperty * fo_property_column_number_get_initial (void);

G_END_DECLS

#endif /* !__FO_PROPERTY_COLUMN_NUMBER_H__ */
