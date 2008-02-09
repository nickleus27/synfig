/* === S Y N F I G ========================================================= */
/*!	\file renderer_ducks.h
**	\brief Template Header
**
**	$Id$
**
**	\legal
**	Copyright (c) 2002-2005 Robert B. Quattlebaum Jr., Adrian Bentley
**	Copyright (c) 2007 Chris Moore
**
**	This package is free software; you can redistribute it and/or
**	modify it under the terms of the GNU General Public License as
**	published by the Free Software Foundation; either version 2 of
**	the License, or (at your option) any later version.
**
**	This package is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
**	General Public License for more details.
**	\endlegal
*/
/* ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_RENDERER_DUCKS_H
#define __SYNFIG_RENDERER_DUCKS_H

/* === H E A D E R S ======================================================= */

#include "workarearenderer.h"
#include <vector>

/* === M A C R O S ========================================================= */

#define DUCK_COLOR_NOT_EDITABLE	Gdk::Color("#cfcfcf")

#define DUCK_COLOR_ANGLE		Gdk::Color("#0000ff")
#define DUCK_COLOR_RADIUS		Gdk::Color("#00ffff")
#define DUCK_COLOR_TANGENT_1	Gdk::Color("#ffff00")
#define DUCK_COLOR_TANGENT_2	Gdk::Color("#ff0000")
#define DUCK_COLOR_VERTEX		Gdk::Color("#ff7f00")
#define DUCK_COLOR_WIDTH		Gdk::Color("#ff00ff")

#define DUCK_COLOR_OTHER		Gdk::Color("#00ff00")

#define DUCK_COLOR_OUTLINE		Gdk::Color("#000000") // the outline around each duck

#define DUCK_COLOR_BEZIER_1		Gdk::Color("#000000") // the 2 colors used to draw bezier curves
#define DUCK_COLOR_BEZIER_2		Gdk::Color("#afafaf")

#define DUCK_COLOR_BOX_1		Gdk::Color("#ffffff") // the 2 colors used to draw boxes
#define DUCK_COLOR_BOX_2		Gdk::Color("#000000")

#define DUCK_COLOR_SELECTED		Gdk::Color("#ff0000") // the color of the box drawn when a valuenode is selected

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace studio {

class Renderer_Ducks : public studio::WorkAreaRenderer
{

public:
	~Renderer_Ducks();

	void render_vfunc(const Glib::RefPtr<Gdk::Drawable>& drawable,const Gdk::Rectangle& expose_area	);

protected:
//	bool get_enabled_vfunc()const;
};

}; // END of namespace studio

/* === E N D =============================================================== */

#endif
