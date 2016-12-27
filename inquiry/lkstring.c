//
//  lkstring.c
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#include "lkstring.h"
#include <string.h>

bool compareString(char *v1, char *v2) {
    size_t vlen, v2len;
    vlen = strlen(v1);
    v2len = strlen(v2);
    if (vlen != v2len) {
        return false;
    }
    
    for (int i = 0; i < vlen; i++) {
        char s1 = v1[i];
        char s2 = v2[i];
        if (s1 != s2) {
            return false;
        }
    }
    return true;
}
