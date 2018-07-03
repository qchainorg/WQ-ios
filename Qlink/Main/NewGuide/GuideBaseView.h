//
//  GuideBaseView.h
//  Qlink
//
//  Created by Jelly Foo on 2018/7/3.
//  Copyright © 2018年 pan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GuideBaseView : UIView

+ (UIView *)showNewGuideCircleWithArcCenter:(CGPoint)center radius:(CGFloat)radius;
+ (UIView *)showNewGuideRectWithRoundedRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius;

@end
