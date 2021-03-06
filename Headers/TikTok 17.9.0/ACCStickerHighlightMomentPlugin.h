//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCStickerGestureResponsiblePluginProtocol-Protocol.h"

@class NSString;
@protocol ACCStickerContainerProtocol;

@interface ACCStickerHighlightMomentPlugin : NSObject <ACCStickerGestureResponsiblePluginProtocol>
{
    _Bool _invalidAction;
    _Bool _hasBackup;
    id <ACCStickerContainerProtocol> stickerContainer;
    struct CGPoint _backupCenter;
    struct CGAffineTransform _backupTransform;
}

+ (id)createPlugin;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasBackup; // @synthesize hasBackup=_hasBackup;
@property(nonatomic) _Bool invalidAction; // @synthesize invalidAction=_invalidAction;
@property(nonatomic) struct CGAffineTransform backupTransform; // @synthesize backupTransform=_backupTransform;
@property(nonatomic) struct CGPoint backupCenter; // @synthesize backupCenter=_backupCenter;
@property(nonatomic) __weak id <ACCStickerContainerProtocol> stickerContainer; // @synthesize stickerContainer;
- (void)sticker:(id)arg1 didEndGesture:(id)arg2;
- (void)resetStickerView:(id)arg1;
- (void)sticker:(id)arg1 didHandleGesture:(id)arg2;
- (_Bool)isPolygon:(id)arg1 intersectWithPolygon:(id)arg2;
- (void)sticker:(id)arg1 willHandleGesture:(id)arg2;
- (void)didChangeLocationWithOperationStickerView:(id)arg1;
- (void)playerFrameChange:(struct CGRect)arg1;
- (void)loadPlugin;
- (long long)implementedContainerFeature;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

