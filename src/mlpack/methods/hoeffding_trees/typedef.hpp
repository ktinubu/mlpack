/**
 * @file typedef.hpp
 * @author Ryan Curtin
 *
 * Useful typedefs.
 *
 * This file is part of mlpack 2.0.0.
 *
 * mlpack is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option) any
 * later version.
 *
 * mlpack is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details (LICENSE.txt).
 *
 * You should have received a copy of the GNU General Public License along with
 * mlpack.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __MLPACK_METHODS_HOEFFDING_TREES_TYPEDEF_HPP
#define __MLPACK_METHODS_HOEFFDING_TREES_TYPEDEF_HPP

#include "streaming_decision_tree.hpp"
#include "hoeffding_tree.hpp"

namespace mlpack {
namespace tree {

typedef StreamingDecisionTree<HoeffdingTree<>> HoeffdingTreeType;

} // namespace tree
} // namespace mlpack

#endif