//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface GCKError : NSError
{
    _Bool _isTransient;
}

+ (id)enumDescriptionForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 osStatus:(int)arg2 isTransient:(_Bool)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 isTransient:(_Bool)arg3;
+ (id)errorWithCode:(long long)arg1 isTransient:(_Bool)arg2 extraInfo:(id)arg3;
+ (id)errorWithCode:(long long)arg1 isTransient:(_Bool)arg2 customData:(id)arg3 reason:(id)arg4 detailedErrorCode:(id)arg5;
+ (id)errorWithCode:(long long)arg1 isTransient:(_Bool)arg2 customData:(id)arg3;
+ (id)errorWithCode:(long long)arg1 customData:(id)arg2;
+ (id)errorWithCode:(long long)arg1 isTransient:(_Bool)arg2;
+ (id)errorWithCode:(long long)arg1;
@property(nonatomic) _Bool isTransient; // @synthesize isTransient=_isTransient;
- (id)init;
- (id)initWithCode:(long long)arg1;
- (id)initWithCode:(long long)arg1 customData:(id)arg2;
- (id)initWithCode:(long long)arg1 osStatus:(int)arg2 isTransient:(_Bool)arg3;
- (id)initWithCode:(long long)arg1 underlyingError:(id)arg2 isTransient:(_Bool)arg3;
- (id)initWithCode:(long long)arg1 isTransient:(_Bool)arg2 extraInfo:(id)arg3;
- (id)initWithCode:(long long)arg1 isTransient:(_Bool)arg2 customData:(id)arg3;
- (id)initWithCode:(long long)arg1 isTransient:(_Bool)arg2 customData:(id)arg3 reason:(id)arg4 detailedErrorCode:(id)arg5;
- (id)initWithCode:(long long)arg1 isTransient:(_Bool)arg2 additionalUserInfo:(id)arg3;

@end

