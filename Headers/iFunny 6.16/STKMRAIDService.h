//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class STKMRAIDServiceConfiguration;
@protocol STKMRAIDServiceDelegate;

@interface STKMRAIDService : NSObject
{
    STKMRAIDServiceConfiguration *_configuration;
    id <STKMRAIDServiceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <STKMRAIDServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) STKMRAIDServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)open:(id)arg1;
- (void)preloadProductUrl:(id)arg1;
- (void)receiveMessage:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)storePicture:(id)arg1;
- (void)createCalendarEvent:(id)arg1;
- (id)init;

@end

