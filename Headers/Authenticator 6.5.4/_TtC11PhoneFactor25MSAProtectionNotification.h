//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC11PhoneFactor25MSAProtectionNotification : NSObject
{
    // Error parsing type: , name: messagePurpose
    // Error parsing type: , name: displayTitle
    // Error parsing type: , name: displayContent
    // Error parsing type: , name: primaryButtonLabel
    // Error parsing type: , name: primaryUrl
    // Error parsing type: , name: secondaryButtonLabel
    // Error parsing type: , name: secondaryUrl
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithNotification:(id)arg1;
@property(nonatomic, readonly) NSString *secondaryUrl;
@property(nonatomic, readonly) NSString *secondaryButtonLabel;
@property(nonatomic, readonly) NSString *primaryUrl;
@property(nonatomic, readonly) NSString *primaryButtonLabel;
@property(nonatomic, readonly) NSString *displayContent;
@property(nonatomic, readonly) NSString *displayTitle;
@property(nonatomic, readonly) long long messagePurpose; // @synthesize messagePurpose;

@end

