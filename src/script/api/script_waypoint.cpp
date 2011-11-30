/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file script_waypoint.cpp Implementation of ScriptWaypoint. */

#include "../../stdafx.h"
#include "script_waypoint.hpp"
#include "script_rail.hpp"
#include "script_marine.hpp"
#include "../../company_func.h"
#include "../../waypoint_base.h"

/* static */ bool ScriptWaypoint::IsValidWaypoint(StationID waypoint_id)
{
	const Waypoint *wp = ::Waypoint::GetIfValid(waypoint_id);
	return wp != NULL && (wp->owner == _current_company || wp->owner == OWNER_NONE);
}

/* static */ StationID ScriptWaypoint::GetWaypointID(TileIndex tile)
{
	if (!ScriptRail::IsRailWaypointTile(tile) && !ScriptMarine::IsBuoyTile(tile)) return STATION_INVALID;

	return ::GetStationIndex(tile);
}

/* static */ bool ScriptWaypoint::HasWaypointType(StationID waypoint_id, WaypointType waypoint_type)
{
	if (!IsValidWaypoint(waypoint_id)) return false;
	if (!HasExactlyOneBit(waypoint_type)) return false;

	return (::Waypoint::Get(waypoint_id)->facilities & waypoint_type) != 0;
}