//
//  manager.c
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#include "manager.h"
#include "user.h"
#include "lkstring.h"

int managerHandle() {
    printf("Input manager name and password \n");
    
    char name[100];
    char pwd[100];
    
    printf("name:");
    scanf("%s", name);
    
    printf("pwd:");
    scanf("%s", pwd);
    if (!verifyManager(name, pwd)) {
        printf("manager name or password error\n");
        printf("input again or into search bus line? enter 1/0 \n");
        int type;
        scanf("%d", &type);
        if (type == 1) {
            return managerHandle();
        }else{
            return userHandle();
        }
    }
    // verify success
    
    return 0;
}

bool verifyManager(char *name, char *pwd) {
    
    char *sName = "admin";
    char *sPwd = "123456";
    
    bool vername = compareString(sName, name);
    bool verpwd = compareString(sPwd, pwd);
    if (vername && verpwd) {
        return true;
    }
    
    return false;
}
