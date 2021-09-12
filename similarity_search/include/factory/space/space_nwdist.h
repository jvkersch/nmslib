/**
 * Non-metric Space Library
 *
 * Main developers: Bilegsaikhan Naidan, Leonid Boytsov, Yury Malkov, Ben Frederickson, David Novak
 *
 * For the complete list of contributors and further details see:
 * https://github.com/nmslib/nmslib
 *
 * Copyright (c) 2013-2018
 *
 * This code is released under the
 * Apache License Version 2.0 http://www.apache.org/licenses/.
 *
 */
#ifndef FACTORY_SPACE_NW_H
#define FACTORY_SPACE_NW_H

#include <space/space_nw.h>

namespace similarity {

/*
 * Creating functions.
 */

Space<int>* CreateNW(const AnyParams& AllParams) {
  return new SpaceNW();
}

/*
 * End of creating functions.
 */

}

#endif // FACTORY_SPACE_NW_H
