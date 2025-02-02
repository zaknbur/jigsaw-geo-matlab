
    /*
    --------------------------------------------------------
     * ITER-MESH-EUCLIDEAN-3: mesh obj. for ITER-MESH-3.
    --------------------------------------------------------
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
    --------------------------------------------------------
     *
     * Last updated: 09 April, 2019
     *
     * Copyright 2013-2019
     * Darren Engwirda
     * de2363@columbia.edu
     * https://github.com/dengwirda/
     *
    --------------------------------------------------------
     */

#   pragma once

#   ifndef __ITER_MESH_EUCLIDEAN_3__
#   define __ITER_MESH_EUCLIDEAN_3__

    namespace mesh {

template <
    typename R ,
    typename I
             >
    class iter_mesh_euclidean_3d
    {
    public  :
    
    /*-------------------- euclidean mesh for ITER-MESH-3 */
    
    typedef R                       real_type ;
    typedef I                       iptr_type ;
    
    typedef mesh::tria_complex_edge_2 <
            iptr_type >             edge_base ;
                
    typedef mesh::tria_complex_tria_3 <
            iptr_type >             face_base ;
            
    typedef mesh::tria_complex_tria_4 <
            iptr_type >             tria_base ;
    
    typedef mesh::tria_complex_node_4 <
            iptr_type , 
            real_type >             node_base ;
    
    class node_type : public node_base
        {
    /*------------------------- node type for ITER-MESH-3 */
        public  :
        
        iptr_type                     _hidx ;
        iptr_type                     _itag ;
        
        char_type                     _fdim ;
        char_type                     _feat ;
       
        public  :
        
        __inline_call iptr_type      & hidx (
            )
        {   return  this->_hidx ;
        }
        __inline_call iptr_type const& hidx (
            ) const
        {   return  this->_hidx ;
        }
        __inline_call iptr_type      & itag (
            )
        {   return  this->_itag ;
        }
        __inline_call iptr_type const& itag (
            ) const
        {   return  this->_itag ;
        }
        __inline_call char_type      & fdim (
            )
        {   return  this->_fdim ;
        }   
        __inline_call char_type const& fdim (
            ) const
        {   return  this->_fdim ;
        }
        __inline_call char_type      & feat (
            )
        {   return  this->_feat ;
        }   
        __inline_call char_type const& feat (
            ) const
        {   return  this->_feat ;
        }
        } ;
        
    class edge_type : public edge_base
        {
    /*------------------------- edge type for ITER-MESH-2 */
        public  :
        
        iptr_type                     _itag ;
        
        public  :
        
        __inline_call iptr_type      & itag (
            )
        {   return  this->_itag ;
        }
        __inline_call iptr_type const& itag (
            ) const
        {   return  this->_itag ;
        }
        } ;
    
    class face_type : public face_base
        {
    /*------------------------- face type for ITER-MESH-2 */
        public  :
        
        iptr_type                     _itag ;
        
        public  :
        
        __inline_call iptr_type      & itag (
            )
        {   return  this->_itag ;
        }
        __inline_call iptr_type const& itag (
            ) const
        {   return  this->_itag ;
        }
        } ;
        
    class tria_type : public tria_base
        {
    /*------------------------- tria type for ITER-MESH-2 */
        public  :
        
        iptr_type                     _itag ;
        
        public  :
        
        __inline_call iptr_type      & itag (
            )
        {   return  this->_itag ;
        }
        __inline_call iptr_type const& itag (
            ) const
        {   return  this->_itag ;
        }
        } ;
    
    typedef mesh::tria_complex_3 <
            node_type ,
            edge_type ,
            face_type ,
            tria_type            >  mesh_type ;
            
    public  :
    
    mesh_type                         _mesh ;
    
    } ;
    
    
    }
    
#   endif   //__ITER_MESH_EUCLIDEAN_3__



