
/* 
------------------------------------------------------------
 * data-structures for discrete function rep. in R^d. 
------------------------------------------------------------
 *
 * This program may be freely redistributed under the 
 * condition that the copyright notices (including this 
 * entire header) are not removed, and no compensation 
 * is received through use of the software.  Private, 
 * research, and institutional use is free.  You may 
 * distribute modified versions of this code UNDER THE 
 * CONDITION THAT THIS CODE AND ANY MODIFICATIONS MADE 
 * TO IT IN THE SAME FILE REMAIN UNDER COPYRIGHT OF THE 
 * ORIGINAL AUTHOR, BOTH SOURCE AND OBJECT CODE ARE 
 * MADE FREELY AVAILABLE WITHOUT CHARGE, AND CLEAR 
 * NOTICE IS GIVEN OF THE MODIFICATIONS.  Distribution 
 * of this code as part of a commercial system is 
 * permissible ONLY BY DIRECT ARRANGEMENT WITH THE 
 * AUTHOR.  (If you are not directly supplying this 
 * code to a customer, and you are instead telling them 
 * how they can obtain it for free, then you are not 
 * required to make any arrangement with me.) 
 *
 * Disclaimer:  Neither I nor: Columbia University, The
 * Massachusetts Institute of Technology, The 
 * University of Sydney, nor The National Aeronautics
 * and Space Administration warrant this code in any 
 * way whatsoever.  This code is provided "as-is" to be 
 * used at your own risk.
 *
------------------------------------------------------------
 *
 * Last updated: 18 April, 2019
 *
 * Copyright 2013-2019
 * Darren Engwirda
 * de2363@columbia.edu
 * https://github.com/dengwirda/
 *
------------------------------------------------------------
 */

#   pragma once

#   ifndef __MESHFUNC__
#   define __MESHFUNC__
 
#   include "containers.hpp"
#   include "algorithms.hpp"

#   include "geometry.hpp"

#   include "aabbtree.hpp"
#   include "meshtype.hpp"

#   include "mesh_func/hfun_base_k.hpp"

#   include "mesh_func/hfun_constant_value_k.hpp"

#   include "mesh_func/hfun_mesh_euclidean_2.hpp"
#   include "mesh_func/hfun_mesh_euclidean_3.hpp"

#   include "mesh_func/hfun_mesh_ellipsoid_3.hpp"

#   include "mesh_func/hfun_grid_euclidean_2.hpp"
#   include "mesh_func/hfun_grid_euclidean_3.hpp"

#   include "mesh_func/hfun_grid_ellipsoid_3.hpp"

#   endif//__MESHFUNC__



