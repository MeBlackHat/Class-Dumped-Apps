//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOGRTCVideoRenderer-Protocol.h"

@class NSString;
@protocol ASTWebRTCReportingVideoRendererDelegate, GOOGRTCVideoRenderer;

@interface ASTWebRTCReportingVideoRenderer : NSObject <GOOGRTCVideoRenderer>
{
    id <ASTWebRTCReportingVideoRendererDelegate> _delegate;
    id <GOOGRTCVideoRenderer> _renderer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GOOGRTCVideoRenderer> renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak id <ASTWebRTCReportingVideoRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (id)initWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

