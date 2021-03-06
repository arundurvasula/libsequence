/*

Copyright (C) 2003-2009 Kevin Thornton, krthornt[]@[]uci.edu

Remove the brackets to email me.

This file is part of libsequence.

libsequence is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

libsequence is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
long with libsequence.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef __POLY_TABLE_MANIP_H__
#define __POLY_TABLE_MANIP_H__

/*! \file PolyTableManip.hpp
  @brief Declaration of Sequence::rotatePolyTable
*/
#include <Sequence/typedefs.hpp>

namespace Sequence
{
  class PolyTable;

  polySiteVector rotatePolyTable(const Sequence::PolyTable *data);
}
#endif
