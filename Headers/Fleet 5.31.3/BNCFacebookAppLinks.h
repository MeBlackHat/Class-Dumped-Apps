//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BNCFacebookAppLinks : NSObject
{
    id _appLinkUtility;
    SEL _fetchDeferredAppLink;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) SEL fetchDeferredAppLink; // @synthesize fetchDeferredAppLink=_fetchDeferredAppLink;
@property(retain, nonatomic) id appLinkUtility; // @synthesize appLinkUtility=_appLinkUtility;
- (void)fetchFacebookAppLinkWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isDeepLinkingClassAvailable;
- (void)registerFacebookDeepLinkingClass:(id)arg1;
- (id)init;

@end

