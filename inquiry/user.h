//
//  user.h
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#ifndef user_h
#define user_h

#include <stdio.h>

typedef struct _Station {
    char *name;
}Station;

typedef struct _Line {
    char *lineInfo;
    int stationsCount;
    int lineNumber;
    Station *station[0];
}Line;

typedef struct _LineArray {
    Line *line[0];
    int count;
}LineArray;

/**
 用户查询处理
 */
int userHandle(void);

LineArray *getLineArray();

#endif /* user_h */
