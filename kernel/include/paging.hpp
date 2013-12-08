//=======================================================================
// Copyright Baptiste Wicht 2013.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================

#ifndef PAGING_H
#define PAGING_H

#include "types.hpp"

namespace paging {

const int PAGE_SIZE = 4096;

void* physical_address(void* virt);
bool page_present(void* virt);
bool page_free_or_set(void* virt, void* physical);
bool identity_map(void* virt);
bool identity_map(void* virt, size_t pages);

} //end of namespace paging

#endif
