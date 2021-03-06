// util.hxx - general-purpose utility functions.
// Copyright (C) 2002  Curtis L. Olson  - http://www.flightgear.org/~curt
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
// $Id$

#ifndef __UTIL_HXX
#define __UTIL_HXX 1

#include <string>
#include <simgear/misc/sg_path.hxx>

/**
 * Move a value towards a target.
 *
 * This function was originally written by Alex Perry.
 *
 * @param current The current value.
 * @param target The target value.
 * @param timeratio The percentage of smoothing time that has passed 
 *        (elapsed time/smoothing time)
 * @return The new value.
 */
double fgGetLowPass (double current, double target, double timeratio);

/**
 * File access control, used by Nasal and fgcommands.
 * @param path Path to be validated
 * @param write True for write operations and false for read operations.
 * @return The validated path on success or 0 if access denied.
 */
std::string fgValidatePath(const SGPath& path, bool write);
std::string fgValidatePath(const std::string& path, bool write);

/**
 * Set allowed paths for fgValidatePath
 */
void fgInitAllowedPaths();

#endif // __UTIL_HXX
