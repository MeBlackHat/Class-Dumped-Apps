//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TCLEndpoint;

@interface TCLViewGroupAssignment : NSObject
{
    int _viewGroupId;
    TCLEndpoint *_currentSender;
}

+ (id)viewGroupAssignmentWithViewGroupId:(int)arg1 currentSender:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TCLEndpoint *currentSender; // @synthesize currentSender=_currentSender;
@property(readonly, nonatomic) int viewGroupId; // @synthesize viewGroupId=_viewGroupId;
- (id)description;
- (id)initWithViewGroupId:(int)arg1 currentSender:(id)arg2;

@end

