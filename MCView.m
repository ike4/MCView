//
//  MCView.m
//  MyView
//
//  Created by ike on 2017/3/18.
//  Copyright © 2017年 ike. All rights reserved.
//

#import "MCView.h"

@implementation MCView

- (void)drawRect:(CGRect)rect {
    
    if (self.boardEnable) {
        if (self.boardWith) {
            self.layer.borderWidth = self.boardWith;
        } else {
            self.layer.borderWidth = 1;
        }
    } else {
        self.layer.borderWidth = 0;
    }
    
    if (self.boardColor) {
        self.layer.borderColor = self.boardColor.CGColor;
    } else {
        self.layer.borderColor = [UIColor lightGrayColor].CGColor;
    }
    
    if (self.masksToBounds) {
        self.layer.masksToBounds = YES;
        if (self.cornerRadius) {
            self.layer.cornerRadius = self.cornerRadius;
        } else {
            self.layer.cornerRadius = 10;
        }
    } else {
        self.layer.cornerRadius = 0;
    }
}

@end
