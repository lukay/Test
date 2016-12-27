//
//  main.c
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#include <stdio.h>
#include "manager.h"
#include "user.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("Input your choice 0 or 1  (manager or user) \n");
    int choice;
    scanf("%d", &choice);
    if (choice == 0) {
        return managerHandle();
    }
    // choice == 1
    return userHandle();
}
