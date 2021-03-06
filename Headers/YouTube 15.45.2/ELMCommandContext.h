//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, UIGestureRecognizer;
@protocol ELMContext, ELMController;

@interface ELMCommandContext : NSObject
{
    NSData *_senderState;
    id <ELMController> _sender;
    UIGestureRecognizer *_recognizer;
    id <ELMContext> _context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <ELMContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) UIGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(readonly, nonatomic) id <ELMController> sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSData *senderState; // @synthesize senderState=_senderState;
- (id)initWithContext:(id)arg1 senderState:(id)arg2 sender:(id)arg3 recognizer:(id)arg4;

@end

