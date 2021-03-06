//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GraphicUtils : NSObject
{
}

+ (double)opacityForEnabledState:(_Bool)arg1;
+ (id)chevronImageView;
+ (void)drawSeparatorWithColor:(id)arg1 width:(double)arg2 andInset:(double)arg3;
+ (void)drawSeparatorWithWidth:(double)arg1 andInset:(double)arg2;
+ (id)placeholderImageWithSize:(struct CGSize)arg1;
+ (id)roundedRectWithStrokeColor:(id)arg1 fillColor:(id)arg2 width:(double)arg3 height:(double)arg4 corners:(unsigned long long)arg5 cornerRadii:(struct CGSize)arg6 lineWidth:(double)arg7;
+ (id)roundedRectWithStrokeColor:(id)arg1 fillColor:(id)arg2 width:(double)arg3 height:(double)arg4 cornerRadius:(double)arg5 lineWidth:(double)arg6;
+ (id)circleWithColor:(id)arg1 diameter:(double)arg2;
+ (id)imageWithColor:(id)arg1;
+ (id)verticalSeparator;
+ (id)separator;
+ (id)whiteBackgroundRounded;
+ (double)separatorHeight;
+ (double)defaultMarginInset;

@end

