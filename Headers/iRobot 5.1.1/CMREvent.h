//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMREvent : NSObject
{
    struct Handle<std::__1::shared_ptr<core::Event>, std::__1::shared_ptr<core::Event>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)forcedPublish;
- (long long)eventType;
- (_Bool)equals:(id)arg1;
- (id)key;
- (id)timestamp;
- (const shared_ptr_1142b6dc *)cppRef;
- (id)initWithCpp:(const shared_ptr_1142b6dc *)arg1;

@end

