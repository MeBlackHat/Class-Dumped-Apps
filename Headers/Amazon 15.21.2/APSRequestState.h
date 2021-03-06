//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APSPermissionResult, APSSsnapUIController;

@interface APSRequestState : NSObject
{
    CDUnknownBlockType _resultCompletion;
    APSSsnapUIController *_ssnapUIController;
    APSPermissionResult *_permissionResult;
}

+ (id)sharedInstance;
@property(retain, nonatomic) APSPermissionResult *permissionResult; // @synthesize permissionResult=_permissionResult;
@property(retain, nonatomic) APSSsnapUIController *ssnapUIController; // @synthesize ssnapUIController=_ssnapUIController;
@property(copy, nonatomic) CDUnknownBlockType resultCompletion; // @synthesize resultCompletion=_resultCompletion;
- (void).cxx_destruct;
- (void)updatePermissionResultWithStatus:(unsigned long long)arg1 andDetailedResult:(id)arg2;
- (void)showDashboardFromBS;
- (void)executeCallback;
- (void)completeForRequest:(id)arg1 withStatus:(unsigned long long)arg2 withDetailedResult:(id)arg3;
- (void)launchViewControllerForRequest:(id)arg1;
- (void)startForRequest:(id)arg1 detailedResult:(CDUnknownBlockType)arg2;
- (id)init;

@end

