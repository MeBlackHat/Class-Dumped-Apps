//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BDPMessageCenter : NSObject
{
    NSMutableDictionary *dicMessage;
    struct _opaque_pthread_mutex_t lock;
}

+ (id)defaultCenter;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock;
@property(retain, nonatomic) NSMutableDictionary *dicMessage; // @synthesize dicMessage;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)getMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

