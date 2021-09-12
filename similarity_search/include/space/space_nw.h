#ifndef _SPACE_NW_H_
#define _SPACE_NW_H_

#include <string>

#include "distcomp.h"
#include "space/space_string.h"

#define SPACE_NW "nw"

namespace similarity
{

class SpaceNW : public StringSpace<int> {
 public:
  explicit SpaceNW() {}
  virtual ~SpaceNW() {}
  virtual std::string StrDesc() const { return "Needleman-Wunsch distance"; }
 protected:
  virtual int HiddenDistance(const Object* obj1, const Object* obj2) const {
    CHECK(obj1->datalength() > 0);
    CHECK(obj2->datalength() > 0);
    const char* x = reinterpret_cast<const char*>(obj1->data());
    const char* y = reinterpret_cast<const char*>(obj2->data());
    const size_t len1 = obj1->datalength() / sizeof(char);
    const size_t len2 = obj2->datalength() / sizeof(char);

    return nw(x, len1, y, len2);
  }
  DISABLE_COPY_AND_ASSIGN(SpaceNW);
};

}

#endif // _SPACE_NW_H_
