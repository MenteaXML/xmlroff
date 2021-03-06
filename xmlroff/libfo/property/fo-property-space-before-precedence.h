/* Fo
 * fo-property-space-before-precedence.h: 'space-before-precedence' property
 *
 * Copyright (C) 2001 Sun Microsystems
 * Copyright (C) 2007-2008 Menteith Consulting Ltd
 *
 * See COPYING for the status of this software.
 */

#ifndef __FO_PROPERTY_SPACE_BEFORE_PRECEDENCE_H__
#define __FO_PROPERTY_SPACE_BEFORE_PRECEDENCE_H__

#include <libfo/fo-utils.h>
#include <libfo/property/fo-property.h>

G_BEGIN_DECLS

/* space-before-precedence */
/* Inherited: FALSE */
/* Shorthand: FALSE */
/* <space> | inherit */
/* Initial value: space.minimum=0pt, .optimum=0pt, .maximum=0pt, .conditionality=discard, .precedence=0 */

#define FO_TYPE_PROPERTY_SPACE_BEFORE_PRECEDENCE              (fo_property_space_before_precedence_get_type ())
#define FO_PROPERTY_SPACE_BEFORE_PRECEDENCE(object)           (G_TYPE_CHECK_INSTANCE_CAST ((object), FO_TYPE_PROPERTY_SPACE_BEFORE_PRECEDENCE, FoPropertySpaceBeforePrecedence))
#define FO_PROPERTY_SPACE_BEFORE_PRECEDENCE_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), FO_TYPE_PROPERTY_SPACE_BEFORE_PRECEDENCE, FoPropertySpaceBeforePrecedenceClass))
#define FO_IS_PROPERTY_SPACE_BEFORE_PRECEDENCE(object)        (G_TYPE_CHECK_INSTANCE_TYPE ((object), FO_TYPE_PROPERTY_SPACE_BEFORE_PRECEDENCE))
#define FO_IS_PROPERTY_SPACE_BEFORE_PRECEDENCE_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), FO_TYPE_PROPERTY_SPACE_BEFORE_PRECEDENCE))
#define FO_PROPERTY_SPACE_BEFORE_PRECEDENCE_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), FO_TYPE_PROPERTY_SPACE_BEFORE_PRECEDENCE, FoPropertySpaceBeforePrecedenceClass))


typedef struct _FoPropertySpaceBeforePrecedence      FoPropertySpaceBeforePrecedence;
typedef struct _FoPropertySpaceBeforePrecedenceClass FoPropertySpaceBeforePrecedenceClass;

GType       fo_property_space_before_precedence_get_type    (void) G_GNUC_CONST;
FoProperty* fo_property_space_before_precedence_new         (void);
FoProperty* fo_property_space_before_precedence_get_initial (void);

G_END_DECLS

#endif /* !__FO_PROPERTY_SPACE_BEFORE_PRECEDENCE_H__ */
