/* $Id: script_industrytypelist.hpp 23614 2011-12-19 20:57:23Z truebrain $ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file script_industrytypelist.hpp List all available industry types. */

#ifndef SCRIPT_INDUSTRYTYPELIST_HPP
#define SCRIPT_INDUSTRYTYPELIST_HPP

#include "script_industrytype.hpp"

/**
 * Creates a list of valid industry types.
 * @api ai game
 * @ingroup ScriptList
 */
class ScriptIndustryTypeList : public ScriptList {
public:
	ScriptIndustryTypeList();
};


#endif /* SCRIPT_INDUSTRYTYPELIST_HPP */
