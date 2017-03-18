//
//  MCView.h
//  MyView
//
//  Created by ike on 2017/3/18.
//  Copyright © 2017年 ike. All rights reserved.
//

#import <UIKit/UIKit.h>
IB_DESIGNABLE
@interface MCView : UIView
/**
 *  开启边框，默认关闭
 */
@property(nonatomic) IBInspectable BOOL boardEnable; //IBInspectable 修饰的属性可以在 xib或storyboard上显示

/**
 *  边框颜色，默认值lightGrayColor
 */
@property(nonatomic, strong) IBInspectable UIColor *boardColor;

/**
 *  边框宽度，默认为1
 */
@property(nonatomic, assign) IBInspectable NSInteger boardWith;

/**
 *  是否开启圆角效果，默认关闭
 */
@property(nonatomic) IBInspectable BOOL masksToBounds;

/**
 *  圆角弧度，默认值10
 */
@property(nonatomic, assign) IBInspectable float cornerRadius;
- (void)drawRect:(CGRect)rect;
@end
