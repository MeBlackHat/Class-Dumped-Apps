//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/PTVInteractiveModalViewController.h>

#import <PeriscopeSDK/PTVTitleSubtitleModalViewDelegate-Protocol.h>

@class NSIndexPath, NSString, PTVBroadcast, PTVMergeParticipantUser, PTVTitleSubtitleModalView;
@protocol PTVReportBroadcastModalViewControllerDelegate;

@interface PTVReportBroadcastModalViewController : PTVInteractiveModalViewController <PTVTitleSubtitleModalViewDelegate>
{
    PTVTitleSubtitleModalView *_modalView;
    id <PTVReportBroadcastModalViewControllerDelegate> _delegate;
    long long _reportType;
    PTVBroadcast *_broadcast;
    PTVMergeParticipantUser *_guestUser;
    double _timecode;
    unsigned long long _ntp;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) unsigned long long ntp; // @synthesize ntp=_ntp;
@property(readonly, nonatomic) double timecode; // @synthesize timecode=_timecode;
@property(readonly, nonatomic) PTVMergeParticipantUser *guestUser; // @synthesize guestUser=_guestUser;
@property(readonly, nonatomic) PTVBroadcast *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, nonatomic) long long reportType; // @synthesize reportType=_reportType;
@property(nonatomic) __weak id <PTVReportBroadcastModalViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectDismiss;
- (void)didConfirmReportBroadcast;
- (id)initWithDelegate:(id)arg1 broadcast:(id)arg2 reportType:(long long)arg3 guestUser:(id)arg4 timecode:(double)arg5 ntp:(unsigned long long)arg6;
- (void)loadView;
- (void)titleSubtitleModalViewDidSelectDismiss:(id)arg1;
- (void)titleSubtitleModalViewDidSelectSecondaryAction:(id)arg1;
- (void)titleSubtitleModalViewDidSelectMainAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

