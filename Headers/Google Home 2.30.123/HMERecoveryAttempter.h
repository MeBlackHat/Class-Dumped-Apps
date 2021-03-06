//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMERetryDelegate;

@interface HMERecoveryAttempter : NSObject
{
    id <HMERetryDelegate> _retryDelegate;
    CDUnknownBlockType _retryBlock;
    NSString *_optionRetry;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *optionRetry; // @synthesize optionRetry=_optionRetry;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(nonatomic) __weak id <HMERetryDelegate> retryDelegate; // @synthesize retryDelegate=_retryDelegate;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)requestError:(id)arg1;
- (id)serverError:(id)arg1;
- (id)connectionError:(id)arg1;
- (id)serverFailureReasonFromError:(id)arg1;
- (id)retryInfo;
- (id)requestErrorInfo;
- (id)serverErrorInfo;
- (id)connectionErrorInfo;
- (id)augmentError:(id)arg1 withUserInfos:(id)arg2;
- (id)errorWithRecoveryOptionsFromError:(id)arg1;
- (id)init;

@end

