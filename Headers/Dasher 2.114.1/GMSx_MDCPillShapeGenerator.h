//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/MDCShapeGenerating-Protocol.h>

@class GMSx_MDCRectangleShapeGenerator, GMSx_MDCRoundedCornerTreatment;

@interface GMSx_MDCPillShapeGenerator : NSObject <MDCShapeGenerating>
{
    GMSx_MDCRectangleShapeGenerator *_rectangleGenerator;
    GMSx_MDCRoundedCornerTreatment *_cornerShape;
}

- (void).cxx_destruct;
- (const struct CGPath *)pathForSize:(struct CGSize)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

