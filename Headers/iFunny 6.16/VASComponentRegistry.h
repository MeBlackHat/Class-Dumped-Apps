//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock;

@interface VASComponentRegistry : NSObject
{
    NSLock *_propertyLock;
    NSDictionary *_registrations;
}

+ (id)logger;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSLock *propertyLock; // @synthesize propertyLock=_propertyLock;
- (id)componentFactoryForType:(id)arg1;
- (id)createComponentForType:(id)arg1 componentInfo:(id)arg2 args:(id)arg3 VASAds:(id)arg4;
- (_Bool)registerComponentFactory:(id)arg1 forType:(id)arg2;
- (id)init;

@end

