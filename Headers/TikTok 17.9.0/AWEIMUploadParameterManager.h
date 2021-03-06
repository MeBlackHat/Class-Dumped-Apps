//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEIMUploadParameterModel, NSDictionary, NSError;

@interface AWEIMUploadParameterManager : NSObject
{
    _Bool _hasValidAuth;
    AWEIMUploadParameterModel *_innerPara;
    AWEIMUploadParameterModel *_openPara;
    double _expireTime;
    NSDictionary *_fetchedParas;
    NSError *_fetchedError;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *fetchedError; // @synthesize fetchedError=_fetchedError;
@property(retain, nonatomic) NSDictionary *fetchedParas; // @synthesize fetchedParas=_fetchedParas;
@property(nonatomic) _Bool hasValidAuth; // @synthesize hasValidAuth=_hasValidAuth;
@property(nonatomic) double expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) AWEIMUploadParameterModel *openPara; // @synthesize openPara=_openPara;
@property(retain, nonatomic) AWEIMUploadParameterModel *innerPara; // @synthesize innerPara=_innerPara;
- (void)provideParameterForVideoUploader:(id)arg1 isInner:(_Bool)arg2;
- (void)provideParameterForImageUploader:(id)arg1 isInner:(_Bool)arg2;
- (void)updateParameterWithCompeletion:(CDUnknownBlockType)arg1;
- (void)updateParameter;
- (void)reset;
- (_Bool)isAuthExpired;
- (void)loadFetchedParasIfneeded;

@end

