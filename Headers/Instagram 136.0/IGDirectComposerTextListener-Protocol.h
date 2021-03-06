//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectComposerMode, NSString;
@protocol IGDirectComposerProtocol;

@protocol IGDirectComposerTextListener <NSObject>
- (void)composerDidEndEditing:(id <IGDirectComposerProtocol>)arg1;
- (void)composerDidBeginEditing:(id <IGDirectComposerProtocol>)arg1;
- (void)composerDidTapOnTextArea:(id <IGDirectComposerProtocol>)arg1;
- (void)composerDidReachMaxTextLength:(id <IGDirectComposerProtocol>)arg1;
- (void)composer:(id <IGDirectComposerProtocol>)arg1 didChangeToText:(NSString *)arg2 mode:(IGDirectComposerMode *)arg3;
@end

