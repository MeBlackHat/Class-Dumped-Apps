//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGReproStepAssetProtocol-Protocol.h>

@class NSData, NSString, UIImage;

@interface IBGReproStepIcon : NSObject <IBGReproStepAssetProtocol>
{
    NSString *screenshotIdentifier;
    NSData *screenshot;
    UIImage *screenshotImage;
}

@property(retain, nonatomic) UIImage *screenshotImage; // @synthesize screenshotImage;
@property(retain, nonatomic) NSData *screenshot; // @synthesize screenshot;
@property(copy, nonatomic) NSString *screenshotIdentifier; // @synthesize screenshotIdentifier;
- (void).cxx_destruct;
- (void)loadImage;
- (id)initWithUserStepLogWithButtonImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

