#include <parasail.h>
#include <parasail/matrices/nuc44.h>

namespace similarity {

template<class T> int nw(const T* p1, size_t len1, const T* p2, size_t len2) 
{
    parasail_result_t* result = parasail_nw_scan_16(p1, len1, p2, len2, 12, 4, &parasail_nuc44);
    int score = parasail_result_get_score(result);
    parasail_result_free(result);

    return 5*len1 + 5*len2 - 2*score;
}

template int nw<char>(const char* p1, size_t len1, const char* p2, size_t len2);
    
}
